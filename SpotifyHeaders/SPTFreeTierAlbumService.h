//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUIPageService.h"

@class SPTFreeTierAlbumHubManager;

@interface SPTFreeTierAlbumService : SPTUIPageService
{
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTFreeTierUIService> _freeTierUIService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTFreeTierAllSongsService> _freeTierAllSongsService;
    id <SPTFreeTierUpsellService> _freeTierUpsellService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlayerFeature> _playerService;
    id <SPTNetworkService> _networkService;
    SPTFreeTierAlbumHubManager *_hubManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierAlbumHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTFreeTierUpsellService> freeTierUpsellService; // @synthesize freeTierUpsellService=_freeTierUpsellService;
@property(nonatomic) __weak id <SPTFreeTierAllSongsService> freeTierAllSongsService; // @synthesize freeTierAllSongsService=_freeTierAllSongsService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTFreeTierUIService> freeTierUIService; // @synthesize freeTierUIService=_freeTierUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
- (void).cxx_destruct;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end

