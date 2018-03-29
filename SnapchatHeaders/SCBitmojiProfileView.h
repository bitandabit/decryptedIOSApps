//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGrowingButton.h"

#import "SCProfileHeaderAvatarViewDelegate-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"

@class NSString, SCBitmojiManager, SCCircularBadgeView, SCProfileHeaderAvatarView, SCProfileHeaderAvatarViewStoryConfiguration, SCShapeView, SCUserSession, Story, UIView, User;

@interface SCBitmojiProfileView : SCGrowingButton <SCStoriesModelUpdateListener, SCProfileHeaderAvatarViewDelegate>
{
    _Bool _badged;
    _Bool _showingBitmoji;
    _Bool _shouldRedisplayBadgeCount;
    _Bool _didRedisplayBadgeCount;
    SCProfileHeaderAvatarView *_profileHeaderAvatarView;
    long long _badgeStyle;
    UIView *_profileContentView;
    SCShapeView *_badgeView;
    SCCircularBadgeView *_circleBadgeIconView;
    SCBitmojiManager *_bitmojiManager;
    User *_user;
    CDUnknownBlockType _badgeFlipHandler;
    long long _currentBadgeCount;
    SCUserSession *_userSession;
    SCProfileHeaderAvatarViewStoryConfiguration *_avatarViewStoryConfiguration;
    Story *_displayedStory;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiAvatarId;
}

@property(retain, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(retain, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(nonatomic) __weak Story *displayedStory; // @synthesize displayedStory=_displayedStory;
@property(retain, nonatomic) SCProfileHeaderAvatarViewStoryConfiguration *avatarViewStoryConfiguration; // @synthesize avatarViewStoryConfiguration=_avatarViewStoryConfiguration;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool didRedisplayBadgeCount; // @synthesize didRedisplayBadgeCount=_didRedisplayBadgeCount;
@property(nonatomic) _Bool shouldRedisplayBadgeCount; // @synthesize shouldRedisplayBadgeCount=_shouldRedisplayBadgeCount;
@property(nonatomic) long long currentBadgeCount; // @synthesize currentBadgeCount=_currentBadgeCount;
@property(copy, nonatomic) CDUnknownBlockType badgeFlipHandler; // @synthesize badgeFlipHandler=_badgeFlipHandler;
@property(nonatomic, getter=isShowingBitmoji) _Bool showingBitmoji; // @synthesize showingBitmoji=_showingBitmoji;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) SCBitmojiManager *bitmojiManager; // @synthesize bitmojiManager=_bitmojiManager;
@property(retain, nonatomic) SCCircularBadgeView *circleBadgeIconView; // @synthesize circleBadgeIconView=_circleBadgeIconView;
@property(retain, nonatomic) SCShapeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *profileContentView; // @synthesize profileContentView=_profileContentView;
@property(readonly, nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(readonly, nonatomic) SCProfileHeaderAvatarView *profileHeaderAvatarView; // @synthesize profileHeaderAvatarView=_profileHeaderAvatarView;
@property(readonly, nonatomic, getter=isBadged) _Bool badged; // @synthesize badged=_badged;
- (void).cxx_destruct;
- (_Bool)willHandleDisplayedStoryUploadSuccess:(id)arg1;
- (_Bool)isAccessibilityElement;
- (void)_refreshAvatarView;
- (_Bool)_storyExists:(id)arg1;
- (void)_handleStory:(id)arg1;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (void)_animateBadgeOut:(CDUnknownBlockType)arg1;
- (void)_animateBadgeIn;
- (void)removeInFlightAnimation;
- (void)_updateCircleBadgeIconWithCount:(unsigned long long)arg1;
- (void)sendToPostToStory;
- (id)_badgeColor;
- (id)_badgePathForStyle:(long long)arg1;
- (id)newBadgeView;
- (void)setBadged:(_Bool)arg1 badgeCount:(long long)arg2 animated:(_Bool)arg3;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateVisibleBadgeWithCount:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateAvatarViewStoryConfiguration;
- (void)_refreshBitmoji;
- (void)refreshBitmoji;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 bitmojiManager:(id)arg2 userSession:(id)arg3 user:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
