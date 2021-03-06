//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"

@class NSString;

@interface SPTExplicitContentTestManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _explicitContentFilterAvailableExistingUser;
    _Bool _explicitContentFilterAvailableNewUser;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _explicitContentFilterNewUserEnabledSignal;
    id <SPTFeatureFlagSignal> _explicitContentFilterExistingUserEnabledSignal;
}

@property(nonatomic, getter=isExplicitContentFilterAvailableNewUser) _Bool explicitContentFilterAvailableNewUser; // @synthesize explicitContentFilterAvailableNewUser=_explicitContentFilterAvailableNewUser;
@property(nonatomic, getter=isExplicitContentFilterAvailableExistingUser) _Bool explicitContentFilterAvailableExistingUser; // @synthesize explicitContentFilterAvailableExistingUser=_explicitContentFilterAvailableExistingUser;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> explicitContentFilterExistingUserEnabledSignal; // @synthesize explicitContentFilterExistingUserEnabledSignal=_explicitContentFilterExistingUserEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> explicitContentFilterNewUserEnabledSignal; // @synthesize explicitContentFilterNewUserEnabledSignal=_explicitContentFilterNewUserEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupFlags;
@property(readonly, nonatomic, getter=isExplicitContentFilterAvailable) _Bool explicitContentFilterAvailable;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

