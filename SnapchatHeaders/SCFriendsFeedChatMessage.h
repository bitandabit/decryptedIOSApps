//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCFriendsFeedChatMessage : NSObject <NSCopying>
{
    unsigned long long _subtype;
    _Bool _activeChat_hasUnreadChats;
    _Bool _activeChat_isChatMediaMessage;
    NSArray *_participantChange_participants;
}

+ (id)participantChangeWithParticipants:(id)arg1;
+ (id)groupNameChange;
+ (id)activeChatWithHasUnreadChats:(_Bool)arg1 isChatMediaMessage:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchActiveChat:(CDUnknownBlockType)arg1 groupNameChange:(CDUnknownBlockType)arg2 participantChange:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

