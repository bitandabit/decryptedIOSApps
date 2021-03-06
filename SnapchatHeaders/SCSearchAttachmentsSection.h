//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchAttachmentsDataProviderListener-Protocol.h"
#import "SCSearchCollectionViewSection-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"

@class NSArray, NSString, SCSearchAttachmentsDataProvider, SCSearchAttachmentsSectionConfiguration, SCSearchCollectionViewSectionUpdateModel, SCSearchEventListenerAnnouncer, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession;
@protocol SCSearchActionHandling, SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler;

@interface SCSearchAttachmentsSection : NSObject <SCSearchAttachmentsDataProviderListener, SCSearchCollectionViewSection, SCSearchEventAnnouncing>
{
    SCSearchSession *_searchSession;
    SCSearchAttachmentsDataProvider *_attachmentsProvider;
    SCSearchAttachmentsSectionConfiguration *_configuration;
    NSArray *_viewModels;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCSearchCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCSearchCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler;
    long long _dataLoadingStatus;
    id <SCSearchActionHandling> _actionHandler;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(nonatomic) __weak id <SCSearchCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCSearchCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void).cxx_destruct;
- (void)_updateViewModels:(id)arg1;
- (void)attachmentDataDidUpdate:(id)arg1;
- (void)_updateSearchResult;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (void)collectionViewWillDisplayCell:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)supplementaryViewProvider;
- (id)initWithSearchSession:(id)arg1 dataProvider:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

