//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate;

@interface SCUnlockableSensitivityController : NSObject <NSCoding>
{
    NSDate *_lastLowSensitivityRequest;
    NSDate *_lastLowSensitivityResponse;
}

- (void).cxx_destruct;
- (id)_touchTimestamp:(long long)arg1;
- (id)_dateForTimestamp:(long long)arg1;
- (_Bool)_shouldRequestLowSensitivityWithExpiry:(double)arg1;
- (id)fetchAndUpdateSensitivitySettings;
- (void)markLowSensitivityResponseReceived;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
