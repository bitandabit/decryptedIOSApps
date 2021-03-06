//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCStoryIconViewDelegate-Protocol.h"
#import "SCStoryMediaStateListener-Protocol.h"

@class CAShapeLayer, FriendStories, NSArray, NSString, SCLazy, SCSearchNetworkImageView, SCSingleIconConfigurer, SCStoryAvatarViewModel, SCStoryIconView, SCUserSession, Story;
@protocol SCSearchItemDownloading, SCStoryAvatarViewDelegate;

@interface SCStoryAvatarView : UIView <SCStoryMediaStateListener, SCStoryIconViewDelegate>
{
    SCUserSession *_userSession;
    NSArray *_contexts;
    SCStoryIconView *_storyIconView;
    SCSingleIconConfigurer *_singleIconConfigurer;
    long long _borderStyle;
    _Bool _isStoryReplayable;
    _Bool _isStoryMuted;
    SCLazy *_gradientLayer;
    CAShapeLayer *_gradientMaskLayer;
    Story *_thumbnailStory;
    FriendStories *_friendStories;
    SCSearchNetworkImageView *_storyNetworkImageView;
    SCLazy *_replayImageView;
    SCStoryAvatarViewModel *_viewModel;
    id <SCSearchItemDownloading> _imageDownloader;
    id <SCStoryAvatarViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCStoryAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCSearchItemDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCStoryAvatarViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)onHidingSpinner;
- (void)onShowingSpinner;
- (void)_reachabilityDidChangeNotification:(id)arg1;
- (void)story:(id)arg1 didChangeThumbnailMediaState:(long long)arg2;
- (void)story:(id)arg1 didChangeMediaState:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)_isBidirectionalFriendStoryAvatar;
- (_Bool)_shouldForceNoBorderStyle;
- (void)_updateStoryIconViewProperties;
- (long long)_viewingTypeForFriendStories:(id)arg1;
- (void)_displayThumbnailForCurrentStory;
- (void)_fetchThumbnailMediaForCurrentStoryIfNecessary;
- (id)operaBaseView;
- (id)storyIconView;
- (void)updateWithFriendStories:(id)arg1 borderStyle:(long long)arg2 isStoryReplayable:(_Bool)arg3 isStoryMuted:(_Bool)arg4;
- (void)_showReplayIconIfNecessary;
- (void)_showGradientLayer;
- (void)_updateWithBorderStyle:(long long)arg1;
- (double)borderWidth;
- (id)gradientColors;
- (void)_initStoryIcon;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 contexts:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

