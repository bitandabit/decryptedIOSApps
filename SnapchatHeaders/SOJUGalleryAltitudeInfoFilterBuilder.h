//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SOJUGalleryAltitudeInfoFilterBuilder : NSObject
{
    NSNumber *_altitude;
    NSString *_type;
    NSString *_units;
}

+ (id)withJUGalleryAltitudeInfoFilter:(id)arg1;
- (void).cxx_destruct;
- (id)setUnits:(id)arg1;
- (id)setType:(id)arg1;
- (id)setAltitude:(id)arg1;
- (id)build;
- (id)setUnitsEnum:(long long)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setAltitudeValue:(double)arg1;

@end

