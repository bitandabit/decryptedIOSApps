//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaPlaylistItemGroupResolver-Protocol.h"
#import "SCStreamingProxiedURLProviding-Protocol.h"

@class FBKVOController, NSMutableDictionary, NSString, SCDiscoverEdition, SCDiscoverOperaMediaManager, SCDiscoverSubscriptionChecker, SCDiscoverUserProperties, SCUserSession;
@protocol SCOperaPlaylistItemController, SCStreamingProxiedURLProviding;

@interface SCSingleDiscoverEditionOperaDataSource : NSObject <SCStreamingProxiedURLProviding, SCOperaPlaylistItemGroupResolver>
{
    SCDiscoverUserProperties *_discoverUserProperties;
    SCUserSession *_userSession;
    FBKVOController *_kvoController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCDiscoverSubscriptionChecker *_subscriptionChecker;
    SCDiscoverOperaMediaManager *_mediaManager;
    _Bool _shouldStartWithLongform;
    NSMutableDictionary *_playlistDSnapIDToChunkMap;
    id <SCStreamingProxiedURLProviding> _streamingProxiedURLProvider;
    CDUnknownBlockType _firstChunkLoadedCallback;
    SCDiscoverEdition *_edition;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCDiscoverEdition *edition; // @synthesize edition=_edition;
- (void).cxx_destruct;
- (id)proxiedStreamingURLForMediaURL:(id)arg1 encryptionInfo:(id)arg2 trackingInfo:(id)arg3 requestContexts:(id)arg4;
- (void)_editionChannelSubscribeStateDidChange;
- (void)_chunkLoadingStateDidChange:(id)arg1 chunk:(id)arg2;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokeFirstChunkLoadedCallbackIfNecessary:(id)arg1;
- (void)waitForItemBecomeLoaded:(id)arg1 startWaitingForDownloadCallback:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)teardownDataModelForItem:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (void)dealloc;
- (id)initWithEdition:(id)arg1 discoverUserProperties:(id)arg2 shouldStartWithLongform:(_Bool)arg3 userSession:(id)arg4 playlistItemController:(id)arg5 mediaManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
