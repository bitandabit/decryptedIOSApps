//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierPlayerService.h"

@class NSString, SPTAllocationContext, SPTFreeTierPlayerLoggerImplementation, SPTFreeTierRemoteControlPolicy;

@interface SPTFreeTierPlayerServiceImplementation : NSObject <SPTFreeTierPlayerService>
{
    id <SPTContainerService> _containerService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPlayerFeature> _playback;
    id <NowPlayingFeature> _nowPlayingFeature;
    SPTFreeTierRemoteControlPolicy *_remoteControlPolicy;
    SPTFreeTierPlayerLoggerImplementation *_logger;
    id <SPTPlayer> _player;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTFreeTierPlayerLoggerImplementation *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTFreeTierRemoteControlPolicy *remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(nonatomic) __weak id <NowPlayingFeature> nowPlayingFeature; // @synthesize nowPlayingFeature=_nowPlayingFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playback; // @synthesize playback=_playback;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)providePlayer;
- (id)provideFreeTierRemoteControlPolicy;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
