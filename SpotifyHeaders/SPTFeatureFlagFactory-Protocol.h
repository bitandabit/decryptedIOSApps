//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTApplicationScopeFeatureFlagSignalFactory.h"

@class NSString;

@protocol SPTFeatureFlagFactory <SPTApplicationScopeFeatureFlagSignalFactory>
- (id <SPTFeatureFlagSignal>)productStateSignalWithKey:(NSString *)arg1 mapper:(long long (^)(id))arg2;
- (id <SPTFeatureFlagSignal>)productStateSignalWithKey:(NSString *)arg1;
- (id <SPTFeatureFlagSignal>)abbaSignalWithKey:(NSString *)arg1 mapper:(long long (^)(id))arg2;
- (id <SPTFeatureFlagSignal>)abbaSignalWithKey:(NSString *)arg1;
- (id <SPTFeatureFlagSignal>)localSettingsSignalWithKey:(NSString *)arg1 mapper:(long long (^)(id))arg2;
- (id <SPTFeatureFlagSignal>)localSettingsSignalWithKey:(NSString *)arg1;
- (id <SPTMultipleChoiceFeatureFlagBuilder>)createMultipleChoiceFeatureFlagBuilder;
- (id <SPTFeatureFlagBuilder>)createFeatureFlagBuilder;
@end
