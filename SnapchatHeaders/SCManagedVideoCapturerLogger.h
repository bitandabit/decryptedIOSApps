//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SCManagedVideoCapturerLogger : NSObject
{
    NSMutableDictionary *_startingStepsDelayTime;
    double _beginStartTime;
    double _lastCheckpointTime;
    double _startedTime;
}

- (void).cxx_destruct;
- (void)logEventIfStartingTooSlow;
- (void)endLoggingForStarting;
- (void)logStartingStep:(id)arg1;
- (void)prepareForStartingLog;
- (id)init;

@end
