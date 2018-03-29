//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchUpdateAnnouncing-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, SCExperimentManager, SCSearchCachedRequestManager, SCSearchUpdateListenerAnnouncer;

@interface SCSearchSnapToStoriesDataProvider : NSObject <SCSearchUpdateAnnouncing>
{
    SCExperimentManager *_experimentManager;
    NSDictionary *_dynamicStoriesForSnapID;
    NSArray *_dynamicStoriesForOurStory;
    NSDictionary *_searchStoryIDForStoryID;
    NSDate *_lastForceReloadDate;
    SCSearchUpdateListenerAnnouncer *_updateAnnouncer;
    SCSearchCachedRequestManager *_cachedRequestManager;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdate;
- (_Bool)_shouldForceReload;
- (void)_updateSnapToStoriesWithResponse:(id)arg1 searchStoryIDForStoryID:(id)arg2 shouldUpdateForceReloadTimestamp:(_Bool)arg3;
- (void)_fetchDynamicStoriesForcedReload:(_Bool)arg1;
- (void)_dispatchFetchDynamicStoriesForSnapsIfNeeded;
- (void)forceReloadIfNeeded;
- (id)dynamicStoriesForOurStory;
- (id)dynamicStoriesForSnapWithID:(id)arg1;
- (void)setUp;
- (void)dealloc;
- (id)initWithSessionRequestManager:(id)arg1 experimentManager:(id)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

