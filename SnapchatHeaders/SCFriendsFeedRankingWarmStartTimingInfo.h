//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSNumber;

@interface SCFriendsFeedRankingWarmStartTimingInfo : NSObject <NSCopying>
{
    double _lastBackgroundTimeIntervel;
    NSDate *_lastFullScoreTime;
    NSNumber *_warmStartBackgroundTimeThresholdInSecs;
    NSNumber *_warmStartLastFullScoreTimeThresholdInSecs;
}

@property(readonly, copy, nonatomic) NSNumber *warmStartLastFullScoreTimeThresholdInSecs; // @synthesize warmStartLastFullScoreTimeThresholdInSecs=_warmStartLastFullScoreTimeThresholdInSecs;
@property(readonly, copy, nonatomic) NSNumber *warmStartBackgroundTimeThresholdInSecs; // @synthesize warmStartBackgroundTimeThresholdInSecs=_warmStartBackgroundTimeThresholdInSecs;
@property(readonly, copy, nonatomic) NSDate *lastFullScoreTime; // @synthesize lastFullScoreTime=_lastFullScoreTime;
@property(readonly, nonatomic) double lastBackgroundTimeIntervel; // @synthesize lastBackgroundTimeIntervel=_lastBackgroundTimeIntervel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLastBackgroundTimeIntervel:(double)arg1 lastFullScoreTime:(id)arg2 warmStartBackgroundTimeThresholdInSecs:(id)arg3 warmStartLastFullScoreTimeThresholdInSecs:(id)arg4;

@end
