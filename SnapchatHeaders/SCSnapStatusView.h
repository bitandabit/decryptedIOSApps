//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStatusView.h"

@class SCSnapReplayAnimationView, UILabel;
@protocol SCSnapReplayConfig;

@interface SCSnapStatusView : SCStatusView
{
    UILabel *_timerLabel;
    SCSnapReplayAnimationView *_replayAnimationView;
    UILabel *_subLabel;
    id <SCSnapReplayConfig> _viewModel;
}

+ (id)subLabelFont;
+ (id)subLabelTextColor;
+ (id)timerFont;
@property(retain, nonatomic) id <SCSnapReplayConfig> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)startSnapReplayAnimationIfNecessary;
- (void)hideTimerText;
- (void)showTimerText:(id)arg1;
- (void)setSubLabelText:(id)arg1;
- (id)subLabel;
- (id)init;

@end

