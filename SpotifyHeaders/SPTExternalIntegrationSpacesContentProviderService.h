//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationContentProvider.h"
#import "SPTService.h"

@class NSMutableArray, NSString, SPTAllocationContext, SPTDataLoaderFactory, SPTExternalIntegrationSpacesContentFactory, SPTExternalIntegrationSpacesContentURLResolver, SPTPersistentCache;

@interface SPTExternalIntegrationSpacesContentProviderService : NSObject <SPTService, SPTExternalIntegrationContentProvider>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTNetworkService> _networkService;
    id <SPTExternalIntegrationTestManagerService> _testManagerService;
    NSMutableArray *_activeRequests;
    SPTPersistentCache *_cache;
    SPTExternalIntegrationSpacesContentFactory *_contentFactory;
    SPTExternalIntegrationSpacesContentURLResolver *_contentURLResolver;
    SPTDataLoaderFactory *_dataLoaderFactory;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) SPTExternalIntegrationSpacesContentURLResolver *contentURLResolver; // @synthesize contentURLResolver=_contentURLResolver;
@property(readonly, nonatomic) SPTExternalIntegrationSpacesContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(readonly, nonatomic) SPTPersistentCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSMutableArray *activeRequests; // @synthesize activeRequests=_activeRequests;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationTestManagerService> testManagerService; // @synthesize testManagerService=_testManagerService;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
@property(readonly, nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)errorForRequestError:(id)arg1;
- (void)resolveChildContentOfParentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForChildContentOfParentWithURI:(id)arg1;
- (void)resolveContentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForContentWithURI:(id)arg1;
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

