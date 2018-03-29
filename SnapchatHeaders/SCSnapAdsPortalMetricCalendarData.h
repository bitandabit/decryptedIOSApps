//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface SCSnapAdsPortalMetricCalendarData : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_firstDisplayedDate;
    NSDate *_lastDisplayedDate;
    unsigned long long _calendarMode;
}

@property(nonatomic) unsigned long long calendarMode; // @synthesize calendarMode=_calendarMode;
@property(retain, nonatomic) NSDate *lastDisplayedDate; // @synthesize lastDisplayedDate=_lastDisplayedDate;
@property(retain, nonatomic) NSDate *firstDisplayedDate; // @synthesize firstDisplayedDate=_firstDisplayedDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (unsigned long long)_getDayIncrement:(unsigned long long)arg1 updateMode:(unsigned long long)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)updateDisplayDatesWithCalendarMode:(unsigned long long)arg1 lastDisplayedDate:(id)arg2;
- (_Bool)updateDisplayDatesWithMetricDataUpdateMode:(unsigned long long)arg1;
- (void)reset;
- (void)resetWithMetricCalendarData:(id)arg1;
- (id)init;

@end

