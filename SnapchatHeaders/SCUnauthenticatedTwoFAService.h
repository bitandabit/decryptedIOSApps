//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCSessionRequestManager;

@interface SCUnauthenticatedTwoFAService : NSObject
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)resendTwoFACodeToUsernameOrEmail:(id)arg1 preAuthToken:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithRequestManager:(id)arg1;

@end

