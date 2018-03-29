//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface SPTTasteCollectionCollapsibleFlowLayout : UICollectionViewFlowLayout
{
    long long _permanentStickedSection;
    double _maxHeaderHeight;
    double _minHeaderHeight;
}

@property(nonatomic) double minHeaderHeight; // @synthesize minHeaderHeight=_minHeaderHeight;
@property(nonatomic) double maxHeaderHeight; // @synthesize maxHeaderHeight=_maxHeaderHeight;
@property(nonatomic) long long permanentStickedSection; // @synthesize permanentStickedSection=_permanentStickedSection;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

