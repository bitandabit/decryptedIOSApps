//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FLAnimatedImageView, Friend, UIImageView;

@interface SCSearchProfilePictureThumbnail : UIView
{
    Friend *_friend;
    FLAnimatedImageView *_imageView;
    UIImageView *_ghostBorderView;
    long long _style;
}

+ (id)sharedPerformer;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *ghostBorderView; // @synthesize ghostBorderView=_ghostBorderView;
@property(retain, nonatomic) FLAnimatedImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)_getImageArrayWithImageDataArray:(id)arg1;
- (void)_setGhostBorderImage;
- (void)_showGhostFace:(unsigned long long)arg1;
- (void)_showBitmojiImage:(id)arg1;
- (void)_showProfileImages:(id)arg1;
- (void)_updateWithFriendGhost:(id)arg1 contexts:(id)arg2;
- (void)_updateWithFriend:(id)arg1 contexts:(id)arg2 bitmojiAvatarId:(id)arg3 stickerId:(id)arg4 bitmojiManager:(id)arg5;
- (void)updateWithFriend:(id)arg1 contexts:(id)arg2 stickerId:(id)arg3 bitmojiManager:(id)arg4;
- (void)updateWithFriend:(id)arg1 contexts:(id)arg2 bitmojiManager:(id)arg3;
- (void)updateWithUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3 bitmojiAvatarId:(id)arg4 stickerId:(id)arg5 bitmojiManager:(id)arg6;
- (void)updateFallbackGhostFaceWithDisplayName:(id)arg1;
- (void)reset;
- (void)layoutSubviews;
- (id)init;

@end

