//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaSession-Protocol.h"

@class FBKVOController, NSNumber, NSString, SCChunkSubscribeItem, SCDiscoverChannel, SCDiscoverLogger, SCDiscoverOperaSessionLoggingContext, SCSubscribableEntity, SCSubscriptionManager, SCUserSession;
@protocol SCOperaPlaylistItemController, SCOperaSubscribeActionHandler;

@interface SCDiscoverSubscriptionSession : NSObject <SCOperaSession>
{
    SCDiscoverChannel *_channel;
    FBKVOController *_kvoController;
    SCSubscriptionManager *_subscriptionManager;
    SCDiscoverLogger *_logger;
    SCChunkSubscribeItem *_subscribeItem;
    SCDiscoverOperaSessionLoggingContext *_loggingContext;
    NSString *_currentPageId;
    SCUserSession *_userSession;
    id <SCOperaSubscribeActionHandler> _subscribeActionHandler;
    NSNumber *_subscribeStateForCurrentPage;
    NSString *_currentDSnapId;
    SCSubscribableEntity *_subscribableEntity;
    id <SCOperaPlaylistItemController> _playlistItemController;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
- (void).cxx_destruct;
- (id)_getSubscriptionType;
- (void)_setChunkSubscribeItemForSubscriptionAttachment;
- (_Bool)isSubscribed;
- (id)extraProperties;
- (void)extraPropertiesForChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_logSubscribeToStory:(id)arg1 withState:(unsigned long long)arg2;
- (void)_updateChannelToSubscribeState:(unsigned long long)arg1;
- (void)_unsubscribeToCurrentChannelLocally;
- (void)_subscribeToCurrentChannelLocally;
- (unsigned long long)_subscriptionButtonStateWithSubscribeState:(unsigned long long)arg1;
- (void)_subscriptionStateDidChange:(id)arg1;
- (void)_performSubscriptionFromSource:(unsigned long long)arg1 editionId:(id)arg2 dSnapId:(id)arg3 cheetahStory:(id)arg4;
- (void)_performSubscriptionFromSource:(unsigned long long)arg1 content:(id)arg2;
- (void)_setSubscribableEntityForSubscriptionAttachment:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)dealloc;
- (id)initWithSubscribableEntity:(id)arg1 userSession:(id)arg2 loggingContext:(id)arg3 subscriptionManager:(id)arg4 logger:(id)arg5 kvoController:(id)arg6 subscribeActionHandler:(id)arg7;
- (id)initWithSubscribableEntity:(id)arg1 userSession:(id)arg2 loggingContext:(id)arg3 subscribeActionHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

