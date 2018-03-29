//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSLocale, NSTimeZone;

@interface SCTimestampMetadata : NSObject
{
    _Bool _hasAmPmModifier;
    _Bool _isAm;
    long long _hour;
    long long _minute;
    long long _hourToDisplay;
    long long _day;
    long long _month;
    long long _year;
    NSDate *_date;
    NSLocale *_locale;
    NSTimeZone *_timeZone;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long year; // @synthesize year=_year;
@property(readonly, nonatomic) long long month; // @synthesize month=_month;
@property(readonly, nonatomic) long long day; // @synthesize day=_day;
@property(readonly, nonatomic) long long minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) long long hour; // @synthesize hour=_hour;
@property(readonly, nonatomic) long long hourToDisplay; // @synthesize hourToDisplay=_hourToDisplay;
@property(readonly, nonatomic) _Bool isAm; // @synthesize isAm=_isAm;
@property(readonly, nonatomic) _Bool hasAmPmModifier; // @synthesize hasAmPmModifier=_hasAmPmModifier;
- (void).cxx_destruct;
- (id)initWithDate:(id)arg1 locale:(id)arg2 timeZone:(id)arg3;

@end

