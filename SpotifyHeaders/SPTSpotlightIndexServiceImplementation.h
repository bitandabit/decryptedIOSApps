//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSpotlightIndexService.h"

@class NSString, SPTAllocationContext, SPTSpotlightIndexRegistryImplementation;

@interface SPTSpotlightIndexServiceImplementation : NSObject <SPTSpotlightIndexService>
{
    id <SPTUserActivityService> _userActivityService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTNetworkService> _networkService;
    id <SPTAbbaService> _abbaService;
    SPTSpotlightIndexRegistryImplementation *_spotlightIndexRegistry;
    id <SPTSpotlightIndexDelegate> _spotlightIndexDel;
}

+ (_Bool)isSpotlightIndexingSupportedByOS;
+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTSpotlightIndexDelegate> spotlightIndexDel; // @synthesize spotlightIndexDel=_spotlightIndexDel;
@property(retain, nonatomic) SPTSpotlightIndexRegistryImplementation *spotlightIndexRegistry; // @synthesize spotlightIndexRegistry=_spotlightIndexRegistry;
@property(retain, nonatomic) id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(retain, nonatomic) id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(retain, nonatomic) id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(retain, nonatomic) id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTUserActivityService> userActivityService; // @synthesize userActivityService=_userActivityService;
- (void).cxx_destruct;
- (id)provideSpotlightIndexRegistry;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

