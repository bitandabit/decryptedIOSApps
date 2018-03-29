//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, SCOperaCardInteractionProgressView, UIImageView, UILabel;

@interface SCOperaCardInteractionCardView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    long long _loadingIndicatorType;
    SCLoadingIndicatorView *_spinningLoadingIndicator;
    SCOperaCardInteractionProgressView *_progressLoadingIndicator;
}

- (void).cxx_destruct;
- (double)getCurrentProgress;
- (void)setCurrentProgress:(double)arg1;
- (void)updateImageView:(id)arg1;
- (void)_loadingSetupForLayer;
- (void)_deepLinkSetupForLayer:(id)arg1;
- (void)setupViewForLayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

