//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "SPTMetaViewControllerRootViewPresenter.h"

@class NSString;

@interface SPTTasteCollectionNavigationController : UINavigationController <SPTMetaViewControllerRootViewPresenter>
{
    id <SPTMetaViewController> _metaViewController;
}

@property(retain) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void).cxx_destruct;
- (_Bool)presentBridgeViewAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRootViewController:(id)arg1 metaViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

