//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalLinkControllerSignupDelegate.h"
#import "SPTLoginMarketSignupStatusRequestDelegate.h"
#import "SPTLoginRegisterEmailRequestDelegate.h"
#import "SPTLoginValidateCodeRequestDelegate.h"

@class NSString, SPTDataLoaderFactory, SPTLoginMarketSignupStatusRequest, SPTLoginRegisterEmailRequest, SPTLoginValidateCodeRequest, SPTObserverManager;

@interface SPTLoginInviteController : NSObject <SPTLoginMarketSignupStatusRequestDelegate, SPTLoginRegisterEmailRequestDelegate, SPTLoginValidateCodeRequestDelegate, SPTExternalLinkControllerSignupDelegate>
{
    _Bool _shouldShowInviteInsteadOfSignup;
    _Bool _allowNeutralGender;
    _Bool _invitePending;
    _Bool _inviteCodeValidated;
    _Bool _hasPendingSignupIntent;
    _Bool _hasPendingInviteActionIntent;
    int _codeLength;
    NSString *_marketCountryCode;
    NSString *_inviteCode;
    NSString *_signupPrefillEmail;
    SPTLoginMarketSignupStatusRequest *_marketSignupStatusRequest;
    SPTLoginRegisterEmailRequest *_registerEmailRequest;
    SPTLoginValidateCodeRequest *_validateCodeRequest;
    SPTDataLoaderFactory *_dataLoaderFactory;
    CDUnknownBlockType _registerMailCallback;
    CDUnknownBlockType _validateCodeCallback;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(copy, nonatomic) CDUnknownBlockType validateCodeCallback; // @synthesize validateCodeCallback=_validateCodeCallback;
@property(copy, nonatomic) CDUnknownBlockType registerMailCallback; // @synthesize registerMailCallback=_registerMailCallback;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(retain, nonatomic) SPTLoginValidateCodeRequest *validateCodeRequest; // @synthesize validateCodeRequest=_validateCodeRequest;
@property(retain, nonatomic) SPTLoginRegisterEmailRequest *registerEmailRequest; // @synthesize registerEmailRequest=_registerEmailRequest;
@property(retain, nonatomic) SPTLoginMarketSignupStatusRequest *marketSignupStatusRequest; // @synthesize marketSignupStatusRequest=_marketSignupStatusRequest;
@property(nonatomic) _Bool hasPendingInviteActionIntent; // @synthesize hasPendingInviteActionIntent=_hasPendingInviteActionIntent;
@property(nonatomic) _Bool hasPendingSignupIntent; // @synthesize hasPendingSignupIntent=_hasPendingSignupIntent;
@property(nonatomic) int codeLength; // @synthesize codeLength=_codeLength;
@property(nonatomic, getter=isInviteCodeValidated) _Bool inviteCodeValidated; // @synthesize inviteCodeValidated=_inviteCodeValidated;
@property(copy, nonatomic) NSString *signupPrefillEmail; // @synthesize signupPrefillEmail=_signupPrefillEmail;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(nonatomic, getter=isInvitePending) _Bool invitePending; // @synthesize invitePending=_invitePending;
@property(nonatomic) _Bool allowNeutralGender; // @synthesize allowNeutralGender=_allowNeutralGender;
@property(nonatomic) _Bool shouldShowInviteInsteadOfSignup; // @synthesize shouldShowInviteInsteadOfSignup=_shouldShowInviteInsteadOfSignup;
@property(retain, nonatomic) NSString *marketCountryCode; // @synthesize marketCountryCode=_marketCountryCode;
- (void).cxx_destruct;
- (void)externalLinkController:(id)arg1 receivedLinkWithURL:(id)arg2;
- (void)validateCodeRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)didValidateCodeWithRequest:(id)arg1;
- (void)registerEmailRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)didRegisterEmailWithRequest:(id)arg1;
- (void)marketSignupStatusRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)marketSignupStatusRequestDidSucceedForNormalMarket:(id)arg1 allowNeutralGender:(_Bool)arg2;
- (void)marketSignupStatusRequestDidSucceed:(id)arg1 withInviteOnlyMarketCountryCode:(id)arg2 allowNeutralGender:(_Bool)arg3;
- (void)archiveCurrentState:(id)arg1;
- (void)archiveCurrentState;
- (void)loadArchivedState:(id)arg1;
- (void)loadArchivedState;
- (id)userDefaultsForPersistentState;
- (id)cleanSignupURL:(id)arg1;
@property(readonly, nonatomic) id <SPTLoginInviteControllerObserver> observerProxy;
- (id)selectBetweenDefaultEndpoint:(id)arg1 andOverrideEndpoint:(id)arg2 basedOnKey:(id)arg3;
- (id)provideInviteValidationEndpoint;
- (id)provideInviteRequestEndpoint;
- (id)provideMarketEndpoint;
- (void)tryFetchingStatus;
- (void)updateInviteStatusFromRemoteService;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)userDidCompleteSignup;
- (void)userDidRequestInvitation;
- (void)userDidCompleteLogin;
- (void)validateCode:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)registerEmail:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)clearInviteCode;
- (void)setMarketFromInviteLink:(id)arg1;
- (void)setInviteCode:(id)arg1 validated:(_Bool)arg2;
- (id)initWithDataLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
