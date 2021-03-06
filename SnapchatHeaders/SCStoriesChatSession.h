//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaSession-Protocol.h"

@class NSString, SCChatLogger, SCUserTraceLogger;

@interface SCStoriesChatSession : NSObject <SCOperaSession>
{
    NSString *_sender;
    SCChatLogger *_chatLogger;
    SCUserTraceLogger *_userTraceLogger;
}

- (void).cxx_destruct;
- (void)_logChatCreationWithExitReason:(unsigned long long)arg1 storyTypeSpecific:(long long)arg2 conversationId:(id)arg3;
- (void)_sendMessage:(id)arg1 to:(id)arg2 story:(id)arg3 storyType:(long long)arg4 storyTypeSpecific:(long long)arg5;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)dealloc;
- (id)initWithSender:(id)arg1 chatLogger:(id)arg2 userTraceLogger:(id)arg3;
- (id)initWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

