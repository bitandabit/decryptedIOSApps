//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBBackgroundUpdateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long elapsedTimeMillis; // @dynamic elapsedTimeMillis;
@property(nonatomic) _Bool hasElapsedTimeMillis; // @dynamic hasElapsedTimeMillis;
@property(nonatomic) _Bool hasIsBackgroundStateValid; // @dynamic hasIsBackgroundStateValid;
@property(nonatomic) _Bool hasLastFailureReason; // @dynamic hasLastFailureReason;
@property(nonatomic) _Bool hasTargetHash; // @dynamic hasTargetHash;
@property(nonatomic) _Bool hasTargetVersionTag; // @dynamic hasTargetVersionTag;
@property(nonatomic) _Bool hasTimeUntilWindowMillis; // @dynamic hasTimeUntilWindowMillis;
@property(nonatomic) _Bool hasWindowLengthMillis; // @dynamic hasWindowLengthMillis;
@property(nonatomic) _Bool isBackgroundStateValid; // @dynamic isBackgroundStateValid;
@property(nonatomic) int lastFailureReason; // @dynamic lastFailureReason;
@property(copy, nonatomic) NSString *targetHash; // @dynamic targetHash;
@property(copy, nonatomic) NSString *targetVersionTag; // @dynamic targetVersionTag;
@property(nonatomic) unsigned int timeUntilWindowMillis; // @dynamic timeUntilWindowMillis;
@property(nonatomic) unsigned int windowLengthMillis; // @dynamic windowLengthMillis;

@end

