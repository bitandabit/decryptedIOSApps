//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFreeTierAuthenticationHandler : NSObject
{
    id <SPTMetaViewController> _metaViewController;
    id <SPTLoginStateController> _loginStateController;
    id <SPTSessionServicesLoader> _sessionServicesLoader;
    id <SPTAlertController> _alertController;
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
}

@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTSessionServicesLoader> sessionServicesLoader; // @synthesize sessionServicesLoader=_sessionServicesLoader;
@property(retain, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void).cxx_destruct;
- (void)handleAuthenticationError:(id)arg1;
- (void)presentMainScreen:(CDUnknownBlockType)arg1;
- (void)authenticateAndLoginWithURI:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateWithCredentials:(id)arg1 userDidSignUp:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateAndLoginWithCredentials:(id)arg1 userDidSignUp:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithMetaViewController:(id)arg1 loginStateController:(id)arg2 sessionServicesLoader:(id)arg3 alertController:(id)arg4 adjustTracker:(id)arg5;

@end
