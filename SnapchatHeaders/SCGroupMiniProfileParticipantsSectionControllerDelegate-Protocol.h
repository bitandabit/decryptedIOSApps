//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Friend, FriendStories, SCGroupMiniProfileParticipantsSectionController, UIView;

@protocol SCGroupMiniProfileParticipantsSectionControllerDelegate <NSObject>
- (_Bool)participantsSectionControllerShouldFullyExpandMemberList:(SCGroupMiniProfileParticipantsSectionController *)arg1;
- (_Bool)participantsSectionControllerShouldFullyCollapseMemberList:(SCGroupMiniProfileParticipantsSectionController *)arg1;
- (void)participantsSectionController:(SCGroupMiniProfileParticipantsSectionController *)arg1 didTapPlayFriendStories:(FriendStories *)arg2 withBaseView:(UIView *)arg3;
- (void)participantsSectionController:(SCGroupMiniProfileParticipantsSectionController *)arg1 didLongPressFriend:(Friend *)arg2;
- (void)participantsSectionController:(SCGroupMiniProfileParticipantsSectionController *)arg1 didTapFriend:(Friend *)arg2;
- (void)participantsSectionControllerWantsNameChange:(SCGroupMiniProfileParticipantsSectionController *)arg1;
@end

