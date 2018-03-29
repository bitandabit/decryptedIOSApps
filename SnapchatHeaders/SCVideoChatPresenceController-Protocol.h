//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatViewLifeCycleListener-Protocol.h"

@class NSNumber, NSString, SCChat;
@protocol SCChatViewLifeCycleListener, SCTalkClientController;

@protocol SCVideoChatPresenceController <SCChatViewLifeCycleListener>
- (NSNumber *)getPresentUsersCountInChat:(SCChat *)arg1;
- (void)registerTalkMixin:(id <SCTalkClientController>)arg1;
- (id <SCChatViewLifeCycleListener>)chatViewLifeCycleListener;
- (_Bool)isSenderPresentInChat:(SCChat *)arg1;
- (_Bool)isRecipientPresentInConversationWithId:(NSString *)arg1 recipient:(NSString *)arg2;
- (void)chat:(SCChat *)arg1 receivedPresence:(_Bool)arg2 localPresence:(_Bool)arg3;
@end

