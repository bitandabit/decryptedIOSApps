//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCCraftLogger, SCQueuePerformer, SCSessionRequestManager;

@interface SCCraftGcsResourceFetcher : NSObject
{
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
    _Bool _isDevMode;
    SCCraftLogger *_logger;
}

- (void).cxx_destruct;
- (void)_fetchUrl:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_getBatchSignedUrls:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchGcsResources:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1 performer:(id)arg2 isDevMode:(_Bool)arg3 logger:(id)arg4;

@end

