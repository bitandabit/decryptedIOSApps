//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SCSearchGroupAvatarsCountView, SCSearchProfilePictureThumbnail;

@interface SCSearchGroupAvatarsView : UIView
{
    NSArray *_friends;
    NSArray *_fallbackUsernames;
    double _scale;
    _Bool _hideRemainingCount;
    SCSearchProfilePictureThumbnail *_avatarView1;
    SCSearchProfilePictureThumbnail *_avatarView2;
    SCSearchProfilePictureThumbnail *_avatarView3;
    SCSearchProfilePictureThumbnail *_avatarView4;
    SCSearchGroupAvatarsCountView *_countView;
}

@property(retain, nonatomic) SCSearchGroupAvatarsCountView *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) SCSearchProfilePictureThumbnail *avatarView4; // @synthesize avatarView4=_avatarView4;
@property(retain, nonatomic) SCSearchProfilePictureThumbnail *avatarView3; // @synthesize avatarView3=_avatarView3;
@property(retain, nonatomic) SCSearchProfilePictureThumbnail *avatarView2; // @synthesize avatarView2=_avatarView2;
@property(retain, nonatomic) SCSearchProfilePictureThumbnail *avatarView1; // @synthesize avatarView1=_avatarView1;
- (void).cxx_destruct;
- (void)resetAvatars;
- (id)_createSingleAvatarView;
- (void)_layoutFourOrMoreAvatars:(id)arg1;
- (void)_layoutThreeAvatars:(id)arg1;
- (void)_layoutTwoAvatars:(id)arg1;
- (void)_layoutOneAvatar:(id)arg1;
- (void)updateFallbackAvatarWithUsernames:(id)arg1;
- (void)updateWithFriends:(id)arg1 bitmojiManager:(id)arg2 hideRemainingCount:(_Bool)arg3;
- (void)updateWithFriends:(id)arg1 bitmojiManager:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSize:(double)arg1;

@end
