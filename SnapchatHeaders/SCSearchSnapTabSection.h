//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchCollectionViewSection-Protocol.h"
#import "SCSearchCollectionViewSectionSupplementaryViewProviding-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"
#import "SCSearchHScrollContainerCollectionViewCellDelegate-Protocol.h"
#import "SCSearchMenuHeaderViewDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SCSearchCachedRequestManager, SCSearchCollectionViewSectionUpdateModel, SCSearchDynamicStory, SCSearchEventListenerAnnouncer, SCSearchMenuHeaderView, SCSearchQuery, SCSearchSession;
@protocol SCSearchCollectionViewSectionDelegate, SCSearchCollectionViewSectionSupplementaryViewProviderDelegate, SCSearchIntentHandler;

@interface SCSearchSnapTabSection : NSObject <SCSearchMenuHeaderViewDelegate, SCSearchHScrollContainerCollectionViewCellDelegate, SCTimeProfilable, SCSearchEventListener, SCSearchCollectionViewSectionSupplementaryViewProviding, SCSearchCollectionViewSection, SCSearchEventAnnouncing>
{
    SCSearchSession *_searchSession;
    SCSearchMenuHeaderView *_headerView;
    NSMutableArray *_mutableContainerConfigurations;
    NSArray *_sectionHeaders;
    NSArray *_suggestionCards;
    NSMutableDictionary *_mutableCategoricalResponsesForTab;
    unsigned long long _selectedIndex;
    unsigned long long _numberOfExpansions;
    double _preferredCellHeight;
    double _collectionViewWidth;
    _Bool _shouldEnableLoop;
    _Bool _shouldEnablePreload;
    SCSearchQuery *_currentQuery;
    SCSearchDynamicStory *_lastViewedStory;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCSearchCachedRequestManager *_cachedRequestManager;
    id <SCSearchCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler;
    SCSearchCollectionViewSectionUpdateModel *_sectionUpdateModel;
    long long _dataLoadingStatus;
    id <SCSearchCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;
}

+ (int)context;
+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCSearchCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate; // @synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(copy, nonatomic) SCSearchCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(nonatomic) __weak id <SCSearchCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleLocationUnauthorized;
- (void)_handleLocationAuthorizedForSuggestionCard:(id)arg1;
- (void)_announceResponseLatencyWithLatency:(double)arg1 isResponseUpToDate:(_Bool)arg2 isCachedResponse:(_Bool)arg3;
- (void)_announceCachedResults:(id)arg1 forCacheKey:(id)arg2;
- (void)_announceResultsForSuggestionCard:(id)arg1 categoricalResponse:(id)arg2;
- (_Bool)_selectedIndexPossible;
- (void)_announceScrollValueIfPossible:(_Bool)arg1;
- (void)_announceCellsWereScrolled:(_Bool)arg1 andCellsForSuggestionCard:(id)arg2 withCellViewModels:(id)arg3;
- (void)_announceScrollValue:(_Bool)arg1;
- (void)_updatePreferredCellHeight:(double)arg1 shouldUpdateIfChanged:(_Bool)arg2 isInteracting:(_Bool)arg3;
- (void)_updateSelectedIndex:(unsigned long long)arg1;
- (void)_announceSearchResultsForSuggestionCard:(id)arg1 categoricalResponse:(id)arg2 queryType:(long long)arg3;
- (void)_announceCellsForSuggestionCard:(id)arg1 withCellViewModels:(id)arg2;
- (id)_extraDataForIndexPath:(id)arg1 actionIdentifier:(id)arg2 categoricalResponse:(id)arg3;
- (id)_extraDataForIndexPath:(id)arg1 action:(long long)arg2 categoricalResponse:(id)arg3;
- (void)_updateSection;
- (void)_updateDataSourceWithSuggestionCards:(id)arg1 sectionTitles:(id)arg2 categoricalResponsesForTab:(id)arg3 containerConfigurations:(id)arg4 numberOfExpansions:(unsigned long long)arg5 selectedIndex:(unsigned long long)arg6 preferredHeight:(double)arg7 query:(id)arg8 shouldEnableLoop:(_Bool)arg9;
- (void)_updateDynamicStories:(id)arg1 forSuggestionCard:(id)arg2 withNewContainerConfiguration:(id)arg3;
- (void)_handleStoriesLoadResponseWithResponse:(id)arg1 searchRequest:(id)arg2 forSuggestionCard:(id)arg3 currentQueryUUID:(id)arg4 resultsQueryUUID:(id)arg5 isResponseUpToDate:(_Bool)arg6 isCachedResponse:(_Bool)arg7 requestSentTimestamp:(id)arg8;
- (void)_announceResultsWithQueryUUID:(id)arg1 currentQueryUUID:(id)arg2 forCacheKey:(id)arg3;
- (void)_loadStoriesForSuggestionCardIfNeeded:(id)arg1;
- (void)_loadStoriesForSuggestionAtIndexPath:(unsigned long long)arg1;
- (void)_loadHeaderViewIfNeeded;
- (void)_updateWithConfiguration:(id)arg1;
- (void)_resetScrollingAndUpdatingWithConfiguration:(id)arg1;
- (void)_updateContainerConfigurations:(id)arg1 numberOfExpansions:(unsigned long long)arg2 preferredHeight:(double)arg3;
- (void)hscrollContainerCollectionViewCell:(id)arg1 willDisplayCellAtIndexPath:(id)arg2;
- (void)hscrollContainerCollectionViewCell:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)hscrollContainerCollectionViewCell:(id)arg1 didDragToItemAtIndex:(unsigned long long)arg2 distanceRatio:(double)arg3;
- (void)hscrollContainerCollectionViewCell:(id)arg1 didTapViewMoreInContainerAtIndex:(unsigned long long)arg2;
- (void)hscrollContainerCollectionViewCell:(id)arg1 didTriggerActionFromItemAtIndexPath:(id)arg2 withActionModel:(id)arg3 fromSourceView:(id)arg4 inContainerAtIndex:(unsigned long long)arg5;
- (void)hscrollContainerCollectionViewCell:(id)arg1 didLongPressItemAtIndexPath:(id)arg2 inContainerAtIndex:(unsigned long long)arg3;
- (void)hscrollContainerCollectionViewCell:(id)arg1 didTapItemAtIndexPath:(id)arg2 inContainerAtIndex:(unsigned long long)arg3;
- (void)searchMenuHeaderView:(id)arg1 didScrollToItemAtIndex:(unsigned long long)arg2;
- (struct CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (id)viewClassesForSupplementaryViewsByElementKind;
@property(readonly, nonatomic) long long sectionHeaderDisplayStrategy;
- (id)supplementaryViewProvider;
- (void)collectionViewWillDisplayCell:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (void)collectionViewWillDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexInSection:(unsigned long long)arg3;
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

