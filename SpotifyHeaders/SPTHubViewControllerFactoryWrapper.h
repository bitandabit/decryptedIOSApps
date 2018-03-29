//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubViewControllerFactory.h"

@class NSString;

@interface SPTHubViewControllerFactoryWrapper : NSObject <SPTHubViewControllerFactory>
{
    id <SPTHUBCustomUtilityIdentifierRegistry> _hubCustomUtilityIdentifierRegistry;
    id <HUBViewControllerFactory> _viewControllerFactory;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTLogCenterProtocol> _logCenter;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTShelfService> _shelfService;
}

@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) id <HUBViewControllerFactory> viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(nonatomic) __weak id <SPTHUBCustomUtilityIdentifierRegistry> hubCustomUtilityIdentifierRegistry; // @synthesize hubCustomUtilityIdentifierRegistry=_hubCustomUtilityIdentifierRegistry;
- (void).cxx_destruct;
- (id)createPlayerForViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (id)createViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)wrapViewController:(id)arg1 referrerIdentifier:(id)arg2;
- (_Bool)canCreateViewControllerForViewURI:(id)arg1;
- (id)initWithViewControllerFactory:(id)arg1 barButtonItemManager:(id)arg2 logCenter:(id)arg3 playerFeature:(id)arg4 shelfService:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

