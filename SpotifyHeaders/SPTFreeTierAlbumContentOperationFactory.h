//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNetworkConnectivityController;

@interface SPTFreeTierAlbumContentOperationFactory : NSObject
{
    id <EXP_SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <SPTPlayerFeature> _playerService;
    id <SPTFreeTierUpsellService> _upsellService;
    id <SPTOnDemandService> _onDemandService;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

@property(readonly, nonatomic) __weak SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) __weak id <SPTFreeTierUpsellService> upsellService; // @synthesize upsellService=_upsellService;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)initWithHubContentOperationFactory:(id)arg1 playerService:(id)arg2 upsellService:(id)arg3 onDemandService:(id)arg4 networkConnectivityController:(id)arg5;

@end

