//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCCrashLogger : NSObject
{
}

+ (_Bool)updateCrashLoopCountAndReportIfNecessary;
+ (_Bool)didCrashOnLastLoad;
+ (void)leaveBreadcrumb:(id)arg1;
+ (void)logHandledException:(id)arg1;
+ (void)startServicesWithCrashDelegate:(id)arg1;

@end

