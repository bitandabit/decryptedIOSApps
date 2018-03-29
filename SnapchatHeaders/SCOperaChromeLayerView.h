//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSArray, NSString, SCGradientView, SCOperaActionMenuV2HDButton, SCOperaHeaderView;

@interface SCOperaChromeLayerView : UIView <SCTimeProfilable, SCOperaLayerView>
{
    NSArray *_gradientAlphaArray;
    double _gradientHeight;
    _Bool _isTitleViewHidden;
    SCOperaActionMenuV2HDButton *_hdButton;
    SCOperaHeaderView *_headerView;
    SCGradientView *_gradientView;
}

+ (int)context;
+ (_Bool)requiresConstraintBasedLayout;
+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) SCGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) SCOperaHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) SCOperaActionMenuV2HDButton *hdButton; // @synthesize hdButton=_hdButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupHdIconViewWithLayer:(id)arg1;
- (void)setTitleViewFadeAnimation:(_Bool)arg1 shortAnimationDuration:(double)arg2 longAnimationDuration:(double)arg3 delay:(double)arg4;
- (void)setGradientAlpha:(double)arg1;
- (void)setHeaderAlpha:(double)arg1;
- (void)setVisible:(_Bool)arg1;
- (void)fadeOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupViewForLayer:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
