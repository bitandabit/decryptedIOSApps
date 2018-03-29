//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationPlatformService.h"

@class NSString, SPTAllocationContext, SPTExternalIntegrationDebugLogServiceImplementation;

@interface SPTExternalIntegrationPlatformServiceImplementation : NSObject <SPTExternalIntegrationPlatformService>
{
    id <SPTExternalIntegrationPlatform> _sharedPlatform;
    id <SPTExternalIntegrationCollectionService> _collectionService;
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTExternalIntegrationDriverDistractionService> _driverDistractionService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTExternalIntegrationRadioService> _radioService;
    id <SPTExternalIntegrationSearchService> _searchService;
    id <SPTSessionService> _sessionService;
    SPTExternalIntegrationDebugLogServiceImplementation *_debugLogService;
    id <SPTDebugService> _debugService;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(readonly, nonatomic) __weak SPTExternalIntegrationDebugLogServiceImplementation *debugLogService; // @synthesize debugLogService=_debugLogService;
@property(readonly, nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationSearchService> searchService; // @synthesize searchService=_searchService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationRadioService> radioService; // @synthesize radioService=_radioService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDriverDistractionService> driverDistractionService; // @synthesize driverDistractionService=_driverDistractionService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationCollectionService> collectionService; // @synthesize collectionService=_collectionService;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlatform> sharedPlatform; // @synthesize sharedPlatform=_sharedPlatform;
- (void).cxx_destruct;
- (id)providePlatform;
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

