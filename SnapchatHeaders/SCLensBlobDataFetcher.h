//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCSessionRequestManager;
@protocol SCPerforming;

@interface SCLensBlobDataFetcher : NSObject
{
    SCSessionRequestManager *_requestManager;
    id <SCPerforming> _performer;
}

+ (id)getAbsolutePathForBlobWithId:(id)arg1;
+ (id)cacheDirectoryPath;
- (void).cxx_destruct;
- (void)boostRequest:(id)arg1 setting:(id)arg2;
- (void)reportError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)fetchBlobWithId:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3 requestSettings:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeExpiredContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetCache:(CDUnknownBlockType)arg1;
- (id)initWithRequestManager:(id)arg1;

@end

