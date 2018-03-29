//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTChatMessage-Protocol.h"

@class NSString;
@protocol SOJUConversationMessage;

@interface SCTV3ChatMessage : NSObject <SCTChatMessage>
{
    id <SOJUConversationMessage> _wireMessage;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)presencesMetadata;
- (id)extendedPresences;
- (id)legacyPresences;
- (id)receiveTimestamp;
- (id)senderUsername;
- (id)conversationId;
- (id)initWithSOJUMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

