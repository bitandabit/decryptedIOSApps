//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCProfileView-Protocol.h"

@class CAGradientLayer, NSString, SCGrowingButton, SCSnapcodeView, UICollectionView;

@interface SCProfileV3View : UIView <SCProfileView>
{
    CAGradientLayer *_bottomGradient;
    _Bool _hideSnapScore;
    _Bool _hideAstrologicalSign;
    UICollectionView *_collectionView;
    SCGrowingButton *_backButton;
    SCGrowingButton *_settingsButton;
    SCSnapcodeView *_snapcodeView;
}

@property(readonly, nonatomic) SCSnapcodeView *snapcodeView; // @synthesize snapcodeView=_snapcodeView;
@property(readonly, nonatomic) SCGrowingButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) SCGrowingButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)searchView;
- (id)navigationSeparatorView;
@property(readonly, nonatomic) UIView *contentView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

