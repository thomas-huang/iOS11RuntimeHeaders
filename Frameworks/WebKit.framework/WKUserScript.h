/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKUserScript : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::UserScript> { 
        struct type { 
            unsigned char __lx[144]; 
        } data; 
    }  _userScript;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly) _WKUserContentWorld *_userContentWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForMainFrameOnly, nonatomic, readonly) bool forMainFrameOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long injectionTime;
@property (nonatomic, readonly, copy) NSString *source;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(bool)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 userContentWorld:(id)arg7;
- (id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(bool)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 userContentWorld:(id)arg6;
- (id)_userContentWorld;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(bool)arg3;
- (long long)injectionTime;
- (bool)isForMainFrameOnly;
- (id)source;

@end