//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTRunningTempoStepper <NSObject>
@property(nonatomic) __weak id <SPTRunningTempoStepperDelegate> delegate;
@property(nonatomic) double repeatValueChangeInterval;
@property(nonatomic) double repeatStartDelay;
@property(nonatomic) double triggerDelay;
@property(nonatomic) _Bool manualSetupStyleEnabled;
@property(nonatomic) _Bool detectionModeEnabled;
@property(nonatomic) unsigned long long maximumValue;
@property(nonatomic) unsigned long long minimumValue;
@property(nonatomic) unsigned long long tempo;
@end

