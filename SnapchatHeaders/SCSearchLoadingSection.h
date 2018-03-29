//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchCollectionViewSection-Protocol.h"

@class NSArray, NSString, NSValue, SCSearchCollectionViewSectionUpdateModel, SCSearchQueryStateAwareSupplementaryViewProvider;
@protocol SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler;

@interface SCSearchLoadingSection : NSObject <SCSearchCollectionViewSection>
{
    double _minimumInteritemSpacing;
    NSArray *_carouselContainerCellModels;
    NSValue *_sectionInset;
    long long _loadingCellStyle;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCSearchCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCSearchCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler;
    long long _dataLoadingStatus;
}

@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(nonatomic) __weak id <SCSearchCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCSearchCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void).cxx_destruct;
- (void)_updateSectionsWithConfiguration:(id)arg1;
- (id)sectionInsets;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (id)supplementaryViewProvider;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

