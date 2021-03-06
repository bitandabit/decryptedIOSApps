//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTimeProfilable-Protocol.h"

@class FBKVOController, NSString, SCUserSession;

@interface SCChatLoader : NSObject <SCTimeProfilable>
{
    SCUserSession *_userSession;
    FBKVOController *_observeController;
}

+ (int)context;
@property(retain, nonatomic) FBKVOController *observeController; // @synthesize observeController=_observeController;
- (void).cxx_destruct;
- (_Bool)_firstBatchOfMediaMessagesLoadedInChat:(id)arg1;
- (void)_networkReachabilityDidChange;
- (void)_loadUnviewedChatStacksWithLimit:(long long)arg1 orderedChats:(id)arg2;
- (void)_removeObservers;
- (void)_addObservers;
- (void)loadRecentMediaMessagesWithOrderedChats:(id)arg1;
- (void)loadRecentMediaMessages;
- (void)setUserSession:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

