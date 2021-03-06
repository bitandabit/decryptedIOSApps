//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGalleryLagunaContentTransferStatusUpdaterDelegate-Protocol.h"
#import "SCGallerySingleItemOperaDataSource-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCGalleryOperaConfiguration, SCGalleryOperaMediaManager, SCOperaViewModel, SCUserSession;
@protocol SCGalleryEntry, SCGallerySingleItemOperaDataSourceDelegate, SCObserving;

@interface SCGallerySingleEntryOperaDataSource : NSObject <SCGalleryLagunaContentTransferStatusUpdaterDelegate, SCGallerySingleItemOperaDataSource>
{
    SCGalleryOperaConfiguration *_configuration;
    SCUserSession *_userSession;
    id <SCGallerySingleItemOperaDataSourceDelegate> _delegate;
    SCGalleryOperaMediaManager *_mediaManager;
    SCOperaViewModel *_currentViewModel;
    NSString *_dataSourceId;
    CDStruct_bac8f6e9 _baseMediaScenePath;
    NSMutableDictionary *_snapIdToViewModelMap;
    NSMutableDictionary *_snapIdToLoadedMediaProperties;
    id <SCGalleryEntry> _entry;
    NSArray *_snaps;
    NSMutableDictionary *_snapIdToGallerySnap;
    NSDictionary *_snapIdToSnapHighlightState;
    id <SCObserving> _observeContext;
    NSMutableDictionary *_snapIdToDelayToLoadContentStatusUpdater;
}

@property(nonatomic) CDStruct_bac8f6e9 mediaScenePath; // @synthesize mediaScenePath=_baseMediaScenePath;
@property(readonly, copy, nonatomic) NSString *singleDataSourceId; // @synthesize singleDataSourceId=_dataSourceId;
@property(retain, nonatomic) SCOperaViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(nonatomic) __weak SCGalleryOperaMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
@property(nonatomic) __weak id <SCGallerySingleItemOperaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_attemptToRecoverEntry:(id)arg1;
- (unsigned long long)_interestedLagunaContentForMediaType:(unsigned long long)arg1;
- (void)lagunaContentTransferStatusUpdater:(id)arg1 didFinishDownloadForContentComponent:(unsigned long long)arg2;
- (void)_removeSnapFromDelayToLoadMap:(id)arg1;
- (void)_addSnapToDelayToLoadMap:(id)arg1;
- (void)_unobserveEntryChanges;
- (void)_observeEntryChanges;
- (void)_updateEntry:(id)arg1 changedKeys:(id)arg2;
- (void)_removePropertiesFromPage:(id)arg1 removePropertyWithKeys:(id)arg2;
- (void)_appenedPropertiesToPage:(id)arg1 newProperties:(id)arg2;
- (id)_pageForGallerySnap:(id)arg1;
- (void)_removeAllMediaLoadedPropertiesForSnapId:(id)arg1;
- (void)_appendMediaLoadedPropertiesForSnapId:(id)arg1 newProperties:(id)arg2;
- (void)_didLoadContentWithSnapId:(id)arg1 loadedProperties:(id)arg2 mediaLoaded:(_Bool)arg3;
- (void)_updateSingleViewModelForSnap:(id)arg1;
- (void)_updateViewModelGroup;
- (id)_updateSnapIdToHighlightStateMapFromSnaps:(id)arg1;
- (id)_buildSnapIdToGallerySnapMapFromSnaps:(id)arg1;
- (void)_updatePlaylistGroupBasedOnEntry:(id)arg1;
- (void)_startToLoadSnap:(id)arg1;
- (id)_applyCroppingIfNecessaryForImage:(id)arg1 snap:(id)arg2;
- (void)attemptToAttachPresentationFrame:(id)arg1 toPageId:(id)arg2;
- (void)handleMoveToNextEventAtPageId:(id)arg1 didTapToNext:(_Bool)arg2;
- (void)manualFetchHDMediaWithPageId:(id)arg1;
- (id)resolveGallerySnapWithPageId:(id)arg1;
- (void)startToBrowsePageWithPageId:(id)arg1 singleDataSourceId:(id)arg2;
- (void)removeMediaWithPageId:(id)arg1;
- (void)prepareToViewPageWithPageId:(id)arg1;
- (void)buildViewModels;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 dataSourceId:(id)arg2 configuration:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

