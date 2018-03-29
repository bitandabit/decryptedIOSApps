//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNavigationManagerDelegate.h"
#import "SPTPageRegistryObserver.h"

@class NSString, SPTNavigationManager, SPTRequestLifetime;

@interface SPTHomeBadgeManager : NSObject <SPTNavigationManagerDelegate, SPTPageRegistryObserver>
{
    id <SPTResolver> _resolver;
    id <SPTHomeTestManagerProtocol> _testManager;
    id <SPTNavigationRouter> _navigationRouter;
    SPTNavigationManager *_navigationManager;
    id <SPTMetaViewController> _metaViewController;
    id <SPTLocalSettings> _localSettings;
    id <SPTPageRegistry> _pageRegistry;
    id <SPTLogCenterProtocol> _logCenter;
    SPTRequestLifetime *_lifetime;
}

@property(retain, nonatomic) SPTRequestLifetime *lifetime; // @synthesize lifetime=_lifetime;
@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(readonly, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(readonly, nonatomic) id <SPTHomeTestManagerProtocol> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)pageRegistry:(id)arg1 didCreateViewController:(id)arg2 forViewURI:(id)arg3;
- (void)navigationManager:(id)arg1 didNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)dealloc;
@property(readonly, nonatomic, getter=isBadgeDisplayed) _Bool badgeDisplayed;
- (void)displayBadge:(_Bool)arg1;
- (void)load;
- (id)initWithResolver:(id)arg1 testManager:(id)arg2 navigationRouter:(id)arg3 navigationManager:(id)arg4 metaViewController:(id)arg5 localSettings:(id)arg6 pageRegistry:(id)arg7 logCenter:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
