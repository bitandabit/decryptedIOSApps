//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLocationDataController-Protocol.h"
#import "SCLocationPreCacheDataFetcherDelegate-Protocol.h"
#import "SCUnlockableParserDelegate-Protocol.h"
#import "SCUnlockablesPreCacheProvider-Protocol.h"

@class NSString, SCLocationPreCacheFetcher, SCQueuePerformer, SCUnlockablesPreCacheConfig, SCUnlockablesS2Cache;
@protocol SCLocationDataController, SCLocationDataControllerDelegate;

@interface SCUnlockablesPreCacheController : NSObject <SCLocationPreCacheDataFetcherDelegate, SCLocationDataController, SCUnlockablesPreCacheProvider, SCUnlockableParserDelegate>
{
    SCLocationPreCacheFetcher *_cacheFetcher;
    SCUnlockablesS2Cache *_unlockablesS2Cache;
    SCQueuePerformer *_preCacheQueuePerformer;
    SCUnlockablesPreCacheConfig *_preCacheConfig;
    _Bool _useLiveCache;
    id <SCLocationDataControllerDelegate> delegate;
    id <SCLocationDataController> _dispatcher;
}

+ (void)_removeSavedState;
+ (id)path;
@property(nonatomic) __weak id <SCLocationDataController> dispatcher; // @synthesize dispatcher=_dispatcher;
@property _Bool useLiveCache; // @synthesize useLiveCache=_useLiveCache;
@property(nonatomic) __weak id <SCLocationDataControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)parser:(id)arg1 parsedStatusFromResponse:(unsigned long long)arg2;
- (void)parser:(id)arg1 parsedConfigurationFromResponse:(id)arg2;
- (void)parser:(id)arg1 parsedPreCacheRegions:(id)arg2;
- (void)parser:(id)arg1 parsedUnlockablesForCellToken:(id)arg2 cellData:(id)arg3;
- (void)_excludeByTagFrom:(id)arg1 tags:(id)arg2;
- (void)applyGeofiltersWithLocationCircle:(id)arg1 geofilters:(id)arg2;
- (void)_applyUnlockablesFromCacheForLocation:(id)arg1;
- (_Bool)hasS2CellWithData:(id)arg1;
- (id)isPreCacheApplicable:(id)arg1;
- (void)processResponse:(id)arg1 location:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCacheWithLocation:(id)arg1 newSession:(_Bool)arg2;
- (_Bool)isPreCacheEnabledForLocationCircle:(id)arg1;
- (id)_geoFiltersFromAreaCaches:(id)arg1;
- (id)_areaCachesForLocation:(id)arg1;
- (void)refreshCacheIfNeededWithLocation:(id)arg1;
- (void)clearCache;
- (id)init;
- (void)_ensureNonNilObjects;
- (void)saveState;
- (void)resetLiveCacheSelection;
- (void)locationDataFetcherFailedToFetchLocationDataWithError:(id)arg1;
- (void)locationDataFetcherFetchedLocationData:(id)arg1 forLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
