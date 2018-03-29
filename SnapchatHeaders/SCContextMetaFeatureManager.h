//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCalendar, NSDateFormatter, NSMutableDictionary;

@interface SCContextMetaFeatureManager : NSObject
{
    NSDateFormatter *_dateFormatter;
    NSMutableDictionary *_stickerTags;
    _Bool _updating;
    NSCalendar *_gregorian;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_locationServicesDataStoreDidUpdate:(id)arg1;
- (id)_updateWeatherTagsFromWeather:(id)arg1;
- (id)_updateBirthdayTagsFromDate:(id)arg1;
- (id)_updateHolidayTagsFromDate:(id)arg1;
- (id)_updateDateTagsFromDate:(id)arg1;
- (id)_updateTimeTagsFromDate:(id)arg1;
- (void)_stopUpdatingStickerTags;
- (void)_startUpdatingStickerTags;
- (id)stickerTags;
- (void)dealloc;
- (id)init;

@end

