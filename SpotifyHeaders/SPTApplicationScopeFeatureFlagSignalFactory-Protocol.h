//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol SPTApplicationScopeFeatureFlagSignalFactory <NSObject>
+ (long long (^)(id))defaultFeatureFlagSignalMapper;
- (id <SPTFeatureFlagSignal>)signal:(id <SPTFeatureFlagSignal>)arg1 withDefaultState:(long long)arg2;
- (id <SPTFeatureFlagSignal>)signal:(id <SPTFeatureFlagSignal>)arg1 withOverride:(id <SPTFeatureFlagSignal>)arg2;
- (id <SPTFeatureFlagSignal>)signalWithInverse:(id <SPTFeatureFlagSignal>)arg1;
- (id <SPTFeatureFlagSignal>)signalWithAny:(NSArray *)arg1;
- (id <SPTFeatureFlagSignal>)signalWithAll:(NSArray *)arg1;
- (id <SPTFeatureFlagSignal>)userDefaultsSignalWithKey:(NSString *)arg1 mapper:(long long (^)(id))arg2;
- (id <SPTFeatureFlagSignal>)userDefaultsSignalWithKey:(NSString *)arg1;
- (id <SPTWriteableFeatureFlagSignal>)writeableSignal;
- (id <SPTFeatureFlagSignal>)constantSignalWithState:(long long)arg1;
@end
