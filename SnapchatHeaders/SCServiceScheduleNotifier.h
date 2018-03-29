//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCServiceNotifier-Protocol.h"

@class NSString;

@interface SCServiceScheduleNotifier : NSObject <SCServiceNotifier>
{
    double _scheduledTime;
}

+ (id)scheduleAfterSeconds:(double)arg1;
- (double)waitUntil:(double)arg1;
- (id)initWithScheduledTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

