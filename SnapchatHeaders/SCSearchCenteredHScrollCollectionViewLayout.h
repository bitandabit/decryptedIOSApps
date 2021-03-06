//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray;

@interface SCSearchCenteredHScrollCollectionViewLayout : UICollectionViewFlowLayout
{
    NSArray *_layoutAttributes;
    struct CGSize _boundsSizeForLayoutAttributes;
    struct CGSize _collectionViewContentSize;
    _Bool _needsRecomputingLayoutAttributes;
    _Bool _shouldEnableFadeEffect;
    unsigned long long _loopItemCountFactor;
}

@property(nonatomic) _Bool shouldEnableFadeEffect; // @synthesize shouldEnableFadeEffect=_shouldEnableFadeEffect;
@property(nonatomic) unsigned long long loopItemCountFactor; // @synthesize loopItemCountFactor=_loopItemCountFactor;
- (void).cxx_destruct;
- (void)_resetAlphas;
- (void)_updateItemAlpha;
- (void)_updateLayoutAttributes;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)setNeedsRecomputingLayoutAttributes;
- (double)offsetXWithDistanceRatio:(double)arg1 fromItemAtIndex:(unsigned long long)arg2;
- (double)distanceRatioForOffsetX:(double)arg1 fromItemAtIndexPath:(id)arg2;
- (unsigned long long)indexForItemAtOffsetX:(double)arg1;

@end

