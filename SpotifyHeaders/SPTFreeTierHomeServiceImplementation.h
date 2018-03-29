//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierHomeService.h"

@class NSString, SPTAllocationContext, SPTFreeTierHomeHubManager;

@interface SPTFreeTierHomeServiceImplementation : NSObject <SPTFreeTierHomeService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <EXP_SPTHubFrameworkService> _hubService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTFreeTierUIService> _freeTierUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTFreeTierTasteOnboardingService> _tasteOnboardingService;
    SPTFreeTierHomeHubManager *_hubManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierHomeHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingService> tasteOnboardingService; // @synthesize tasteOnboardingService=_tasteOnboardingService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTFreeTierUIService> freeTierUIService; // @synthesize freeTierUIService=_freeTierUIService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubService; // @synthesize hubService=_hubService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
- (id)provideNFTHomeViewController:(id)arg1 context:(id)arg2;
- (void)setupHubManager;
- (void)setupPageRegistry;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

