//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class NSThread;

@interface CRNHTTPProtocolHandler : NSURLProtocol
{
    scoped_refptr_81e0d7bb _core;
    struct scoped_nsprotocol<id<CRNHTTPProtocolHandlerProxy>> _protocolProxy;
    NSThread *_clientThread;
    _Bool _supportedURL;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)cancelRequest;
- (id)getClientThread;
- (scoped_refptr_81e0d7bb)getCore;
- (id)getProtocolHandlerProxy;
- (void)startLoading;
- (id)cachedResponse;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

