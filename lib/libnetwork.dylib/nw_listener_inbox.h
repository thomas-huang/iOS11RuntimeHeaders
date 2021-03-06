/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface nw_listener_inbox : NSObject {
    NSObject<nw_listener_inbox_delegate> * _delegate;
    NSObject<OS_nw_interface> * _interface;
    NSObject<OS_nw_endpoint> * _local_endpoint;
}

@property (nonatomic, readonly) NSObject<OS_nw_interface> *interface;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *local_endpoint;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDelegate:(id)arg1;
- (id)interface;
- (id)local_endpoint;

@end
