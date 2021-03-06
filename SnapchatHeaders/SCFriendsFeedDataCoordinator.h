//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"

@class NSArray, NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCLazy, SCQueuePerformer;

@interface SCFriendsFeedDataCoordinator : NSObject <SCDataCoordinating, SCDataCoordinatorListener>
{
    SCDocObjectContext *_docObjectContext;
    SCLazy *_messagingDataCoordinatorLazy;
    SCLazy *_personDataCoordinatorLazy;
    SCLazy *_storiesDataCoordinatorLazy;
    SCLazy *_serverSignalDataCoordinatorLazy;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_dataUpdatePerformer;
    NSArray *_friendsFeedItems;
}

+ (id)dataCoordinatorIdentifier;
@property(readonly, copy, nonatomic) NSArray *friendsFeedItems; // @synthesize friendsFeedItems=_friendsFeedItems;
- (void).cxx_destruct;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)_updateFriendsFeedItemsWithFeedItems:(id)arg1 dataRequest:(id)arg2;
- (void)_buildFeedItemsAndUpdate:(id)arg1 dataRequest:(id)arg2 activeMessageDataByFeedId:(id)arg3 entityDataByFeedId:(id)arg4 storiesDataByFeedId:(id)arg5;
- (void)_fetchFeedInfoWithFeedItemInfos:(id)arg1 dataRequest:(id)arg2;
- (void)_handleMessageUpdatesWithDataRequest:(id)arg1;
- (void)_handleFeedItemUpdatesWithDataRequest:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 messagingDataCoordinatorLazy:(id)arg2 personDataCoordinatorLazy:(id)arg3 storiesDataCoordinatorLazy:(id)arg4 serverSignalDataCoordinatorLazy:(id)arg5;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

