//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAdOverlayVideoBaseContentView.h"

#import "SPTAdOverlayVideoContentView.h"

@class NSLayoutConstraint, NSString, SPTAdOverlayActionButton, SPTLayoutConstraintBuilder, UIButton, UILabel, UIProgressView, UIView, UIView<SPTVideoSurface>;

@interface SPTAdOverlayVideoContentViewV2 : SPTAdOverlayVideoBaseContentView <SPTAdOverlayVideoContentView>
{
    SPTLayoutConstraintBuilder *_layout;
    SPTAdOverlayActionButton *_actionButton;
    _Bool _showsVideoControls;
    _Bool _didAnimateFeedbackContainer;
    UILabel *_titleLabel;
    UIProgressView *_durationProgressView;
    UILabel *_advertisementLabel;
    UIView *_feedbackContainer;
    UIButton *_downvoteButton;
    UILabel *_feedbackLabel;
    UILabel *_feedbackSentLabel;
    UIButton *_upvoteButton;
    NSLayoutConstraint *_downvoteRightEdgeConstraint;
    NSLayoutConstraint *_upvoteLeftEdgeConstraint;
    NSLayoutConstraint *_feedbackSentVerticalPositionConstraint;
    UIView *_titleLabelParentView;
}

@property(retain, nonatomic) UIView *titleLabelParentView; // @synthesize titleLabelParentView=_titleLabelParentView;
@property(retain, nonatomic) NSLayoutConstraint *feedbackSentVerticalPositionConstraint; // @synthesize feedbackSentVerticalPositionConstraint=_feedbackSentVerticalPositionConstraint;
@property(retain, nonatomic) NSLayoutConstraint *upvoteLeftEdgeConstraint; // @synthesize upvoteLeftEdgeConstraint=_upvoteLeftEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *downvoteRightEdgeConstraint; // @synthesize downvoteRightEdgeConstraint=_downvoteRightEdgeConstraint;
@property(retain, nonatomic) UIButton *upvoteButton; // @synthesize upvoteButton=_upvoteButton;
@property(retain, nonatomic) UILabel *feedbackSentLabel; // @synthesize feedbackSentLabel=_feedbackSentLabel;
@property(retain, nonatomic) UILabel *feedbackLabel; // @synthesize feedbackLabel=_feedbackLabel;
@property(retain, nonatomic) UIButton *downvoteButton; // @synthesize downvoteButton=_downvoteButton;
@property(retain, nonatomic) UIView *feedbackContainer; // @synthesize feedbackContainer=_feedbackContainer;
@property(nonatomic) _Bool didAnimateFeedbackContainer; // @synthesize didAnimateFeedbackContainer=_didAnimateFeedbackContainer;
@property(readonly, nonatomic) UILabel *advertisementLabel; // @synthesize advertisementLabel=_advertisementLabel;
@property(nonatomic) _Bool showsVideoControls; // @synthesize showsVideoControls=_showsVideoControls;
@property(readonly, nonatomic) UIProgressView *durationProgressView; // @synthesize durationProgressView=_durationProgressView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)showFeedbackSent;
- (void)didUpvoteAd;
- (void)didDownvoteAd;
- (void)updateProgress:(float)arg1;
- (void)showFeedbackContainer:(_Bool)arg1;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateConstraints;
- (id)initWithVideoSurface:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIButton *actionButton;
@property(readonly, nonatomic) UIButton *adChoicesButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <SPTAdOverlayVideoFeedbackDelegate> feedbackDelegate;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool showsAdFeedbackView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UILabel *timeElapsedLabel;
@property(readonly, nonatomic) UILabel *timeTotalLabel;
@property(readonly, nonatomic) UIButton *videoPlaybackButton;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *videoSurfaceView;

@end

