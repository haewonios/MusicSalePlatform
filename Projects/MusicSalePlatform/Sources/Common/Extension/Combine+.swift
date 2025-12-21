//
//  Combine+.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/22/25.
//

import Combine

extension AnyPublisher {
    /// Publisher의 첫 값을 async/await로 변환
    func async() async throws -> Output {
        try await withCheckedThrowingContinuation { continuation in
            var cancellable: AnyCancellable?
            
            cancellable = first()
                .sink(
                    receiveCompletion: { completion in
                        if case let .failure(error) = completion {
                            continuation.resume(throwing: error)
                        }
                        cancellable?.cancel()
                    },
                    receiveValue: { value in
                        continuation.resume(returning: value)
                    }
                )
        }
    }
}

