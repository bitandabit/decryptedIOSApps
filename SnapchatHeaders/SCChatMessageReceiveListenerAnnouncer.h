//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatMessageReceiveListener-Protocol.h"

@class NSString;

@interface SCChatMessageReceiveListenerAnnouncer : NSObject <SCChatMessageReceiveListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCChatMessageReceiveListener>, std::__1::allocator<__weak id<SCChatMessageReceiveListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didReceiveConversations:(id)arg1 originType:(long long)arg2 source:(long long)arg3;
- (void)didReceiveMischiefs:(id)arg1 hasStaleChats:(_Bool)arg2 originType:(long long)arg3 source:(long long)arg4;
- (void)didReceiveWireMessage:(id)arg1;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

