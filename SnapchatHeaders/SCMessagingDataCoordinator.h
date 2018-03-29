//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCSearchUpdateListener-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCQueuePerformer;
@protocol SCChatMessageActionHandler;

@interface SCMessagingDataCoordinator : NSObject <SCDataCoordinating, SCDataCoordinatorListener, SCSearchUpdateListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_dataUpdatePerformer;
    SCDocObjectContext *_docObjectContext;
    id <SCChatMessageActionHandler> _chatMessageActionHandler;
    NSString *_currentUsername;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceMessagingDataUpdate;
- (void)_updateConversationsStateToDBWithConversationsState:(id)arg1;
- (void)_updateConversationsDocObjectWithConversationIds:(id)arg1;
- (id)_constructActiveMessageDataFromDocObjectWithFeedIds:(id)arg1;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)activeMessageDataForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1 chatMessageActionHandler:(id)arg2 currentUsername:(id)arg3;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

