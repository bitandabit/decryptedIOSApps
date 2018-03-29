//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearch2ResultsContextProvider.h"

@class NSString, SPTDataLoaderFactory, SPTNetworkConnectivityController;

@interface SPTSearch2ResultsContextProviderImplementation : NSObject <SPTSearch2ResultsContextProvider>
{
    id <SPTSearch2URLProviding> _urlProvider;
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    SPTDataLoaderFactory *_dataLoaderFactory;
    unsigned long long _entityVersion;
    SPTNetworkConnectivityController *_connectivityController;
    id <SPTSearch2ContentOperationsFactory> _postProcessContentOperationsFactory;
    id <SPTSearch2TextProvider> _searchTextProvider;
}

@property(retain, nonatomic) id <SPTSearch2TextProvider> searchTextProvider; // @synthesize searchTextProvider=_searchTextProvider;
@property(readonly, nonatomic) id <SPTSearch2ContentOperationsFactory> postProcessContentOperationsFactory; // @synthesize postProcessContentOperationsFactory=_postProcessContentOperationsFactory;
@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) unsigned long long entityVersion; // @synthesize entityVersion=_entityVersion;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(readonly, nonatomic) id <SPTSearch2URLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
- (void).cxx_destruct;
- (id)provideContextForQuery:(id)arg1;
- (id)initWithURLProvider:(id)arg1 hubFrameworkService:(id)arg2 dataLoaderFactory:(id)arg3 connectivityController:(id)arg4 entityVersion:(unsigned long long)arg5 postProcessContentOperationsFactory:(id)arg6 searchTextProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

