//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMiniProfileFriendRowController, UIView;

@protocol SCMiniProfileFriendRowControllerDelegate <NSObject>
- (void)friendIdentityRowControllerDidTapAddFriend:(SCMiniProfileFriendRowController *)arg1;

@optional
- (void)friendIdentityRowControllerDidTapFriendStory:(SCMiniProfileFriendRowController *)arg1 baseView:(UIView *)arg2;
- (void)friendIdentityRowControllerDidLongPressFriend:(SCMiniProfileFriendRowController *)arg1;
- (void)friendIdentityRowControllerDidTapFriend:(SCMiniProfileFriendRowController *)arg1;
@end

