//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatV3Module.h"

@class SCChatExternalAPIProvider;

@interface SCChatV3ConcreteModule : SCChatV3Module
{
    SCChatExternalAPIProvider *_apiProvider;
}

- (void).cxx_destruct;
- (void)sccpConnected;
- (void)setBitmojiManagerWithUserSession:(id)arg1;
- (void)setMediaSendTaskManagerWithUserSession:(id)arg1;
- (id)createExternalAPIProviderForUser:(id)arg1 userSession:(id)arg2;
- (id)addToGroupVCWithUserSession:(id)arg1 sourceType:(unsigned long long)arg2;
- (id)chatV3VCWithUserSession:(id)arg1 parentDelegate:(id)arg2;
- (id)addToGroupAndChatVCWithUserSession:(id)arg1 sourceType:(unsigned long long)arg2 chatVC:(id)arg3;
- (void)dealloc;
- (id)init;

@end
