//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, SCProfileBioCarouselViewModel, UICollectionView, UICollectionViewFlowLayout, UISwipeGestureRecognizer;

@interface SCProfileBioCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    NSIndexPath *_selectedIndex;
    SCProfileBioCarouselViewModel *_viewModel;
    _Bool _useCustomIcon;
    UICollectionViewFlowLayout *_iconViewLayout;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UICollectionView *_profileContentCollectionView;
    UICollectionView *_iconCollectionView;
    NSDictionary *_contentCellClassesByReuseIdentifier;
    NSDictionary *_cellConfigurationBlocksByReuseIdentifier;
}

@property(copy, nonatomic) NSDictionary *cellConfigurationBlocksByReuseIdentifier; // @synthesize cellConfigurationBlocksByReuseIdentifier=_cellConfigurationBlocksByReuseIdentifier;
@property(copy, nonatomic) NSDictionary *contentCellClassesByReuseIdentifier; // @synthesize contentCellClassesByReuseIdentifier=_contentCellClassesByReuseIdentifier;
@property(readonly, nonatomic) UICollectionView *iconCollectionView; // @synthesize iconCollectionView=_iconCollectionView;
@property(readonly, nonatomic) UICollectionView *profileContentCollectionView; // @synthesize profileContentCollectionView=_profileContentCollectionView;
- (void).cxx_destruct;
- (void)_setIconSelectedFromIndex:(id)arg1 isSelected:(_Bool)arg2;
- (void)_setSelectedIndex:(id)arg1;
- (void)_handleSwipeRight;
- (void)_handleSwipeLeft;
- (double)_getIconViewHeight:(_Bool)arg1;
- (double)_getIconSpacing:(_Bool)arg1;
- (double)_getIconSize:(_Bool)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isBioCarouselGestureRecognizer:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)_configProfileContentCollectionView;
- (void)_configIconCollectionView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

