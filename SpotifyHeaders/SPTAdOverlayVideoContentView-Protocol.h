//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTTheme, UIButton, UILabel, UIProgressView, UIView<SPTVideoSurface>;

@protocol SPTAdOverlayVideoContentView <NSObject>
@property(nonatomic) __weak id <SPTAdOverlayVideoFeedbackDelegate> feedbackDelegate;
@property(nonatomic) _Bool showsAdFeedbackView;
@property(nonatomic) _Bool showsVideoControls;
@property(readonly, nonatomic) UIButton *adChoicesButton;
@property(readonly, nonatomic) UIButton *actionButton;
@property(readonly, nonatomic) UIProgressView *durationProgressView;
@property(readonly, nonatomic) UILabel *timeTotalLabel;
@property(readonly, nonatomic) UILabel *timeElapsedLabel;
@property(readonly, nonatomic) UIButton *videoPlaybackButton;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *videoSurfaceView;
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)initWithVideoSurface:(UIView<SPTVideoSurface> *)arg1 theme:(SPTTheme *)arg2;

@optional
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateProgress:(float)arg1;
@end
