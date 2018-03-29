//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLUEStatefulView.h"

@class GLUEImageView, GLUELabel, NSLayoutConstraint, SPTLayoutConstraintBuilder, SPTOfflineSyncStatusView, SPTTheme, UIProgressView, UIView;

@interface SPTPodcastEpisodeView : GLUEStatefulView
{
    _Bool _editing;
    GLUEImageView *_imageView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_descriptionLabel;
    UIView *_trailingAccessoryView;
    UIView *_editingTrailingAccessoryView;
    UIView *_upperContainerView;
    UIView *_upperMiddleContainerView;
    UIView *_trailingAccessoryContainerView;
    UIProgressView *_progressView;
    SPTOfflineSyncStatusView *_subtitleAccessoryView;
    SPTTheme *_catTheme;
    id <GLUETheme> _glueTheme;
    SPTLayoutConstraintBuilder *_subtitleAccessoryLayout;
    NSLayoutConstraint *_accessoryViewVisibleConstraint;
    NSLayoutConstraint *_accessoryViewInvisibleConstraint;
    NSLayoutConstraint *_descriptionHeightConstraint;
    NSLayoutConstraint *_progressViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *progressViewHeightConstraint; // @synthesize progressViewHeightConstraint=_progressViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *descriptionHeightConstraint; // @synthesize descriptionHeightConstraint=_descriptionHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewInvisibleConstraint; // @synthesize accessoryViewInvisibleConstraint=_accessoryViewInvisibleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewVisibleConstraint; // @synthesize accessoryViewVisibleConstraint=_accessoryViewVisibleConstraint;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *subtitleAccessoryLayout; // @synthesize subtitleAccessoryLayout=_subtitleAccessoryLayout;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTTheme *catTheme; // @synthesize catTheme=_catTheme;
@property(retain, nonatomic) SPTOfflineSyncStatusView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *trailingAccessoryContainerView; // @synthesize trailingAccessoryContainerView=_trailingAccessoryContainerView;
@property(retain, nonatomic) UIView *upperMiddleContainerView; // @synthesize upperMiddleContainerView=_upperMiddleContainerView;
@property(retain, nonatomic) UIView *upperContainerView; // @synthesize upperContainerView=_upperContainerView;
@property(retain, nonatomic) UIView *editingTrailingAccessoryView; // @synthesize editingTrailingAccessoryView=_editingTrailingAccessoryView;
@property(retain, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;
@property(retain, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
- (double)progressViewHeight;
- (_Bool)shouldShowProgressView;
@property(nonatomic) double listeningProgress;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader;
@property(nonatomic) long long episodeOfflineSyncStatus;
- (double)descriptionHeightForEpisodeViewWidth:(double)arg1;
- (double)titleHeightForEpisodeViewWidth:(double)arg1;
- (struct CGSize)intrinsicContentSizeWithWidth:(double)arg1;
- (void)applyStateStyle:(id)arg1;
- (void)addEditingTrailingAccessoryViewToViewHierarchy;
- (void)addTrailingAccessoryViewToViewHierarchy;
- (void)setupUpperRightContainerViewConstraints;
- (void)setupSubtitleAccessoryView;
- (void)setupProgressView;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (void)setupUpperRightContainerView;
- (void)setupUpperContainerView;
- (void)setupTopLevelViews;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1 glueTheme:(id)arg2;

@end

