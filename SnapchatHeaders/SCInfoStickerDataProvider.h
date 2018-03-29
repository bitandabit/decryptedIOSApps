//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SCUserSession;

@interface SCInfoStickerDataProvider : NSObject
{
    NSMutableDictionary *_storedDictionary;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (_Bool)updateAltitudeSticker:(id)arg1;
- (_Bool)updateWeatherSticker:(id)arg1;
- (_Bool)updateSpeedSticker:(id)arg1;
- (id)generateInfoStickers;
- (id)getTimeStamp;
- (unsigned long long)getBatteryStatus;
- (id)getAltitude;
- (id)getSpeed;
- (id)getWeather;
- (_Bool)_shouldShowSpeedSticker:(id)arg1;
- (_Bool)_shouldDisplayAltitude:(id)arg1;
- (id)initWithFilterDataProvider:(id)arg1 includeBatterySticker:(_Bool)arg2 userSession:(id)arg3;
- (id)initWithWeather:(id)arg1 speed:(id)arg2 altitude:(id)arg3 timestamp:(id)arg4 batteryStatus:(unsigned long long)arg5;

@end
