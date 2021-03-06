//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCDeepLinkProcessor-Protocol.h"

@class NSString, User;
@protocol LoginRegisterNavigationDelegate;

@interface SCPartnerLensDeepLinkProcessor : NSObject <SCDeepLinkProcessor>
{
    id <LoginRegisterNavigationDelegate> _loginRegisterNavigationDelegate;
    User *_user;
}

- (void).cxx_destruct;
- (id)_deferredUnlockDeeplinkURLForUnlockUUID:(id)arg1 metadata:(id)arg2 isUserLoggedIn:(_Bool)arg3;
- (_Bool)needsNavigationDelegate;
- (_Bool)canProcessForNonLoggedInUser;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1 loginRegisterNavigationDelegate:(id)arg2 user:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

