/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSMutableCopying, NSSecureCoding> {
    void * _deviceInfo;
    NSString * _hostName;
    long long  _hostPort;
    NSString * _name;
    bool  _paired;
    MRSupportedProtocolMessages * _supportedMessages;
    bool  _usingSystemPairing;
}

@property (nonatomic, readonly) void*deviceInfo;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) long long hostPort;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool paired;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic, readonly) bool usingSystemPairing;

+ (bool)supportsSecureCoding;

- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void*)deviceInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)hostName;
- (long long)hostPort;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (bool)paired;
- (id)supportedMessages;
- (bool)usingSystemPairing;

@end
