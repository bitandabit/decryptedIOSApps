//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaPlaylistDataSource-Protocol.h"

@class NSMutableDictionary, NSString, SCDiscoverOperaMediaManager, SCDiscoverUserProperties, SCSingleDiscoverEditionOperaDataSource, SCUserSession;
@protocol SCOperaPlaylistItemController;

@interface SCDiscoverEditionsOperaDataSource : NSObject <SCOperaPlaylistDataSource>
{
    SCDiscoverUserProperties *_discoverUserProperties;
    SCUserSession *_userSession;
    SCSingleDiscoverEditionOperaDataSource *_dataSource;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCDiscoverOperaMediaManager *_mediaManager;
    _Bool _startWithAttachment;
    NSMutableDictionary *_editionIdToDataSource;
    NSMutableDictionary *_editionIdToEdition;
    _Bool _enableAutoAdvance;
}

- (void).cxx_destruct;
- (void)removeMediaForItem:(id)arg1;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)needToPrepareMediaBeforeDisplay;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dataModelForGroup:(id)arg1;
- (void)teardownDataModelForItem:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (id)_editionDataSourceForEditionId:(id)arg1;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (id)playlistItemGroupForDataModel:(id)arg1;
- (_Bool)canResolvePlaylistItemGroupDataModel:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (id)initWithDiscoverUserProperties:(id)arg1 startWithAttachment:(_Bool)arg2 userSession:(id)arg3 enableAutoAdvance:(_Bool)arg4 mediaManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
