//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNumber, NSString, SCWebProxyAESCBCDecryptionLayer, SCWebProxyRequest;

@protocol SCWebProxyAESCBCDecryptionLayerDelegate
- (NSNumber *)proxyDecryptionLayer:(SCWebProxyAESCBCDecryptionLayer *)arg1 unencryptedResourceSizeForProxyRequest:(SCWebProxyRequest *)arg2;
- (NSString *)proxyDecryptionLayer:(SCWebProxyAESCBCDecryptionLayer *)arg1 ivForProxyRequest:(SCWebProxyRequest *)arg2;
- (NSString *)proxyDecryptionLayer:(SCWebProxyAESCBCDecryptionLayer *)arg1 keyForProxyRequest:(SCWebProxyRequest *)arg2;
- (_Bool)proxyDecryptionLayer:(SCWebProxyAESCBCDecryptionLayer *)arg1 shouldDecryptProxyRequest:(SCWebProxyRequest *)arg2;
@end

