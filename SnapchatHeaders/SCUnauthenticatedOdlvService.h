//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCSessionRequestManager;

@interface SCUnauthenticatedOdlvService : NSObject
{
    SCSessionRequestManager *_requestManager;
}

@property(readonly, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
- (void).cxx_destruct;
- (id)_parseOdlvRequestOtpResponseFromData:(id)arg1;
- (void)sendOdlvAuthRequest:(long long)arg1 usernameOrEmail:(id)arg2 odlvPreAuthToken:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithRequestManager:(id)arg1;

@end

