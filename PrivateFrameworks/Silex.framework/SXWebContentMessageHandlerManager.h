/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentMessageHandlerManager : NSObject <SXWebContentMessageHandlerManager, WKScriptMessageHandler> {
    NSMutableDictionary * _messageHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *messageHandlers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addMessageHandler:(id)arg1 name:(id)arg2;
- (id)initWithUserContentController:(id)arg1;
- (id)messageHandlers;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end
