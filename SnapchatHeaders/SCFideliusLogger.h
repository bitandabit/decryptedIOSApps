//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SCFideliusLogger : NSObject
{
    NSMutableArray *_fideliusEvents;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)flushOldEvents;
- (void)flushAllEvents;
- (void)writeToFile;
- (id)serializedEventsString;
- (id)filePath;
- (void)addToFileEvent:(id)arg1 parameters:(id)arg2;
- (void)logUnsampledEventWithDiskInfo:(id)arg1 file:(id)arg2 errorCode:(long long)arg3;
- (void)logUnsampledEventWithDiskInfo:(id)arg1 file:(id)arg2;
- (void)logDatabaseSuccess:(id)arg1 type:(id)arg2;
- (void)logDatabaseError:(id)arg1 type:(id)arg2 code:(int)arg3 message:(id)arg4 statement:(id)arg5 path:(id)arg6;
- (void)cancelLogTimedEvent:(id)arg1 uniqueId:(id)arg2;
- (void)logUnsampledTimedEventEnd:(id)arg1 uniqueId:(id)arg2 parameters:(id)arg3;
- (void)logSampledTimedEventEnd:(id)arg1 uniqueId:(id)arg2 parameters:(id)arg3 samplePercentage:(double)arg4;
- (void)logSampledTimedEventEnd:(id)arg1 uniqueId:(id)arg2 parameters:(id)arg3;
- (void)logSampledTimedEventStart:(id)arg1 uniqueId:(id)arg2 isUniqueEvent:(_Bool)arg3;
- (void)logUnsampledTimedEventStart:(id)arg1 uniqueId:(id)arg2 isUniqueEvent:(_Bool)arg3;
- (void)logUnsampledEvent:(id)arg1 parameters:(id)arg2;
- (void)logSampledEvent:(id)arg1 parameters:(id)arg2 samplePercentage:(double)arg3;
- (void)logSampledEvent:(id)arg1 parameters:(id)arg2;
- (void)logSampledEvent:(id)arg1;
- (void)displayToastForEvent:(id)arg1 params:(id)arg2;
- (id)init;

@end
