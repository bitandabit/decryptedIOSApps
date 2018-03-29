//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccountProductActivationObserver.h"

@class NSArray, NSString, NSURL, SPTAccountUpsellContent, SPTPopupManager, SPTUpsellAccountLogger;

@interface SPTAccountUpsellViewModel : NSObject <SPTAccountProductActivationObserver>
{
    _Bool _showCallToAction;
    _Bool _getPremiumActionEnabled;
    _Bool _premiumActivationProgressIndicatorEnabled;
    _Bool _active;
    _Bool _premiumActivationInProgress;
    _Bool _freeTierEnabled;
    id <SPTAccountUpsellViewModelDelegate> _delegate;
    NSString *_navigationTitle;
    SPTAccountUpsellContent *_pageHeaderContent;
    double _minimumHeaderHeight;
    NSString *_getPremiumButtonTitle;
    NSURL *_viewURI;
    id <SPTPageCreationContext> _context;
    SPTUpsellAccountLogger *_accountLogger;
    id <SPTAccountProductActivationController> _productActivationController;
    id <SPTAccountProductInformationController> _productInformationController;
    id <SPTUIModeTransitionCoordinator> _transitionCoordinator;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTUIModeTransitionToken> _transitionToken;
    NSArray *_upsellInformationTableContent;
    NSArray *_getPremiumUpsellInformationTableContent;
    NSArray *_premiumUpsellInformationTableContent;
    SPTPopupManager *_popupManager;
    NSString *_previouslyLoggedPremiumiumDestinationDialogImpression;
}

@property(copy, nonatomic) NSString *previouslyLoggedPremiumiumDestinationDialogImpression; // @synthesize previouslyLoggedPremiumiumDestinationDialogImpression=_previouslyLoggedPremiumiumDestinationDialogImpression;
@property(readonly, nonatomic) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(nonatomic) _Bool premiumActivationInProgress; // @synthesize premiumActivationInProgress=_premiumActivationInProgress;
@property(copy, nonatomic) NSArray *premiumUpsellInformationTableContent; // @synthesize premiumUpsellInformationTableContent=_premiumUpsellInformationTableContent;
@property(copy, nonatomic) NSArray *getPremiumUpsellInformationTableContent; // @synthesize getPremiumUpsellInformationTableContent=_getPremiumUpsellInformationTableContent;
@property(copy, nonatomic) NSArray *upsellInformationTableContent; // @synthesize upsellInformationTableContent=_upsellInformationTableContent;
@property(retain, nonatomic) id <SPTUIModeTransitionToken> transitionToken; // @synthesize transitionToken=_transitionToken;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTUIModeTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(retain, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(retain, nonatomic) id <SPTAccountProductActivationController> productActivationController; // @synthesize productActivationController=_productActivationController;
@property(retain, nonatomic) SPTUpsellAccountLogger *accountLogger; // @synthesize accountLogger=_accountLogger;
@property(retain, nonatomic) id <SPTPageCreationContext> context; // @synthesize context=_context;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool premiumActivationProgressIndicatorEnabled; // @synthesize premiumActivationProgressIndicatorEnabled=_premiumActivationProgressIndicatorEnabled;
@property(nonatomic) _Bool getPremiumActionEnabled; // @synthesize getPremiumActionEnabled=_getPremiumActionEnabled;
@property(copy, nonatomic) NSString *getPremiumButtonTitle; // @synthesize getPremiumButtonTitle=_getPremiumButtonTitle;
@property(readonly, nonatomic) double minimumHeaderHeight; // @synthesize minimumHeaderHeight=_minimumHeaderHeight;
@property(nonatomic) _Bool showCallToAction; // @synthesize showCallToAction=_showCallToAction;
@property(retain, nonatomic) SPTAccountUpsellContent *pageHeaderContent; // @synthesize pageHeaderContent=_pageHeaderContent;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) __weak id <SPTAccountUpsellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)productActivationController:(id)arg1 didFailActivatingProduct:(long long)arg2 error:(id)arg3;
- (void)productActivationController:(id)arg1 didFinishActivatingProduct:(long long)arg2;
- (void)productActivationController:(id)arg1 didStartActivatingProduct:(long long)arg2;
- (void)showLoginFailureErrorView;
- (void)openTrialStartedURL;
- (void)handleResult:(long long)arg1;
- (void)callTransitionaryUI;
- (void)logPremiumDestinationPageViewExit;
- (void)logPremiumDestinationDialogImpression;
- (void)logPremiumDestinationPageViewEnter;
- (void)getPremiumAction;
- (void)updateInformation;
- (_Bool)shouldShowContentForFreeUser;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithViewURI:(id)arg1 context:(id)arg2 accountLogger:(id)arg3 productActivationController:(id)arg4 productInformationController:(id)arg5 transitionCoordinator:(id)arg6 linkDispatcher:(id)arg7 popupManger:(id)arg8 freeTierEnabled:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

