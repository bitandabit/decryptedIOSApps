//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeCoordinator.h"

@class SCAuthenticatedNetworkScope, SCScopeExposer, SCUserSessionScope, SCUserStorageScope;

@interface SCFriendsFeedServiceScopeCoordinator : SCScopeCoordinator
{
    SCUserSessionScope *_userSessionScope;
    SCAuthenticatedNetworkScope *_authenticatedNetworkScope;
    SCUserStorageScope *_userStorageScope;
    SCScopeExposer *_friendsFeedServiceScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *friendsFeedServiceScopeExposer; // @synthesize friendsFeedServiceScopeExposer=_friendsFeedServiceScopeExposer;
@property(nonatomic) __weak SCUserStorageScope *userStorageScope; // @synthesize userStorageScope=_userStorageScope;
@property(nonatomic) __weak SCAuthenticatedNetworkScope *authenticatedNetworkScope; // @synthesize authenticatedNetworkScope=_authenticatedNetworkScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end
