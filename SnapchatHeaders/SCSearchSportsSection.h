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

@class NSArray, NSString, SCSearchCollectionViewSectionUpdateModel, SCSearchEventListenerAnnouncer, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSectionHeaderModel, SCSearchSession;
@protocol SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler;

@interface SCSearchSportsSection : NSObject <SCSearchEventListener, SCSearchCarouselContainerCollectionViewCellDelegate, SCSearchCollectionViewSection, SCSearchEventAnnouncing>
{
    SCSearchSession *_searchSession;
    NSString *_sectionTitle;
    NSString *_sectionType;
    SCSearchSectionHeaderModel *_sectionHeaderModel;
    NSArray *_carouselContainerCellModels;
    NSArray *_sportsGames;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    unsigned long long _numberOfRows;
    _Bool _shouldResetCarouselContentOffset;
    long long _cellStyle;
    _Bool _shouldAnnounceCells;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCSearchCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCSearchCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler;
    long long _dataLoadingStatus;
}

+ (id)announcerIdentifier;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(nonatomic) __weak id <SCSearchCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCSearchCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void).cxx_destruct;
- (void)_announceVisibleCellsForIndexPaths:(id)arg1;
- (void)_announceVisibleCellsForContainerCell:(id)arg1;
- (void)_announceSearchResultForSection;
- (id)_extraDataForIndexPath:(id)arg1 action:(long long)arg2;
- (void)_updateSections;
- (void)_updateDataSourceWithCarouselContainerCellModels:(id)arg1 configuration:(id)arg2;
- (void)_updateWithConfiguration:(id)arg1;
- (void)_resetContent;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTriggerActionOnItemAtIndexPath:(id)arg2 withActionModel:(id)arg3 fromSourceView:(id)arg4;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)collectionViewWillDisplayCell:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (id)sectionInfo;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)sectionTitle;
- (id)sectionHeaderModel;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (id)supplementaryViewProvider;
- (id)initWithSearchSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

