//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, SCChatMessagingSendingService;

@interface SCConcreteChatCommands : NSObject
{
    NSString *_username;
    SCChatMessagingSendingService *_sendingService;
    NSMutableDictionary *_classDict;
    NSLock *_lock;
}

+ (id)shared;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *classDict; // @synthesize classDict=_classDict;
- (void).cxx_destruct;
- (void)sendMessageToRecipients:(id)arg1 withType:(id)arg2 withContent:(id)arg3 additionalText:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)registerMessageHandler:(Class)arg1 forMessageType:(id)arg2;
- (_Bool)isMessageTypeRecognized:(id)arg1;
- (Class)messageHandlerClassForMessageType:(id)arg1;
- (void)configureWithSendingService:(id)arg1 withUsername:(id)arg2;
- (id)init;

@end

