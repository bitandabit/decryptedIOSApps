//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeCoordinator.h"

@class SCScopeExposer, SCUserSessionScope;

@interface SCAuthenticatedNetworkScopeCoordinator : SCScopeCoordinator
{
    SCUserSessionScope *_userSessionScope;
    SCScopeExposer *_authenticatedNetworkScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *authenticatedNetworkScopeExposer; // @synthesize authenticatedNetworkScopeExposer=_authenticatedNetworkScopeExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

