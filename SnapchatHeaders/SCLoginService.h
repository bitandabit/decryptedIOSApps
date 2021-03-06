//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCAdTreatment, SCLogger, SCLoginResponseParser, SCSessionRequestManager;

@interface SCLoginService : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCLogger *_logger;
    SCAdTreatment *_adTreatment;
    SCLoginResponseParser *_loginResponseParser;
}

- (void).cxx_destruct;
- (void)warmUserPreLogin:(id)arg1;
- (id)_makeLoginPayloadWithUsernameOrEmail:(id)arg1 password:(id)arg2 preAuthToken:(id)arg3 twoFAMethod:(int)arg4 odlvPreAuthToken:(id)arg5 otpType:(long long)arg6 confirmReactivation:(_Bool)arg7 fromDeepLink:(_Bool)arg8 rememberDevice:(id)arg9 fideliusClientInit:(id)arg10 deviceCheckToken:(id)arg11;
- (id)_formatLoginParameter:(id)arg1;
- (void)loginWithUsernameOrEmail:(id)arg1 password:(id)arg2 preAuthToken:(id)arg3 twoFAMethod:(int)arg4 odlvPreAuthToken:(id)arg5 otpType:(long long)arg6 confirmReactivation:(_Bool)arg7 rememberDevice:(_Bool)arg8 fromDeepLink:(_Bool)arg9 fideliusClientInit:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12;
- (id)initWithRequestManager:(id)arg1 logger:(id)arg2 adTreatment:(id)arg3;

@end

