//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SPCore, SPFacebookSSO, SPTLoginCredentials, SPTLoginOptions;

@protocol SPTLoginStateController <NSObject>
@property(readonly, nonatomic) _Bool userDidSignUp;
@property(readonly, nonatomic) __weak SPCore *core;
@property(retain, nonatomic) NSError *lastConnectionError;
@property(retain, nonatomic) SPFacebookSSO *facebookSSO;
- (void)reloginWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)switchToUserWithCredentials:(SPTLoginCredentials *)arg1 options:(SPTLoginOptions *)arg2 shouldCreateUI:(_Bool)arg3 isFacebookLogin:(_Bool)arg4 completion:(void (^)(void))arg5;
- (void)switchToUserWithCredentials:(SPTLoginCredentials *)arg1 options:(SPTLoginOptions *)arg2 shouldCreateUI:(_Bool)arg3 isFacebookLogin:(_Bool)arg4;
- (void)switchToUserWithCredentials:(SPTLoginCredentials *)arg1 options:(SPTLoginOptions *)arg2 shouldCreateUI:(_Bool)arg3;
- (void)logoutForgetUser:(_Bool)arg1;
- (void)loginWithFacebookSSOWithCompletion:(void (^)(NSDictionary *, NSError *))arg1 shouldAutoCreateAccount:(_Bool)arg2;
- (void)loginWithCredentials:(SPTLoginCredentials *)arg1 options:(SPTLoginOptions *)arg2 userDidSignUp:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (void)loginWithCredentials:(SPTLoginCredentials *)arg1 options:(SPTLoginOptions *)arg2 completion:(void (^)(NSError *))arg3;
- (void)loginWithUsername:(NSString *)arg1 password:(NSString *)arg2 options:(SPTLoginOptions *)arg3 userDidSignUp:(_Bool)arg4 completion:(void (^)(NSError *))arg5;
- (void)loginWithUsername:(NSString *)arg1 password:(NSString *)arg2 options:(SPTLoginOptions *)arg3 completion:(void (^)(NSError *))arg4;
- (void)loginWithStoredCredentials:(SPTLoginCredentials *)arg1 options:(SPTLoginOptions *)arg2 completion:(void (^)(NSError *))arg3;
@end

