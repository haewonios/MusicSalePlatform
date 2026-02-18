#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedResourceSharedResource, NSBundle, SharedResourceSharedResourceAssets, SharedResourceSharedResourceColors, SharedResourceColorResource, SharedResourceSharedResourceFiles, SharedResourceSharedResourceFonts, SharedResourceSharedResourceImages, SharedResourceImageResource, SharedResourceSharedResourcePlurals, SharedResourceSharedResourceStrings, NSURL, SharedResourceFileResource, UIFont, NSData, UIImage, SharedResourceKotlinThrowable, SharedResourceKotlinArray<T>, SharedResourceKotlinException, NSError, SharedResourceStringResource, SharedResourceCompositionStringDesc, SharedResourcePluralsResource, SharedResourcePluralFormattedStringDesc, SharedResourcePluralStringDesc, SharedResourceRawStringDesc, SharedResourceResourceFormattedStringDesc, SharedResourceResourceStringDesc, SharedResourceStringDescCompanion, SharedResourceStringDescLocaleType, NSLocale, SharedResourceStringDescLocaleTypeSystem, SharedResourceUtils, SharedResourceColorDescCompanion, SharedResourceGraphicsColor, SharedResourceImageDescCompanion, SharedResourceGraphicsColorCompanion, UIColor, SharedResourceAssetResource;

@protocol SharedResourcePlatform, SharedResourceResourceContainer, SharedResourceStringDesc, SharedResourceParcelizeParcelable, SharedResourceColorDesc, SharedResourceImageDesc, SharedResourceKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedResourceBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedResourceBase (SharedResourceBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedResourceMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedResourceMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedResourceKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedResourceNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedResourceByte : SharedResourceNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedResourceUByte : SharedResourceNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedResourceShort : SharedResourceNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedResourceUShort : SharedResourceNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedResourceInt : SharedResourceNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedResourceUInt : SharedResourceNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedResourceLong : SharedResourceNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedResourceULong : SharedResourceNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedResourceFloat : SharedResourceNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedResourceDouble : SharedResourceNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedResourceBoolean : SharedResourceNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedResourceGreeting : SharedResourceBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedResourcePlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedResourceIOSPlatform : SharedResourceBase <SharedResourcePlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResource")))
@interface SharedResourceSharedResource : SharedResourceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedResource __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceSharedResource *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("ResourceContainer")))
@protocol SharedResourceResourceContainer
@required
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResource.assets")))
@interface SharedResourceSharedResourceAssets : SharedResourceBase <SharedResourceResourceContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)assets __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceSharedResourceAssets *shared __attribute__((swift_name("shared")));
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResource.colors")))
@interface SharedResourceSharedResourceColors : SharedResourceBase <SharedResourceResourceContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)colors __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceSharedResourceColors *shared __attribute__((swift_name("shared")));
@property (readonly) SharedResourceColorResource *black __attribute__((swift_name("black")));
@property (readonly) SharedResourceColorResource *divider __attribute__((swift_name("divider")));
@property (readonly) SharedResourceColorResource *error __attribute__((swift_name("error")));
@property (readonly) SharedResourceColorResource *gray_dark __attribute__((swift_name("gray_dark")));
@property (readonly) SharedResourceColorResource *gray_light __attribute__((swift_name("gray_light")));
@property (readonly) SharedResourceColorResource *gray_medium __attribute__((swift_name("gray_medium")));
@property (readonly) SharedResourceColorResource *info __attribute__((swift_name("info")));
@property (readonly) SharedResourceColorResource *main_brand __attribute__((swift_name("main_brand")));
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@property (readonly) SharedResourceColorResource *price_red __attribute__((swift_name("price_red")));
@property (readonly) SharedResourceColorResource *sub_brand __attribute__((swift_name("sub_brand")));
@property (readonly) SharedResourceColorResource *success __attribute__((swift_name("success")));
@property (readonly) SharedResourceColorResource *warning __attribute__((swift_name("warning")));
@property (readonly) SharedResourceColorResource *white __attribute__((swift_name("white")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResource.files")))
@interface SharedResourceSharedResourceFiles : SharedResourceBase <SharedResourceResourceContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)files __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceSharedResourceFiles *shared __attribute__((swift_name("shared")));
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResource.fonts")))
@interface SharedResourceSharedResourceFonts : SharedResourceBase <SharedResourceResourceContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fonts __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceSharedResourceFonts *shared __attribute__((swift_name("shared")));
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResource.images")))
@interface SharedResourceSharedResourceImages : SharedResourceBase <SharedResourceResourceContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)images __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceSharedResourceImages *shared __attribute__((swift_name("shared")));
@property (readonly) SharedResourceImageResource *chat __attribute__((swift_name("chat")));
@property (readonly) SharedResourceImageResource *home __attribute__((swift_name("home")));
@property (readonly) SharedResourceImageResource *location __attribute__((swift_name("location")));
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@property (readonly) SharedResourceImageResource *profile __attribute__((swift_name("profile")));
@property (readonly) SharedResourceImageResource *users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResource.plurals")))
@interface SharedResourceSharedResourcePlurals : SharedResourceBase <SharedResourceResourceContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)plurals __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceSharedResourcePlurals *shared __attribute__((swift_name("shared")));
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResource.strings")))
@interface SharedResourceSharedResourceStrings : SharedResourceBase <SharedResourceResourceContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)strings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceSharedResourceStrings *shared __attribute__((swift_name("shared")));
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("test")))
@interface SharedResourcetest : SharedResourceBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)check __attribute__((swift_name("check()")));
@end

__attribute__((swift_name("FileResource")))
@interface SharedResourceFileResource : SharedResourceBase
- (instancetype)initWithFileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)readText __attribute__((swift_name("readText()")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *extension __attribute__((swift_name("extension")));
@property (readonly) NSString *fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSURL *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetResource")))
@interface SharedResourceAssetResource : SharedResourceFileResource
- (instancetype)initWithOriginalPath:(NSString *)originalPath fileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(originalPath:fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *originalPath __attribute__((swift_name("originalPath")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSURL *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorResource")))
@interface SharedResourceColorResource : SharedResourceBase
- (instancetype)initWithName:(NSString *)name bundle:(NSBundle *)bundle __attribute__((swift_name("init(name:bundle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontResource")))
@interface SharedResourceFontResource : SharedResourceBase
- (instancetype)initWithFontName:(NSString *)fontName bundle:(NSBundle *)bundle __attribute__((swift_name("init(fontName:bundle:)"))) __attribute__((objc_designated_initializer));
- (UIFont *)uiFontWithSize:(double)withSize __attribute__((swift_name("uiFont(withSize:)")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSData *data __attribute__((swift_name("data")));
@property (readonly) NSString *filePath __attribute__((swift_name("filePath")));
@property (readonly) NSString *fontName __attribute__((swift_name("fontName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageResource")))
@interface SharedResourceImageResource : SharedResourceBase
- (instancetype)initWithAssetImageName:(NSString *)assetImageName bundle:(NSBundle *)bundle __attribute__((swift_name("init(assetImageName:bundle:)"))) __attribute__((objc_designated_initializer));
- (UIImage * _Nullable)toUIImage __attribute__((swift_name("toUIImage()")));
@property (readonly) NSString *assetImageName __attribute__((swift_name("assetImageName")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralsResource")))
@interface SharedResourcePluralsResource : SharedResourceBase
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedResourceKotlinThrowable : SharedResourceBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedResourceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedResourceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedResourceKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedResourceKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedResourceKotlinException : SharedResourceKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedResourceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedResourceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadFileTextException")))
@interface SharedResourceReadFileTextException : SharedResourceKotlinException
- (instancetype)initWithFileResource:(SharedResourceFileResource *)fileResource info:(NSString *)info __attribute__((swift_name("init(fileResource:info:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFileResource:(SharedResourceFileResource *)fileResource error:(NSError *)error __attribute__((swift_name("init(fileResource:error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedResourceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedResourceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) SharedResourceFileResource *fileResource __attribute__((swift_name("fileResource")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringResource")))
@interface SharedResourceStringResource : SharedResourceBase
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
- (SharedResourceStringResource *)doCopyResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("doCopy(resourceId:bundle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((swift_name("StringDesc")))
@protocol SharedResourceStringDesc
@required
- (NSString *)localized __attribute__((swift_name("localized()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositionStringDesc")))
@interface SharedResourceCompositionStringDesc : SharedResourceBase <SharedResourceStringDesc>
- (instancetype)initWithArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("init(args:separator:)"))) __attribute__((objc_designated_initializer));
- (SharedResourceCompositionStringDesc *)doCopyArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("doCopy(args:separator:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id args __attribute__((swift_name("args")));
@property (readonly) NSString * _Nullable separator __attribute__((swift_name("separator")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralFormattedStringDesc")))
@interface SharedResourcePluralFormattedStringDesc : SharedResourceBase <SharedResourceStringDesc>
- (instancetype)initWithPluralsRes:(SharedResourcePluralsResource *)pluralsRes number:(int32_t)number args:(NSArray<id> *)args __attribute__((swift_name("init(pluralsRes:number:args:)"))) __attribute__((objc_designated_initializer));
- (SharedResourcePluralFormattedStringDesc *)doCopyPluralsRes:(SharedResourcePluralsResource *)pluralsRes number:(int32_t)number args:(NSArray<id> *)args __attribute__((swift_name("doCopy(pluralsRes:number:args:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *args __attribute__((swift_name("args")));
@property (readonly) int32_t number __attribute__((swift_name("number")));
@property (readonly) SharedResourcePluralsResource *pluralsRes __attribute__((swift_name("pluralsRes")));
@end

__attribute__((swift_name("ParcelizeParcelable")))
@protocol SharedResourceParcelizeParcelable
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralStringDesc")))
@interface SharedResourcePluralStringDesc : SharedResourceBase <SharedResourceStringDesc, SharedResourceParcelizeParcelable>
- (instancetype)initWithPluralsRes:(SharedResourcePluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("init(pluralsRes:number:)"))) __attribute__((objc_designated_initializer));
- (SharedResourcePluralStringDesc *)doCopyPluralsRes:(SharedResourcePluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("doCopy(pluralsRes:number:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t number __attribute__((swift_name("number")));
@property (readonly) SharedResourcePluralsResource *pluralsRes __attribute__((swift_name("pluralsRes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RawStringDesc")))
@interface SharedResourceRawStringDesc : SharedResourceBase <SharedResourceStringDesc, SharedResourceParcelizeParcelable>
- (instancetype)initWithString:(NSString *)string __attribute__((swift_name("init(string:)"))) __attribute__((objc_designated_initializer));
- (SharedResourceRawStringDesc *)doCopyString:(NSString *)string __attribute__((swift_name("doCopy(string:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *string __attribute__((swift_name("string")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceFormattedStringDesc")))
@interface SharedResourceResourceFormattedStringDesc : SharedResourceBase <SharedResourceStringDesc>
- (instancetype)initWithStringRes:(SharedResourceStringResource *)stringRes args:(NSArray<id> *)args __attribute__((swift_name("init(stringRes:args:)"))) __attribute__((objc_designated_initializer));
- (SharedResourceResourceFormattedStringDesc *)doCopyStringRes:(SharedResourceStringResource *)stringRes args:(NSArray<id> *)args __attribute__((swift_name("doCopy(stringRes:args:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *args __attribute__((swift_name("args")));
@property (readonly) SharedResourceStringResource *stringRes __attribute__((swift_name("stringRes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceStringDesc")))
@interface SharedResourceResourceStringDesc : SharedResourceBase <SharedResourceStringDesc, SharedResourceParcelizeParcelable>
- (instancetype)initWithStringRes:(SharedResourceStringResource *)stringRes __attribute__((swift_name("init(stringRes:)"))) __attribute__((objc_designated_initializer));
- (SharedResourceResourceStringDesc *)doCopyStringRes:(SharedResourceStringResource *)stringRes __attribute__((swift_name("doCopy(stringRes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedResourceStringResource *stringRes __attribute__((swift_name("stringRes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescCompanion")))
@interface SharedResourceStringDescCompanion : SharedResourceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceStringDescCompanion *shared __attribute__((swift_name("shared")));
@property SharedResourceStringDescLocaleType *localeType __attribute__((swift_name("localeType")));
@end

__attribute__((swift_name("StringDescLocaleType")))
@interface SharedResourceStringDescLocaleType : SharedResourceBase
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescLocaleType.Custom")))
@interface SharedResourceStringDescLocaleTypeCustom : SharedResourceStringDescLocaleType
- (instancetype)initWithLocale:(NSString *)locale __attribute__((swift_name("init(locale:)"))) __attribute__((objc_designated_initializer));
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescLocaleType.System")))
@interface SharedResourceStringDescLocaleTypeSystem : SharedResourceStringDescLocaleType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)system __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceStringDescLocaleTypeSystem *shared __attribute__((swift_name("shared")));
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface SharedResourceUtils : SharedResourceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)utils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceUtils *shared __attribute__((swift_name("shared")));
- (NSString *)localizedStringStringRes:(SharedResourceStringResource *)stringRes __attribute__((swift_name("localizedString(stringRes:)")));
- (SharedResourceKotlinArray<id> *)processArgsArgs:(NSArray<id> *)args __attribute__((swift_name("processArgs(args:)")));
- (NSString *)stringWithFormatFormat:(NSString *)format args:(SharedResourceKotlinArray<id> *)args __attribute__((swift_name("stringWithFormat(format:args:)")));
@end

__attribute__((swift_name("ColorDesc")))
@protocol SharedResourceColorDesc
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescCompanion")))
@interface SharedResourceColorDescCompanion : SharedResourceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceColorDescCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescResource")))
@interface SharedResourceColorDescResource : SharedResourceBase <SharedResourceColorDesc>
- (instancetype)initWithResource:(SharedResourceColorResource *)resource __attribute__((swift_name("init(resource:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedResourceColorResource *resource __attribute__((swift_name("resource")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescSingle")))
@interface SharedResourceColorDescSingle : SharedResourceBase <SharedResourceColorDesc>
- (instancetype)initWithColor:(SharedResourceGraphicsColor *)color __attribute__((swift_name("init(color:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedResourceGraphicsColor *color __attribute__((swift_name("color")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescThemed")))
@interface SharedResourceColorDescThemed : SharedResourceBase <SharedResourceColorDesc>
- (instancetype)initWithLightColor:(SharedResourceGraphicsColor *)lightColor darkColor:(SharedResourceGraphicsColor *)darkColor __attribute__((swift_name("init(lightColor:darkColor:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedResourceGraphicsColor *darkColor __attribute__((swift_name("darkColor")));
@property (readonly) SharedResourceGraphicsColor *lightColor __attribute__((swift_name("lightColor")));
@end

__attribute__((swift_name("ImageDesc")))
@protocol SharedResourceImageDesc
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescCompanion")))
@interface SharedResourceImageDescCompanion : SharedResourceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceImageDescCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescResource")))
@interface SharedResourceImageDescResource : SharedResourceBase <SharedResourceImageDesc>
- (instancetype)initWithResource:(SharedResourceImageResource *)resource __attribute__((swift_name("init(resource:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedResourceImageResource *resource __attribute__((swift_name("resource")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescUrl")))
@interface SharedResourceImageDescUrl : SharedResourceBase <SharedResourceImageDesc>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphicsColor")))
@interface SharedResourceGraphicsColor : SharedResourceBase
- (instancetype)initWithColorRGBA:(int64_t)colorRGBA __attribute__((swift_name("init(colorRGBA:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue alpha:(int32_t)alpha __attribute__((swift_name("init(red:green:blue:alpha:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedResourceGraphicsColorCompanion *companion __attribute__((swift_name("companion")));
- (SharedResourceGraphicsColor *)doCopyRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue alpha:(int32_t)alpha __attribute__((swift_name("doCopy(red:green:blue:alpha:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t alpha __attribute__((swift_name("alpha")));
@property (readonly) int64_t argb __attribute__((swift_name("argb")));
@property (readonly) int32_t blue __attribute__((swift_name("blue")));
@property (readonly) int32_t green __attribute__((swift_name("green")));
@property (readonly) int32_t red __attribute__((swift_name("red")));
@property (readonly) int64_t rgba __attribute__((swift_name("rgba")));
@end

@interface SharedResourceGraphicsColor (Extensions)
- (id<SharedResourceColorDesc>)asColorDesc __attribute__((swift_name("asColorDesc()")));
@end

@interface SharedResourceColorResource (Extensions)
- (id<SharedResourceColorDesc>)asColorDesc __attribute__((swift_name("asColorDesc()")));
- (UIColor *)getUIColor __attribute__((swift_name("getUIColor()")));
@end

@interface SharedResourceImageResource (Extensions)
- (id<SharedResourceImageDesc>)asImageDesc __attribute__((swift_name("asImageDesc()")));
@end

@interface SharedResourcePluralsResource (Extensions)
- (SharedResourcePluralStringDesc *)descNumber:(int32_t)number __attribute__((swift_name("desc(number:)")));
- (SharedResourcePluralFormattedStringDesc *)formatNumber:(int32_t)number args:(SharedResourceKotlinArray<id> *)args __attribute__((swift_name("format(number:args:)")));
- (SharedResourcePluralFormattedStringDesc *)formatNumber:(int32_t)number args_:(NSArray<id> *)args __attribute__((swift_name("format(number:args_:)")));
@end

@interface SharedResourceStringResource (Extensions)
- (SharedResourceResourceStringDesc *)desc __attribute__((swift_name("desc()")));
- (SharedResourceResourceFormattedStringDesc *)formatArgs:(SharedResourceKotlinArray<id> *)args __attribute__((swift_name("format(args:)")));
- (SharedResourceResourceFormattedStringDesc *)formatArgs_:(NSArray<id> *)args __attribute__((swift_name("format(args_:)")));
@end

@interface SharedResourceStringDescCompanion (Extensions)
- (SharedResourceCompositionStringDesc *)CompositionArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("Composition(args:separator:)")));
- (SharedResourcePluralStringDesc *)PluralPluralsRes:(SharedResourcePluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("Plural(pluralsRes:number:)")));
- (SharedResourcePluralFormattedStringDesc *)PluralFormattedPluralsRes:(SharedResourcePluralsResource *)pluralsRes number:(int32_t)number args:(SharedResourceKotlinArray<id> *)args __attribute__((swift_name("PluralFormatted(pluralsRes:number:args:)")));
- (SharedResourcePluralFormattedStringDesc *)PluralFormattedPluralsRes:(SharedResourcePluralsResource *)pluralsRes number:(int32_t)number args_:(NSArray<id> *)args __attribute__((swift_name("PluralFormatted(pluralsRes:number:args_:)")));
- (SharedResourceRawStringDesc *)RawString:(NSString *)string __attribute__((swift_name("Raw(string:)")));
- (SharedResourceResourceStringDesc *)ResourceStringRes:(SharedResourceStringResource *)stringRes __attribute__((swift_name("Resource(stringRes:)")));
- (SharedResourceResourceFormattedStringDesc *)ResourceFormattedStringRes:(SharedResourceStringResource *)stringRes args:(SharedResourceKotlinArray<id> *)args __attribute__((swift_name("ResourceFormatted(stringRes:args:)")));
- (SharedResourceResourceFormattedStringDesc *)ResourceFormattedStringRes:(SharedResourceStringResource *)stringRes args_:(NSArray<id> *)args __attribute__((swift_name("ResourceFormatted(stringRes:args_:)")));
@end

@interface SharedResourceColorDescCompanion (Extensions)
- (id<SharedResourceColorDesc>)ResourceResource:(SharedResourceColorResource *)resource __attribute__((swift_name("Resource(resource:)")));
- (id<SharedResourceColorDesc>)SingleColor:(SharedResourceGraphicsColor *)color __attribute__((swift_name("Single(color:)")));
- (id<SharedResourceColorDesc>)ThemedLightColor:(SharedResourceGraphicsColor *)lightColor darkColor:(SharedResourceGraphicsColor *)darkColor __attribute__((swift_name("Themed(lightColor:darkColor:)")));
@end

@interface SharedResourceImageDescCompanion (Extensions)
- (id<SharedResourceImageDesc>)ResourceResource:(SharedResourceImageResource *)resource __attribute__((swift_name("Resource(resource:)")));
- (id<SharedResourceImageDesc>)UrlUrl:(NSString *)url __attribute__((swift_name("Url(url:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescExtKt")))
@interface SharedResourceColorDescExtKt : SharedResourceBase
+ (UIColor *)getUIColor:(id<SharedResourceColorDesc>)receiver __attribute__((swift_name("getUIColor(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescUrlKt")))
@interface SharedResourceImageDescUrlKt : SharedResourceBase
+ (id<SharedResourceImageDesc>)asImageUrl:(NSString *)receiver __attribute__((swift_name("asImageUrl(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSBundleExtKt")))
@interface SharedResourceNSBundleExtKt : SharedResourceBase
+ (NSBundle *)loadableBundle:(Class)receiver identifier:(NSString *)identifier __attribute__((swift_name("loadableBundle(_:identifier:)")));
@property (class) BOOL isBundleSearchLogEnabled __attribute__((swift_name("isBundleSearchLogEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface SharedResourcePlatformKt : SharedResourceBase
+ (id<SharedResourcePlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceContainerExtKt")))
@interface SharedResourceResourceContainerExtKt : SharedResourceBase
+ (SharedResourceAssetResource * _Nullable)getAssetByFilePath:(id<SharedResourceResourceContainer>)receiver filePath:(NSString *)filePath __attribute__((swift_name("getAssetByFilePath(_:filePath:)")));
+ (SharedResourceImageResource * _Nullable)getImageByFileName:(id<SharedResourceResourceContainer>)receiver fileName:(NSString *)fileName __attribute__((swift_name("getImageByFileName(_:fileName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescKt")))
@interface SharedResourceStringDescKt : SharedResourceBase
+ (SharedResourceRawStringDesc *)desc:(NSString *)receiver __attribute__((swift_name("desc(_:)")));
+ (id<SharedResourceStringDesc>)joinToStringDesc:(id)receiver separator:(NSString *)separator __attribute__((swift_name("joinToStringDesc(_:separator:)")));
+ (id<SharedResourceStringDesc>)plus:(id<SharedResourceStringDesc>)receiver other:(id<SharedResourceStringDesc>)other __attribute__((swift_name("plus(_:other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestKt")))
@interface SharedResourceTestKt : SharedResourceBase
+ (void)check __attribute__((swift_name("check()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedResourceKotlinArray<T> : SharedResourceBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedResourceInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedResourceKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphicsColor.Companion")))
@interface SharedResourceGraphicsColorCompanion : SharedResourceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResourceGraphicsColorCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedResourceKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
