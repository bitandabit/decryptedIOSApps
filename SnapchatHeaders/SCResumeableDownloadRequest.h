//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequest.h"

@class NSData, NSDictionary, NSMutableURLRequest, NSString, NSURL;

@interface SCResumeableDownloadRequest : SCRequest
{
    NSData *_resumeData;
    NSDictionary *_additionalHTTPHeaders;
    NSMutableURLRequest *_urlRequest;
    NSDictionary *_parameters;
    _Bool _didInitWithUrl;
    NSString *_endpoint;
    NSURL *_url;
    NSURL *_location;
}

@property(readonly, copy, nonatomic) NSURL *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (id)downloadedData;
- (id)path;
- (id)url;
- (double)timeoutInterval;
- (void)cleanUp;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (id)downloadTask;
- (void)executeWithEndpointMigrationInfo:(id)arg1 authenticator:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 additionalHTTPHeaders:(id)arg3 contexts:(id)arg4 priority:(long long)arg5 fallbackPriority:(long long)arg6 connectivity:(long long)arg7 trackingInfo:(id)arg8;
- (id)initWithURL:(id)arg1 additionalHTTPHeaders:(id)arg2 contexts:(id)arg3 priority:(long long)arg4 fallbackPriority:(long long)arg5 connectivity:(long long)arg6 trackingInfo:(id)arg7;
- (id)initWithResumeData:(id)arg1 contexts:(id)arg2 priority:(long long)arg3 fallbackPriority:(long long)arg4 connectivity:(long long)arg5 trackingInfo:(id)arg6;

@end

