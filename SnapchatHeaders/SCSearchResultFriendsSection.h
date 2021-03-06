//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCFeedManagerListener-Protocol.h"
#import "SCSearchCollectionViewCellDelegate-Protocol.h"
#import "SCSearchCollectionViewSection-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchResultViewMoreCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSString, SCSearchCollectionViewSectionUpdateModel, SCSearchEventListenerAnnouncer, SCSearchQuery, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession, SCSearchThresholdBasedModelContainer;
@protocol SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler;

@interface SCSearchResultFriendsSection : NSObject <SCSearchCollectionViewCellDelegate, SCSearchResultViewMoreCollectionViewCellDelegate, SCFeedManagerListener, SCSearchCollectionViewSection, SCSearchEventAnnouncing>
{
    SCSearchSession *_searchSession;
    SCSearchQuery *_currentQuery;
    NSArray *_verifiedUsernames;
    NSArray *_displayedFriendsViewModel;
    SCSearchThresholdBasedModelContainer *_rankedFriendsContainer;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    _Bool _resetData;
    _Bool _didUpdateFriendInCurrentQuery;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    id <SCSearchCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler;
    SCSearchCollectionViewSectionUpdateModel *_sectionUpdateModel;
    long long _dataLoadingStatus;
}

+ (id)announcerIdentifier;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(copy, nonatomic) SCSearchCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(nonatomic) __weak id <SCSearchCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_announceSearchResultForSection;
- (void)_announceOnScreenForCell:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (id)_loggingInfoForAction:(long long)arg1 atIndexPath:(id)arg2;
- (void)_expandResults;
- (void)_updateSection;
- (void)_updateSectionWithRankedFriends:(id)arg1 displayedViewModels:(id)arg2 queryText:(id)arg3 verifiedUsernames:(id)arg4;
- (void)_reloadCellWithIndexes:(id)arg1 rankedFriends:(id)arg2 displayedViewModels:(id)arg3 queryText:(id)arg4 verifiedUsernames:(id)arg5;
- (void)_updateCellsWithRankedFriends:(id)arg1 displayedViewModels:(id)arg2 queryText:(id)arg3 verifiedUsernames:(id)arg4;
- (void)_updateDataSourceWithRankedFriends:(id)arg1 displayedViewModels:(id)arg2 queryText:(id)arg3 verifiedUsernames:(id)arg4;
- (void)_processUpdatedDataModel:(id)arg1 withQuery:(id)arg2 verifiedUsernames:(id)arg3;
- (void)_performNewQueryWithQuery:(id)arg1 verifiedUsernames:(id)arg2;
- (void)_updateResultsForFriendsUpdate;
- (void)_updateForExpansion;
- (id)_searchResultsForQuery:(id)arg1 verifiedUsernames:(id)arg2;
- (void)_handleOpenMiniProfileForFriend:(id)arg1 atIndexPath:(id)arg2;
- (void)_handleOpenStoriesForFriendStories:(id)arg1 sourceView:(id)arg2 atIndexPath:(id)arg3;
- (void)_handleOpenChatForFriend:(id)arg1 atIndexPath:(id)arg2;
- (void)_handleActionForFriend:(id)arg1 actionModel:(id)arg2 sourceView:(id)arg3 atIndexPath:(id)arg4;
- (void)_handleFriendsUpdate;
- (void)didFeedManagerViewModelChange:(id)arg1;
- (void)resultViewMoreCollectionViewCellDidTapViewMore:(id)arg1;
- (void)searchCollectionViewCell:(id)arg1 didTriggerActionWithActionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)sectionInfo;
- (void)collectionViewWillDisplayCell:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)supplementaryViewProvider;
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

