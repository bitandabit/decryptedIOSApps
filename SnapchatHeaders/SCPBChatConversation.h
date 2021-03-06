//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCPBCashTransaction, SCPBChatConversationMessageUpdates, SCPBChatConversationMessages, SCPBChatConversationSnapUpdates, SCPBConversationInteractionEvent, SCPBConversationState, SCPBGenericSnap, SCPBLastChatActions;

@interface SCPBChatConversation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBConversationInteractionEvent *conversationInteractionEvent; // @dynamic conversationInteractionEvent;
@property(retain, nonatomic) SCPBChatConversationMessageUpdates *conversationMessageUpdates; // @dynamic conversationMessageUpdates;
@property(retain, nonatomic) SCPBChatConversationMessages *conversationMessages; // @dynamic conversationMessages;
@property(retain, nonatomic) SCPBChatConversationSnapUpdates *conversationSnapUpdates; // @dynamic conversationSnapUpdates;
@property(retain, nonatomic) SCPBConversationState *conversationState; // @dynamic conversationState;
@property(retain, nonatomic) NSMutableArray *favoriteStickersArray; // @dynamic favoriteStickersArray;
@property(readonly, nonatomic) unsigned long long favoriteStickersArray_Count; // @dynamic favoriteStickersArray_Count;
@property(nonatomic) _Bool hasConversationInteractionEvent; // @dynamic hasConversationInteractionEvent;
@property(nonatomic) _Bool hasConversationMessageUpdates; // @dynamic hasConversationMessageUpdates;
@property(nonatomic) _Bool hasConversationMessages; // @dynamic hasConversationMessages;
@property(nonatomic) _Bool hasConversationSnapUpdates; // @dynamic hasConversationSnapUpdates;
@property(nonatomic) _Bool hasConversationState; // @dynamic hasConversationState;
@property(nonatomic) _Bool hasLastCashTransaction; // @dynamic hasLastCashTransaction;
@property(nonatomic) _Bool hasLastChatActions; // @dynamic hasLastChatActions;
@property(nonatomic) _Bool hasLastSnap; // @dynamic hasLastSnap;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isDeltaFetch; // @dynamic isDeltaFetch;
@property(nonatomic) _Bool isSnapDeltaFetch; // @dynamic isSnapDeltaFetch;
@property(copy, nonatomic) NSString *iterToken; // @dynamic iterToken;
@property(retain, nonatomic) SCPBCashTransaction *lastCashTransaction; // @dynamic lastCashTransaction;
@property(retain, nonatomic) SCPBLastChatActions *lastChatActions; // @dynamic lastChatActions;
@property(nonatomic) long long lastClearTimestamp; // @dynamic lastClearTimestamp;
@property(nonatomic) long long lastInteractionTs; // @dynamic lastInteractionTs;
@property(retain, nonatomic) SCPBGenericSnap *lastSnap; // @dynamic lastSnap;
@property(nonatomic) _Bool notificationStatus; // @dynamic notificationStatus;
@property(retain, nonatomic) NSMutableArray *participantsArray; // @dynamic participantsArray;
@property(readonly, nonatomic) unsigned long long participantsArray_Count; // @dynamic participantsArray_Count;
@property(retain, nonatomic) NSMutableArray *pendingChatsForArray; // @dynamic pendingChatsForArray;
@property(readonly, nonatomic) unsigned long long pendingChatsForArray_Count; // @dynamic pendingChatsForArray_Count;
@property(retain, nonatomic) NSMutableArray *pendingReceivedSnapsArray; // @dynamic pendingReceivedSnapsArray;
@property(readonly, nonatomic) unsigned long long pendingReceivedSnapsArray_Count; // @dynamic pendingReceivedSnapsArray_Count;
@property(retain, nonatomic) NSMutableDictionary *usernameToUserId; // @dynamic usernameToUserId;
@property(readonly, nonatomic) unsigned long long usernameToUserId_Count; // @dynamic usernameToUserId_Count;

@end

