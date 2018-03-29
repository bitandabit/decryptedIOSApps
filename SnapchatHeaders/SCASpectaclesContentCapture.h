//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASpectaclesContentTransferSessionEventBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCASpectaclesContentCapture : SCASpectaclesContentTransferSessionEventBase <MapSerializable, NSCopying>
{
    NSNumber *multiSnapCount;
    NSNumber *multiSnapIndex;
    NSNumber *ambientLightIntensity;
    NSNumber *sensorBeginTemperature;
    NSNumber *sensorEndTemperature;
    NSNumber *imageSensorCurrentDgc;
    NSNumber *imageSensorCurrentAgc;
    NSNumber *evIndexStart;
    NSNumber *evIndexEnd;
    NSNumber *nordicLastBootSession;
    NSNumber *timeOfCapture;
    NSNumber *bleConnected;
    NSNumber *snapTimeSec;
    NSNumber *hevcMode;
    NSNumber *utcOffsetSeconds;
    long long buttonPressType;
    long long fileType;
    NSString *contentId;
    NSString *multiSnapId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getMultiSnapId;
- (void)setMultiSnapId:(id)arg1;
- (id)getContentId;
- (void)setContentId:(id)arg1;
- (long long)getFileType;
- (void)setFileType:(long long)arg1;
- (long long)getButtonPressType;
- (void)setButtonPressType:(long long)arg1;
- (long long)getUtcOffsetSeconds;
- (void)setUtcOffsetSeconds:(long long)arg1;
- (_Bool)getHevcMode;
- (void)setHevcMode:(_Bool)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (_Bool)getBleConnected;
- (void)setBleConnected:(_Bool)arg1;
- (long long)getTimeOfCapture;
- (void)setTimeOfCapture:(long long)arg1;
- (long long)getNordicLastBootSession;
- (void)setNordicLastBootSession:(long long)arg1;
- (long long)getEvIndexEnd;
- (void)setEvIndexEnd:(long long)arg1;
- (long long)getEvIndexStart;
- (void)setEvIndexStart:(long long)arg1;
- (long long)getImageSensorCurrentAgc;
- (void)setImageSensorCurrentAgc:(long long)arg1;
- (long long)getImageSensorCurrentDgc;
- (void)setImageSensorCurrentDgc:(long long)arg1;
- (long long)getSensorEndTemperature;
- (void)setSensorEndTemperature:(long long)arg1;
- (long long)getSensorBeginTemperature;
- (void)setSensorBeginTemperature:(long long)arg1;
- (long long)getAmbientLightIntensity;
- (void)setAmbientLightIntensity:(long long)arg1;
- (long long)getMultiSnapIndex;
- (void)setMultiSnapIndex:(long long)arg1;
- (long long)getMultiSnapCount;
- (void)setMultiSnapCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

