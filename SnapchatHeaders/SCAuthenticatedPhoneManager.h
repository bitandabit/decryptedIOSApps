//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTimeProfilable-Protocol.h"

@class NSString, SCAuthenticatedPhoneService, SCTwoFAManager;

@interface SCAuthenticatedPhoneManager : NSObject <SCTimeProfilable>
{
    SCAuthenticatedPhoneService *_authenticatedPhoneService;
    SCTwoFAManager *_twoFAManager;
}

+ (int)context;
- (void).cxx_destruct;
- (id)_getDeferredDeepLinkRequestJson:(id)arg1;
- (void)_verifyMobile:(id)arg1 shouldSkipConfirmation:(_Bool)arg2 type:(long long)arg3 isResetPassword:(_Bool)arg4 isFromDeepLink:(_Bool)arg5;
- (void)verifyMobile:(id)arg1 isResetPassword:(_Bool)arg2 isFromDeepLink:(_Bool)arg3 context:(id)arg4;
- (void)verifyMobileFromSettings:(id)arg1 type:(long long)arg2 isFromDeepLink:(_Bool)arg3;
- (void)_setMobile:(id)arg1 withCountryCode:(id)arg2 phoneCall:(_Bool)arg3 reverified:(_Bool)arg4 isResetPassword:(_Bool)arg5;
- (void)setMobile:(id)arg1 withCountryCode:(id)arg2 phoneCall:(_Bool)arg3 isResetPassword:(_Bool)arg4;
- (void)setMobileFromSettings:(id)arg1 withCountryCode:(id)arg2 phoneCall:(_Bool)arg3 reverified:(_Bool)arg4;
- (id)initWithAuthenticatedPhoneService:(id)arg1 twoFAManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

