//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CrashlyticsDelegate-Protocol.h"
#import "SCCrashLogger-Protocol.h"

@class NSString;

@interface SCCrashlyticsCrashLogger : NSObject <CrashlyticsDelegate, SCCrashLogger>
{
    _Bool _didCrashOnLastLoad;
}

- (void)crashlyticsDidDetectReportForLastExecution:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)didCrashOnLastLoad;
- (void)leaveBreadcrumb:(id)arg1;
- (void)logHandledException:(id)arg1;
- (_Bool)updateCrashLoopCountAndReportIfNecessary;
- (void)startServicesWithCrashDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

