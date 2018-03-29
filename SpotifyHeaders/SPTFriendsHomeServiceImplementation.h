//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTFriendsHomeService.h"
#import "SPTFriendsHomeTestManagerObserver.h"

@class NSString, SPTAllocationContext, SPTFriendsHomeTestManager;

@interface SPTFriendsHomeServiceImplementation : NSObject <SPTFriendsHomeTestManagerObserver, SPTFeatureFlagSignalObserver, SPTFriendsHomeService>
{
    _Bool _hasRegisteredFriendsWeekly;
    id <FollowFeature> _followFeature;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkFeature;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTFormatListPlatformService> _formatListPlatformService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTNavigationFeature> _navigationService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTShareFeature> _shareFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTCoreService> _coreService;
    id <SPTSettingsFeature> _settings;
    id <GaiaFeature> _gaiaFeature;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTFeatureFlagSignal> _freeTierFlag;
    SPTFriendsHomeTestManager *_testManager;
}

+ (id)serviceIdentifier;
@property(nonatomic) _Bool hasRegisteredFriendsWeekly; // @synthesize hasRegisteredFriendsWeekly=_hasRegisteredFriendsWeekly;
@property(retain, nonatomic) SPTFriendsHomeTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierFlag; // @synthesize freeTierFlag=_freeTierFlag;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTFormatListPlatformService> formatListPlatformService; // @synthesize formatListPlatformService=_formatListPlatformService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)testManagerDidChangeFriendsWeeklyEnabledState:(_Bool)arg1;
@property(readonly, nonatomic, getter=isFriendsHomeEnabled) _Bool friendsHomeEnabled;
- (id)provideReloadPolicy;
- (id)provideTestManager;
- (id)provideLogger;
- (id)provideFriendsHomeViewModelForURL:(id)arg1 context:(id)arg2 formatListType:(id)arg3;
- (id)provideFriendsHomeEntityViewControllerForURL:(id)arg1 context:(id)arg2 formatListType:(id)arg3;
- (id)provideFriendsHomeViewControllerWithURI:(id)arg1 context:(id)arg2;
- (void)registerFriendsHome;
- (void)registerFriendsWeekly;
- (void)dealloc;
- (void)unload;
- (void)registerPages;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
