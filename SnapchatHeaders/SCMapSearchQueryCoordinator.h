//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchQueryCoordinating-Protocol.h"

@class NSString, SCMTGetSearchCardsResponse, SCMapSearchSession, SCSearchEventListenerAnnouncer, SCSearchNavigationCoordinator, SCSearchQuery;

@interface SCMapSearchQueryCoordinator : NSObject <SCSearchQueryCoordinating, SCSearchEventAnnouncing>
{
    SCMapSearchSession *_mapSearchSession;
    NSString *_queryIdentifier;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCMTGetSearchCardsResponse *_latestResponse;
    _Bool _isLoading;
    SCSearchQuery *_currentQuery;
    SCSearchNavigationCoordinator *_navigationCoordinator;
}

+ (id)_localZeroTypeSearchResponseForQuery:(id)arg1;
+ (id)_searchRequestForQuery:(id)arg1 mapSearchSession:(id)arg2;
+ (id)_peopleOnMapForQuery:(id)arg1 searchSession:(id)arg2;
+ (id)_friendsForPeople:(id)arg1;
+ (id)_peopleForFriends:(id)arg1;
+ (id)_peopleForFriendLocations:(id)arg1;
+ (id)_filteredPeople:(id)arg1 query:(id)arg2 excludingPeople:(id)arg3;
+ (id)announcerIdentifier;
@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
- (void).cxx_destruct;
- (id)_viewModelsForRows:(id)arg1;
- (id)_viewModelsForPeople:(id)arg1;
- (id)_viewModelProviderForSection:(id)arg1 query:(id)arg2;
- (long long)_numToShowForSection:(id)arg1;
- (void)_announceSearchAction:(long long)arg1;
- (void)_didCompleteQuery:(id)arg1 response:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_performSearchRequestForQuery:(id)arg1 queryIdentifier:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (_Bool)canPerformQuery:(id)arg1;
- (id)initWithSearchSession:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
