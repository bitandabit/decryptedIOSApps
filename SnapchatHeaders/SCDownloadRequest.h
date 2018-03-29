//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequest.h"

@class NSData, NSDictionary, NSMutableURLRequest, NSString, NSURL, NSURLRequest;

@interface SCDownloadRequest : SCRequest
{
    NSDictionary *_parameters;
    NSDictionary *_additionalHTTPHeaders;
    NSMutableURLRequest *_urlRequest;
    double _readTimeoutInterval;
    _Bool _didInitWithUrl;
    NSString *_endpoint;
    NSURL *_url;
    NSData *_resumeData;
    NSURL *_location;
    id _uploadData;
}

@property(readonly, nonatomic) id uploadData; // @synthesize uploadData=_uploadData;
@property(readonly, nonatomic) NSDictionary *additionalHTTPHeaders; // @synthesize additionalHTTPHeaders=_additionalHTTPHeaders;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
- (void).cxx_destruct;
- (id)description;
- (void)_logNilHostEventWithTask;
- (id)_downloadTask;
- (void)setTimeoutInterval:(double)arg1;
- (_Bool)_isValidTimeoutInterval:(double)arg1;
- (id)resumableDownloadedData;
- (id)path;
- (id)url;
- (double)timeoutInterval;
- (void)cleanUp;
- (void)_resumeWithEndpointMigrationInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)resumeWithEndpointMigrationInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_pause;
- (void)pause;
- (void)cancel;
- (void)executeWithEndpointMigrationInfo:(id)arg1 authenticator:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestParser:(id)arg10 requestType:(long long)arg11 method:(long long)arg12 authenticated:(_Bool)arg13 requestTimestamp:(double)arg14 readTimeoutInterval:(double)arg15;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 requestParser:(id)arg11 method:(long long)arg12 authenticated:(_Bool)arg13 requestTimestamp:(double)arg14 readTimeoutInterval:(double)arg15;

@end
