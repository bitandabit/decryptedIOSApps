//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBAmbaError, MLBAppCrashReport, MLBHardFaultReport, MLBSoftDeviceCrashReport, MLBSystemCounters, MLBWatchdogCrashReport, NSString;

@interface MLBCrashReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MLBAmbaError *ambaError; // @dynamic ambaError;
@property(retain, nonatomic) MLBAppCrashReport *appCrashReport; // @dynamic appCrashReport;
@property(retain, nonatomic) MLBHardFaultReport *hardFaultReport; // @dynamic hardFaultReport;
@property(nonatomic) _Bool hasAmbaError; // @dynamic hasAmbaError;
@property(nonatomic) _Bool hasAppCrashReport; // @dynamic hasAppCrashReport;
@property(nonatomic) _Bool hasHardFaultReport; // @dynamic hasHardFaultReport;
@property(nonatomic) _Bool hasLogPayload; // @dynamic hasLogPayload;
@property(nonatomic) _Bool hasSoftDeviceCrashReport; // @dynamic hasSoftDeviceCrashReport;
@property(nonatomic) _Bool hasSystemCounters; // @dynamic hasSystemCounters;
@property(nonatomic) _Bool hasWatchdogCrashReport; // @dynamic hasWatchdogCrashReport;
@property(copy, nonatomic) NSString *logPayload; // @dynamic logPayload;
@property(retain, nonatomic) MLBSoftDeviceCrashReport *softDeviceCrashReport; // @dynamic softDeviceCrashReport;
@property(retain, nonatomic) MLBSystemCounters *systemCounters; // @dynamic systemCounters;
@property(retain, nonatomic) MLBWatchdogCrashReport *watchdogCrashReport; // @dynamic watchdogCrashReport;

@end

