//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCProfileInfoContainerView;

@protocol SCProfileInfoContainerViewDelegate
- (void)shareUsernameButtonPressed:(NSString *)arg1;
- (void)snapCodeButtonPressed:(SCProfileInfoContainerView *)arg1 completion:(void (^)(void))arg2;
- (void)displayNamePressed;

@optional
- (void)addCollaboratorsButtonPressed:(NSString *)arg1;
- (void)myCollaboratorsButtonPressed:(NSString *)arg1;
- (void)myFriendsButtonPressed;
- (void)addFriendsButtonPressed;
- (void)recentFriendsButtonPressed;
@end

