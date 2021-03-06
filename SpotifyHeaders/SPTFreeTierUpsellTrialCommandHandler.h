//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBCommandHandler.h"

@class SPTFreeTierUpsellLogger, SPTPopupManager;

@interface SPTFreeTierUpsellTrialCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    SPTFreeTierUpsellLogger *_upsellLogger;
    id <SPTAccountTrialDeferredController> _accountDeferredTrialController;
    id <SPTUIModeTransitionCoordinator> _uiModeTransitionCoordinator;
    SPTPopupManager *_popupManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTUIModeTransitionToken> _transitionToken;
}

@property(retain, nonatomic) id <SPTUIModeTransitionToken> transitionToken; // @synthesize transitionToken=_transitionToken;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(retain, nonatomic) id <SPTUIModeTransitionCoordinator> uiModeTransitionCoordinator; // @synthesize uiModeTransitionCoordinator=_uiModeTransitionCoordinator;
@property(retain, nonatomic) id <SPTAccountTrialDeferredController> accountDeferredTrialController; // @synthesize accountDeferredTrialController=_accountDeferredTrialController;
@property(retain, nonatomic) SPTFreeTierUpsellLogger *upsellLogger; // @synthesize upsellLogger=_upsellLogger;
- (void).cxx_destruct;
- (void)setupAccountDeferredTrialControllerObserver;
- (void)startTrialComplete;
- (void)openTrialStartedURL;
- (void)showLoginFailureErrorView;
- (void)handleResult:(long long)arg1;
- (void)startTrialWithCommand:(id)arg1;
- (_Bool)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithUpsellLogger:(id)arg1 accountDeferredTrialController:(id)arg2 uiModeTransitionCoordinator:(id)arg3 linkDispatcher:(id)arg4 popupManager:(id)arg5;

@end

