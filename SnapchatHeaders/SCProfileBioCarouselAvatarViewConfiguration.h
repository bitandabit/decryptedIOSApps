//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Friend, SCProfileBioCarouselStoryAvatarViewModel;

@interface SCProfileBioCarouselAvatarViewConfiguration : NSObject
{
    SCProfileBioCarouselStoryAvatarViewModel *_storyAvatarViewModel;
    Friend *_aFriend;
    long long _borderStyle;
    long long _avatarStyle;
}

@property(readonly, nonatomic) long long avatarStyle; // @synthesize avatarStyle=_avatarStyle;
@property(readonly, nonatomic) long long borderStyle; // @synthesize borderStyle=_borderStyle;
@property(readonly, nonatomic) Friend *aFriend; // @synthesize aFriend=_aFriend;
@property(readonly, nonatomic) SCProfileBioCarouselStoryAvatarViewModel *storyAvatarViewModel; // @synthesize storyAvatarViewModel=_storyAvatarViewModel;
- (void).cxx_destruct;
- (id)initWithStoryAvatarViewModel:(id)arg1 friend:(id)arg2 borderStyle:(long long)arg3 avatarStyle:(long long)arg4;

@end

