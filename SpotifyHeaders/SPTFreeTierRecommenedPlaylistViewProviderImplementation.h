//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierRecommenedPlaylistViewProvider.h"

@class NSString;

@interface SPTFreeTierRecommenedPlaylistViewProviderImplementation : NSObject <SPTFreeTierRecommenedPlaylistViewProvider>
{
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <EXP_SPTHubComponentModelURIResolver> _componentModelURIResolver;
    id <SPTOnDemandService> _onDemandService;
    id <SPTProductState> _productState;
}

@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(retain, nonatomic) id <EXP_SPTHubComponentModelURIResolver> componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
- (void).cxx_destruct;
- (id)recommendedPlaylistFooterForURL:(id)arg1 withContext:(id)arg2;
- (id)providePlaylistHubManager;
- (id)initWithHubFrameworkService:(id)arg1 componentModelURIResolver:(id)arg2 onDemandService:(id)arg3 productState:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

