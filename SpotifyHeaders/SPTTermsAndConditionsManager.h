//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageBarControllerObserver.h"
#import "SPTProductStateObserver.h"
#import "SPTTermsAndConditionsControllerDelegate.h"

@class NSString, SPSession, SPTDataLoader, SPTLoginDeferredTermsController, SPTTermsAndConditionsController, SPTTermsAndConditionsReacceptanceManager;

@interface SPTTermsAndConditionsManager : NSObject <SPTProductStateObserver, SPTTermsAndConditionsControllerDelegate, MessageBarControllerObserver>
{
    _Bool _shouldAcceptTermsAndPrivacySeparately;
    _Bool _shouldAutoAcceptLicensesAfterSignup;
    id <SPTProductState> _productState;
    SPSession *_session;
    SPTDataLoader *_dataLoader;
    SPTTermsAndConditionsController *_termsAndConditionsController;
    SPTTermsAndConditionsReacceptanceManager *_termsAndConditionsReacceptanceManager;
    SPTLoginDeferredTermsController *_deferredTermsController;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
    id <SPTAlertController> _alertController;
}

+ (id)licenseSuffixesRequiringSeparateAcceptance;
+ (id)termsAndConditionsManagerWithProductState:(id)arg1 session:(id)arg2 deferredTermsController:(id)arg3 linkDispatcher:(id)arg4 dataLoaderFactory:(id)arg5 adjustTracker:(id)arg6 shouldAutoAcceptLicenses:(_Bool)arg7 alertController:(id)arg8;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTLoginDeferredTermsController *deferredTermsController; // @synthesize deferredTermsController=_deferredTermsController;
@property(nonatomic) _Bool shouldAutoAcceptLicensesAfterSignup; // @synthesize shouldAutoAcceptLicensesAfterSignup=_shouldAutoAcceptLicensesAfterSignup;
@property(nonatomic) _Bool shouldAcceptTermsAndPrivacySeparately; // @synthesize shouldAcceptTermsAndPrivacySeparately=_shouldAcceptTermsAndPrivacySeparately;
@property(retain, nonatomic) SPTTermsAndConditionsReacceptanceManager *termsAndConditionsReacceptanceManager; // @synthesize termsAndConditionsReacceptanceManager=_termsAndConditionsReacceptanceManager;
@property(retain, nonatomic) SPTTermsAndConditionsController *termsAndConditionsController; // @synthesize termsAndConditionsController=_termsAndConditionsController;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (void)termsAndConditionsControllerDidDeferTermsAndConditions:(id)arg1;
- (void)termsAndConditionsControllerDidDeclineTermsAndConditions:(id)arg1;
- (void)termsAndConditionsControllerDidAcceptTermsAndConditions:(id)arg1;
- (void)dealloc;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)messageBarController:(id)arg1 didChangeToContentViewController:(id)arg2;
- (void)termsAndConditionsDeferred;
- (void)termsAndConditionsDeclined;
- (void)showTermsAndConditionsControllerWithLicenses:(id)arg1;
- (id)termsAndConditionsControllerWithLicenses:(id)arg1;
- (void)checkNeedsTermsAndConditionsUpdate;
- (_Bool)shouldAcceptTermsAndPrivacySeparatelyForLicenses:(id)arg1;
- (id)initWithProductState:(id)arg1 session:(id)arg2 deferredTermsController:(id)arg3 linkDispatcher:(id)arg4 dataLoaderFactory:(id)arg5 adjustTracker:(id)arg6 shouldAutoAcceptLicenses:(_Bool)arg7 alertController:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

