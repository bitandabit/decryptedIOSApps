//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, SPTAccessory;

@protocol SPTAccessoryStateManager <NSObject>
- (void)removeAccessory:(SPTAccessory *)arg1;
- (void)addAccessory:(SPTAccessory *)arg1;
- (void)removeObserver:(id <SPTAccessoryStateObserver>)arg1;
- (void)addObserver:(id <SPTAccessoryStateObserver>)arg1;
- (NSSet *)currentAccessories;
- (void)endObservingAccessories;
- (void)beginObservingAccessories;
@end
