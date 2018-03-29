//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCWebProxyURLProviding-Protocol.h"

@class NSString, SCLRUCache, SCWebServer;
@protocol SCWebProxyRequestHandling;

@interface SCWebProxy : NSObject <SCWebProxyURLProviding>
{
    SCWebServer *_webServer;
    SCLRUCache *_proxyRequestMetadataByRequestId;
    unsigned long long _lastWebServerPort;
    _Bool _stoppedForAppEnteredBackground;
    id <SCWebProxyRequestHandling> _requestHandler;
}

@property(readonly, nonatomic) __weak id <SCWebProxyRequestHandling> requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_registerForNotificationCenter;
- (void)_handleWebServerRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_initWebServerIfNeeded;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)proxiedURLSForURLS:(id)arg1 extraInfo:(id)arg2;
- (void)stop;
- (id)start;
- (void)dealloc;
- (id)initWithRequestHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

