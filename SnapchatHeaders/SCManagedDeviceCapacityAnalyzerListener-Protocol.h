//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCManagedDeviceCapacityAnalyzer;

@protocol SCManagedDeviceCapacityAnalyzerListener <NSObject>

@optional
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeLightingCondition:(long long)arg2;
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeBrightness:(float)arg2;
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeAdjustingFocus:(_Bool)arg2;
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeAdjustingExposure:(_Bool)arg2;
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeLowLightCondition:(_Bool)arg2;
@end

