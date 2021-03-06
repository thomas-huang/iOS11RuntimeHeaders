/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFContentBlockerManager : NSObject {
    id  _extensionMatchingContext;
    NSArray * _extensions;
    bool  _lastExtensionDiscoveryHadError;
    NSMutableSet * _observers;
    WKUserContentController * _userContentController;
}

@property (nonatomic, readonly) NSArray *extensions;
@property (nonatomic, readonly) WKUserContentController *userContentController;

+ (id)_contentBlockerLoaderConnection;
+ (void)_createContentExtensionsDirectoryWithURL:(id)arg1;
+ (id)contentBlockerStore;
+ (void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_beginContentBlockerDiscovery;
- (void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)compileContentBlockersAfterDeviceRestore;
- (id)displayNameForExtension:(id)arg1;
- (bool)extensionIsEnabled:(id)arg1;
- (id)extensions;
- (void)reloadUserContentController;
- (void)removeObserver:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(bool)arg2;
- (id)userContentController;

@end
