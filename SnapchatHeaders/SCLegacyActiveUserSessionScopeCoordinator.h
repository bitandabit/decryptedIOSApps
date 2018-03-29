//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeCoordinator.h"

@class SCActiveUserSessionScope, SCNavigationInitializer, SCScopeExposer, SCSystemScope, SCUserSession;

@interface SCLegacyActiveUserSessionScopeCoordinator : SCScopeCoordinator
{
    SCUserSession *_userSession;
    unsigned long long _userSessionContext;
    SCNavigationInitializer *_navInitializer;
    SCSystemScope *_systemScope;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCScopeExposer *_navigationScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *navigationScopeExposer; // @synthesize navigationScopeExposer=_navigationScopeExposer;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)didLogout:(id)arg1;
- (void)_additionalLoginAndRegistrationSetUp;
- (void)_setUpView;
- (void)_loginAndRegistrationSetUp;
- (void)_registrationSetUp;
- (void)_commonSetUp;
- (id)end;
- (void)begin;

@end

