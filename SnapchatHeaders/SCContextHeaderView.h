//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGrowingButton, UIImageView;
@protocol SCContextHeaderViewDelegate;

@interface SCContextHeaderView : UIView
{
    UIView *_header;
    UIImageView *_gradientView;
    SCGrowingButton *_sendButton;
    double _visiblePercent;
    _Bool _isShowingChatHeader;
    id <SCContextHeaderViewDelegate> _delegate;
}

+ (id)subtitleColor;
+ (id)headerColor;
@property(nonatomic) __weak id <SCContextHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
- (void).cxx_destruct;
- (id)sendButton;
- (void)_setupButtons:(_Bool)arg1;
- (void)_setupGradientView;
- (void)layoutSubviews;
- (void)_sendButtonPressed:(id)arg1;
- (void)updateTransitionViewAlpha:(double)arg1;
- (void)setupFadeStateForDefaultHeader;
- (void)setupWithPresetHeader:(id)arg1;
- (void)setupWithShowSendButton:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

