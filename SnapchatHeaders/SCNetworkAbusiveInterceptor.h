//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCaptchaDelegate-Protocol.h"
#import "SCNetworkInterceptor-Protocol.h"

@class NSString, SCUserSession, UINavigationController;

@interface SCNetworkAbusiveInterceptor : NSObject <SCNetworkInterceptor, SCCaptchaDelegate>
{
    SCUserSession *_userSession;
    UINavigationController *_navigationController;
    _Bool _isTestingAbusiveUser;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)failVerifyCaptcha:(id)arg1;
- (void)succeedVerifyCaptcha:(id)arg1;
- (void)interceptWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (id)initWithUserSession:(id)arg1 navigationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
