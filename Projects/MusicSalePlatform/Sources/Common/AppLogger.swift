//
//  AppLogger.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/8/25.
//

import Foundation

public final class AppLogger {
    
    private static let logQueue = DispatchQueue(
        label: "com.MusicSalePlatform.logger.queue",
        qos: .utility
    )
    
    private static let logFileURL: URL = {
        let documentDir = FileManager.default.urls(
            for: .documentDirectory,
            in: .userDomainMask
        ).first!
        
        let logDir = documentDir.appendingPathComponent("Logs", isDirectory: true)
        
        if !FileManager.default.fileExists(atPath: logDir.path) {
            try? FileManager.default.createDirectory(
                at: logDir,
                withIntermediateDirectories: true
            )
        }
        
        return logDir.appendingPathComponent("debug.log")
    }()
    
    private init() {}
    
    /// 디버그 로그 출력
    public static func debug(
        _ message: @autoclosure () -> String = "",
        filePath: String = #file,
        funcName: String = #function,
        line: Int = #line
    ) {
        log(
            message(),
            symbol: "🌱",
            filePath: filePath,
            funcName: funcName,
            line: line
        )
    }
    
    /// 경고 로그 출력
    public static func warn(
        _ message: @autoclosure () -> String = "",
        filePath: String = #file,
        funcName: String = #function,
        line: Int = #line
    ) {
        log(
            message(),
            symbol: "⚠️",
            filePath: filePath,
            funcName: funcName,
            line: line
        )
    }
    
    /// 에러 로그 출력
    public static func error(
        _ message: @autoclosure () -> String = "",
        filePath: String = #file,
        funcName: String = #function,
        line: Int = #line
    ) {
        log(
            message(),
            symbol: "❌",
            filePath: filePath,
            funcName: funcName,
            line: line
        )
    }
    
    private static func log(
        _ message: String,
        symbol: String,
        filePath: String,
        funcName: String,
        line: Int
    ) {
#if DEBUG
        
        let fileName = sourceFileName(from: filePath)
        let timestamp = dateFormatter.string(from: Date())
        
        let output =
        "\(symbol) [\(timestamp) \(fileName).\(funcName): \(line)] \(message)"
        
        print(output)
        
        logQueue.async {
            writeToFile(output)
        }
        
#endif
    }
    
    private static let dateFormatter: DateFormatter = {
        let formatter = DateFormatter()
        formatter.locale = Locale(identifier: "ko_KR")
        formatter.timeZone = .current
        formatter.dateFormat = "yyyy-MM-dd HH:mm:ss"
        return formatter
    }()
    
    private static func sourceFileName(from filePath: String) -> String {
        URL(fileURLWithPath: filePath)
            .deletingPathExtension()
            .lastPathComponent
    }
    
    private static func writeToFile(_ text: String) {
        let data = (text + "\n").data(using: .utf8)!
        
        if FileManager.default.fileExists(atPath: logFileURL.path) {
            if let handle = try? FileHandle(forWritingTo: logFileURL) {
                handle.seekToEndOfFile()
                handle.write(data)
                try? handle.close()
            }
        } else {
            try? data.write(to: logFileURL)
        }
    }
}
