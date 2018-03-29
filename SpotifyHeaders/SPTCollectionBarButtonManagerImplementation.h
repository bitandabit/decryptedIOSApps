//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTBarButtonItemManagerObserver.h"
#import "SPTCollectionBarButtonManager.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTProfileUserDataChangeObserver.h"

@class NSString, SPTCollectionProfileButton, UIViewController<SPTPageController>;

@interface SPTCollectionBarButtonManagerImplementation : NSObject <SPTImageLoaderDelegate, SPTBarButtonItemManagerObserver, SPTProfileUserDataChangeObserver, SPTCollectionBarButtonManager>
{
    _Bool _hasPendingUpdates;
    UIViewController<SPTPageController> *_viewController;
    id <SPTImageLoader> _imageLoader;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTProfileUserData> _profileUserData;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTCollectionProfileButton *_profileButton;
}

@property(nonatomic) _Bool hasPendingUpdates; // @synthesize hasPendingUpdates=_hasPendingUpdates;
@property(retain, nonatomic) SPTCollectionProfileButton *profileButton; // @synthesize profileButton=_profileButton;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTProfileUserData> profileUserData; // @synthesize profileUserData=_profileUserData;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak UIViewController<SPTPageController> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (_Bool)settingsButtonPressed:(id)arg1;
- (_Bool)profileButtonPressed:(id)arg1;
- (void)loadProfileImage;
- (void)profileUserDataDidChange:(id)arg1;
- (void)setupNavigationBarButtons:(_Bool)arg1;
- (void)update;
- (void)dealloc;
- (id)initWithImageLoader:(id)arg1 barButtonItemManager:(id)arg2 profileUserData:(id)arg3 linkDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
