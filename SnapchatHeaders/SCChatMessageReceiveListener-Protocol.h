//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol SOJUMessage;

@protocol SCChatMessageReceiveListener <NSObject>
- (void)didReceiveConversations:(NSDictionary *)arg1 originType:(long long)arg2 source:(long long)arg3;
- (void)didReceiveMischiefs:(NSDictionary *)arg1 hasStaleChats:(_Bool)arg2 originType:(long long)arg3 source:(long long)arg4;
- (void)didReceiveWireMessage:(id <SOJUMessage>)arg1;
@end
