//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchCarouselContainerCollectionViewCellDelegate-Protocol.h"
#import "SCSearchCollectionViewSection-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"
#import "SCSearchFriendsDataProviderListener-Protocol.h"

@class NSArray, NSString, SCSearchCollectionViewSectionUpdateModel, SCSearchEventListenerAnnouncer, SCSearchFriendsDataProvider, SCSearchQuery, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession;
@protocol SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler;

@interface SCSearchTopChatsSection : NSObject <SCSearchEventListener, SCSearchFriendsDataProviderListener, SCSearchCarouselContainerCollectionViewCellDelegate, SCSearchCollectionViewSection, SCSearchEventAnnouncing>
{
    SCSearchFriendsDataProvider *_friendsDataProvider;
    SCSearchSession *_searchSession;
    NSString *_sectionReuseIdentifier;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_viewModels;
    SCSearchQuery *_currentQuery;
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
- (void)_updateDataSourceWithViewModels:(id)arg1;
- (void)_updateDataSourceWithViewModelsAndReload:(id)arg1;
- (void)_updateQuickChatViewModels;
- (void)_announceVisibleCellsForIndexPaths:(id)arg1;
- (void)_announceVisibleCellsForContainerCell:(id)arg1;
- (void)_announceSearchResultForSection;
- (id)_loggingBasicsSetup;
- (id)_loggingInfoForViewModel:(id)arg1 action:(long long)arg2;
- (void)searchFriendsDataProviderDidUpdateFriends:(id)arg1;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 willDisplayAtIndexPath:(id)arg2 scrolled:(_Bool)arg3;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTriggerActionOnItemAtIndexPath:(id)arg2 withActionModel:(id)arg3 fromSourceView:(id)arg4;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (id)sectionInsets;
- (id)sectionInfo;
- (void)collectionViewWillDisplayCell:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (void)tearDown;
- (void)setUp;
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
