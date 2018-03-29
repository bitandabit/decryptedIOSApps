//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAAdsBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAAdUserLocation : SCAAdsBase <MapSerializable, NSCopying>
{
    NSNumber *latitude;
    NSNumber *longitude;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (double)getLongitude;
- (void)setLongitude:(double)arg1;
- (double)getLatitude;
- (void)setLatitude:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

