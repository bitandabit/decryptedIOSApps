//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAdOverlayBaseContentView.h"

#import "SPTAdOverlayVideoContentView.h"

@class NSString, SPTAdOverlayActionButton, SPTLayoutConstraintBuilder, UIButton, UILabel, UIProgressView, UIView, UIView<SPTVideoSurface>;

@interface SPTAdOverlayVideoBaseContentView : SPTAdOverlayBaseContentView <SPTAdOverlayVideoContentView>
{
    SPTLayoutConstraintBuilder *_layout;
    SPTAdOverlayActionButton *_actionButton;
    _Bool _showsVideoControls;
    _Bool _showsAdFeedbackView;
    UILabel *_titleLabel;
    UIView<SPTVideoSurface> *_videoSurfaceView;
    UIButton *_videoPlaybackButton;
    UILabel *_timeElapsedLabel;
    UILabel *_timeTotalLabel;
    UIProgressView *_durationProgressView;
    UIButton *_adChoicesButton;
    id <SPTAdOverlayVideoFeedbackDelegate> _feedbackDelegate;
    UIView *_section1;
    UIView *_section2;
    UIView *_section3;
    UIView *_videoControlsContainer;
}

@property(readonly, nonatomic) UIView *videoControlsContainer; // @synthesize videoControlsContainer=_videoControlsContainer;
@property(readonly, nonatomic) UIView *section3; // @synthesize section3=_section3;
@property(readonly, nonatomic) UIView *section2; // @synthesize section2=_section2;
@property(readonly, nonatomic) UIView *section1; // @synthesize section1=_section1;
@property(nonatomic) _Bool showsAdFeedbackView; // @synthesize showsAdFeedbackView=_showsAdFeedbackView;
@property(nonatomic) __weak id <SPTAdOverlayVideoFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(readonly, nonatomic) UIButton *adChoicesButton; // @synthesize adChoicesButton=_adChoicesButton;
@property(nonatomic) _Bool showsVideoControls; // @synthesize showsVideoControls=_showsVideoControls;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UIProgressView *durationProgressView; // @synthesize durationProgressView=_durationProgressView;
@property(readonly, nonatomic) UILabel *timeTotalLabel; // @synthesize timeTotalLabel=_timeTotalLabel;
@property(readonly, nonatomic) UILabel *timeElapsedLabel; // @synthesize timeElapsedLabel=_timeElapsedLabel;
@property(readonly, nonatomic) UIButton *videoPlaybackButton; // @synthesize videoPlaybackButton=_videoPlaybackButton;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *videoSurfaceView; // @synthesize videoSurfaceView=_videoSurfaceView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) double headerPadding;
- (void)updateConstraints;
- (id)initWithVideoSurface:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

