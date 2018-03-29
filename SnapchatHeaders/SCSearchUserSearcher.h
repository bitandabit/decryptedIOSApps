//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, SCSessionRequestManager;
@protocol SCPerforming;

@interface SCSearchUserSearcher : NSObject
{
    NSCache *_cache;
    NSMutableDictionary *_currentSearchings;
    SCSessionRequestManager *_sessionRequestManager;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_searchResultFailedToLoadForQueryText:(id)arg1 error:(id)arg2;
- (void)_searchResultLoadedForQueryText:(id)arg1 results:(id)arg2;
- (void)_searchUsersAsyncForQueryText:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 handler:(id)arg4;
- (id)searchUsersAndStoriesForQueryText:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithSessionRequestManager:(id)arg1;

@end
