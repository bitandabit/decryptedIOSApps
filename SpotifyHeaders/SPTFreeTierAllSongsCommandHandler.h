//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBCommandHandler.h"

@interface SPTFreeTierAllSongsCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <EXP_SPTHubInteractionLogger> _interactionLogger;
    id <SPTFreeTierAllSongsRegistry> _registry;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTFreeTierAllSongsDataSource> _dataSource;
}

@property(retain, nonatomic) id <SPTFreeTierAllSongsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <SPTFreeTierAllSongsRegistry> registry; // @synthesize registry=_registry;
@property(readonly, nonatomic) id <EXP_SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (_Bool)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithLinkDispatcher:(id)arg1 interactionLogger:(id)arg2 registry:(id)arg3 collectionPlatform:(id)arg4 offlineModeState:(id)arg5;

@end

