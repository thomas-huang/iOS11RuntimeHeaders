/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentInternal : NSObject <NSCopying> {
    NSString * _applicationUsername;
    bool  _isStoreOriginated;
    NSString * _partnerIdentifier;
    NSString * _partnerTransactionIdentifier;
    NSString * _productIdentifier;
    long long  _quantity;
    NSData * _requestData;
    NSDictionary * _requestParameters;
    bool  _simulatesAskToBuyInSandbox;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;

@end
