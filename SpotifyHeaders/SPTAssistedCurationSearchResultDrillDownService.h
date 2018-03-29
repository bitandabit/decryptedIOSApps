//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTAssistedCurationLinkDispatcherPageProvider.h"

@class NSString, SPTAssistedCurationSearchResultDrillDownHubManager;

@interface SPTAssistedCurationSearchResultDrillDownService : SPTUIPageService <SPTAssistedCurationLinkDispatcherPageProvider>
{
    SPTAssistedCurationSearchResultDrillDownHubManager *_hubManager;
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <SPTSearchService> _searchService;
    id <SPTGLUEService> _glueService;
    id <SPTSessionService> _clientSessionService;
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTAssistedCurationService> _assistedCurationService;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(nonatomic) __weak id <SPTAssistedCurationService> assistedCurationService; // @synthesize assistedCurationService=_assistedCurationService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTSearchService> searchService; // @synthesize searchService=_searchService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(retain, nonatomic) SPTAssistedCurationSearchResultDrillDownHubManager *hubManager; // @synthesize hubManager=_hubManager;
- (void).cxx_destruct;
- (id)provideGLUEImageLoader;
- (id)provideAssistedCurationTheme;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

