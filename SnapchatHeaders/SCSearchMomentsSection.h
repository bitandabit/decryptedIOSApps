//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchActionHandling-Protocol.h"
#import "SCSearchCollectionViewSection-Protocol.h"

@class NSString, SCR2SearchSection, SCSearchCollectionViewSectionUpdateModel, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession;
@protocol SCSearchActionHandling, SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler;

@interface SCSearchMomentsSection : NSObject <SCSearchActionHandling, SCSearchCollectionViewSection>
{
    SCSearchSession *_searchSession;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCR2SearchSection *_section;
    id <SCSearchCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler;
    SCSearchCollectionViewSectionUpdateModel *_sectionUpdateModel;
    long long _dataLoadingStatus;
    id <SCSearchActionHandling> _actionHandler;
}

@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(copy, nonatomic) SCSearchCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(nonatomic) __weak id <SCSearchCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (id)supplementaryViewProvider;
- (id)initWithSearchSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
