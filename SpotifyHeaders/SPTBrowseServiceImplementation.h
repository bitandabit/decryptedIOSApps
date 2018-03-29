//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BrowseService.h"

@class NSString, SPTAllocationContext, SPTBrowseScrollHandler, SPTBrowseTestManagerImplementation;

@interface SPTBrowseServiceImplementation : NSObject <BrowseService>
{
    id <SPTAbbaService> _abbaService;
    id <SPTSessionService> _clientSessionService;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFramework;
    id <SPTNavigationFeature> _navigationService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTBrowseRedirectButtonProvider> _browseRedirectButtonProvider;
    SPTBrowseTestManagerImplementation *_testManager;
    SPTBrowseScrollHandler *_scrollHandler;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTBrowseScrollHandler *scrollHandler; // @synthesize scrollHandler=_scrollHandler;
@property(retain, nonatomic) SPTBrowseTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTBrowseRedirectButtonProvider> browseRedirectButtonProvider; // @synthesize browseRedirectButtonProvider=_browseRedirectButtonProvider;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFramework; // @synthesize hubFramework=_hubFramework;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (void).cxx_destruct;
- (id)createTestManager;
- (id)createHubComponentFactory;
- (id)provideBrowseScrollHandler;
- (id)provideBrowseTestManager;
- (id)provideBrowseRedirectButtonProvider;
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

