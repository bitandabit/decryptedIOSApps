//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTThirdPartyAppTracker.h"
#import "SPTThirdPartyUserTracker.h"

@class NSString;

@protocol SPTAdjustUserTrackerProtocol <SPTThirdPartyUserTracker, SPTThirdPartyAppTracker>
- (void)userAccountRecoveryCompleted:(_Bool)arg1;
- (void)accountRecoveryLinkParsed;
- (void)didFailToFetchFeatureFlags;
- (void)didReceiveFeatureFlags:(NSString *)arg1;
- (void)credentialsDeletedFromKeychain;
- (void)credentialsReadFromKeychain;
- (void)credentialsSavedInKeychain;
- (void)userExperiencedError:(long long)arg1 onScreen:(long long)arg2;
- (void)userExperiencedError:(long long)arg1 onField:(long long)arg2 onScreen:(long long)arg3;
- (void)userInteractedWithField:(long long)arg1 onScreen:(long long)arg2;
- (void)userClickedButton:(long long)arg1 onScreen:(long long)arg2;
@end

