//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, SCBitmojiBuilderManager;
@protocol SCBitmojiOutfitCollectionSourceDelegate;

@interface SCBitmojiOutfitCollectionSource : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray *_sections;
    SCBitmojiBuilderManager *_bitmojiBuilderManager;
    id <SCBitmojiOutfitCollectionSourceDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_refreshHeader:(id)arg1 withBrand:(id)arg2;
- (id)_outfitItemAtIndexPath:(id)arg1;
- (id)_sectionAtIndexPath:(id)arg1;
- (void)reloadOutfits:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithDelegate:(id)arg1 bitmojiBuilderManager:(id)arg2 collectionView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

