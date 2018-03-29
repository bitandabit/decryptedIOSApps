//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPClient.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface SCBaseAPIClient : AFHTTPClient
{
    NSString *_defaultScheme;
    NSMutableSet *_badErrorCodes;
    NSMutableDictionary *_urlMigrationSettings;
}

@property(retain, nonatomic) NSMutableDictionary *urlMigrationSettings; // @synthesize urlMigrationSettings=_urlMigrationSettings;
@property(readonly, nonatomic) NSMutableSet *badErrorCodes; // @synthesize badErrorCodes=_badErrorCodes;
@property(readonly, nonatomic) NSString *defaultScheme; // @synthesize defaultScheme=_defaultScheme;
- (void).cxx_destruct;
- (id)HTTPRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)putPath:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)deletePath:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)getPath:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)postPath:(id)arg1 parameters:(id)arg2 multipleData:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)postPath:(id)arg1 parameters:(id)arg2 data:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)postPath:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)initWithBaseURL:(id)arg1;

@end

