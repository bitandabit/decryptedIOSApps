//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCBitmojiAvatarViewDelegate-Protocol.h"
#import "SCGroupBitmojiAvatarViewDelegate-Protocol.h"
#import "SCStoryAvatarViewDelegate-Protocol.h"

@class NSArray, NSString, SCAvatarViewConfiguration, SCAvatarViewModel, SCLazy, SCUserSession;
@protocol SCAvatarViewDelegate, SCSearchItemDownloading;

@interface SCAvatarView : UIView <SCStoryAvatarViewDelegate, SCBitmojiAvatarViewDelegate, SCGroupBitmojiAvatarViewDelegate>
{
    SCUserSession *_userSession;
    NSArray *_contexts;
    long long _feature;
    NSString *_username;
    SCLazy *_storyAvatarView;
    SCLazy *_bitmojiAvatarView;
    SCLazy *_groupBitmojiAvatarView;
    SCAvatarViewConfiguration *_avatarViewConfiguration;
    NSArray *_accessibilityElements;
    SCAvatarViewModel *_viewModel;
    id <SCSearchItemDownloading> _imageDownloader;
    id <SCAvatarViewDelegate> _delegate;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) __weak id <SCAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) id <SCSearchItemDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCAvatarViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (id)accessibilityElements;
- (void)_animateSpringOnPress;
- (void)handlePressOnBitmoji;
- (void)handleLongPressOnStoryIcon;
- (void)handlePressOnStoryIcon;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (id)operaBaseView;
- (id)storyIconView;
- (id)_friendStoriesForUsername:(id)arg1;
- (void)_friendForUsername:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateWithConfiguration:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;
- (void)_updateWithStoryAvatarViewModel:(id)arg1;
- (void)_updateWithBitmojiAvatarViewModels:(id)arg1;
- (void)_updateWithBitmojiAvatarViewModel:(id)arg1;
- (void)_showGroupBitmojiView;
- (void)_showBitmojiView;
- (void)_showStoryViewForFriendStories:(id)arg1 borderStyle:(long long)arg2 isStoryReplayable:(_Bool)arg3 isStoryMuted:(_Bool)arg4;
- (void)_showStoryView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithUserSession:(id)arg1 contexts:(id)arg2 feature:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

