//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCExpandedButton, SCLoadingIndicatorView, SCScrollUpAffordanceView, UIActivityIndicatorView, UIImage, UILabel;
@protocol SCOperaViewersContextHeaderViewDelegate;

@interface SCOperaViewersContextHeaderView : UIView
{
    UIActivityIndicatorView *_loadingSpinner;
    UIView *_failedStoryInteractionView;
    UIView *_postingView;
    SCScrollUpAffordanceView *_upwardAffordanceView;
    UIView *_gradientView;
    UIView *_backgroundView;
    UIView *_widgetsContainerview;
    UILabel *_screenshotCountLabel;
    UILabel *_viewersCountLabel;
    UIImage *_screenshotIconImageGreen;
    UIImage *_screenshotIconImage;
    SCLoadingIndicatorView *_activityIndicator;
    UIView *_separator;
    SCScrollUpAffordanceView *_downwardAffordanceView;
    long long _headerStyle;
    SCExpandedButton *_screenshottersButton;
    SCExpandedButton *_viewersButton;
    SCExpandedButton *_centerActionButton;
    SCExpandedButton *_headerAreaButton;
    SCExpandedButton *_saveButton;
    SCExpandedButton *_deleteButton;
    SCExpandedButton *_postButton;
    id <SCOperaViewersContextHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaViewersContextHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCExpandedButton *postButton; // @synthesize postButton=_postButton;
@property(readonly, nonatomic) SCExpandedButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) SCExpandedButton *saveButton; // @synthesize saveButton=_saveButton;
@property(readonly, nonatomic) SCExpandedButton *headerAreaButton; // @synthesize headerAreaButton=_headerAreaButton;
@property(readonly, nonatomic) SCExpandedButton *centerActionButton; // @synthesize centerActionButton=_centerActionButton;
@property(readonly, nonatomic) SCExpandedButton *viewersButton; // @synthesize viewersButton=_viewersButton;
@property(readonly, nonatomic) SCExpandedButton *screenshottersButton; // @synthesize screenshottersButton=_screenshottersButton;
@property(nonatomic) long long headerStyle; // @synthesize headerStyle=_headerStyle;
- (void).cxx_destruct;
- (void)setStoryIsDeleting:(_Bool)arg1;
- (void)_setDeleteButtonImageForPosting:(_Bool)arg1;
- (void)_setDeleteButtonEnabled:(_Bool)arg1;
- (void)configureCenterActionButtonWithType:(long long)arg1;
- (void)setSeparatorHidden:(_Bool)arg1;
- (void)updateViewedCount:(long long)arg1 screenshotCount:(long long)arg2;
- (void)setUpwardAffordanceViewwOpacity:(double)arg1;
- (void)setCenterActionButtonOpacity:(double)arg1;
- (void)setBackgroundViewOpacity:(double)arg1;
- (void)setWidgetsContainerviewOpacity:(double)arg1;
- (void)setGradientViewOpacity:(double)arg1;
- (void)updateGradientViewWithVisibility:(_Bool)arg1;
- (void)showSavingLoadingAnimation;
- (void)disableUpwardAffordanceView;
- (void)enableUpwardAffordanceView;
- (void)disableCenterActionButton;
- (void)enableCenterActionButton;
- (void)disableViewersInteraction;
- (void)enableViewersInteraction;
- (void)showViewersInteractionView;
- (void)hideViewersInteractionView;
- (void)hidePostingView;
- (void)showFailedStoryInteractionView;
- (void)hideFailedStoryInteractionView;
- (void)showPostingView;
- (void)setScreenshotIconSelected:(_Bool)arg1;
- (void)_setupSubviewsForPosting;
- (void)_setupSubviewsForFailedStoryInteraction;
- (void)_setupSubviews;
- (id)init;

@end

