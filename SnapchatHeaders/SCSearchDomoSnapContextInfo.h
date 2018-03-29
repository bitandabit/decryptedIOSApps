//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSearchGeoLocation, SCSearchGeoPolygon;

@interface SCSearchDomoSnapContextInfo : NSObject <NSCopying>
{
    SCSearchGeoLocation *_location;
    SCSearchGeoPolygon *_placePolygon;
    NSString *_placeType;
    NSString *_taskTitle;
}

@property(readonly, copy, nonatomic) NSString *taskTitle; // @synthesize taskTitle=_taskTitle;
@property(readonly, copy, nonatomic) NSString *placeType; // @synthesize placeType=_placeType;
@property(readonly, copy, nonatomic) SCSearchGeoPolygon *placePolygon; // @synthesize placePolygon=_placePolygon;
@property(readonly, copy, nonatomic) SCSearchGeoLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(id)arg1 placePolygon:(id)arg2 placeType:(id)arg3 taskTitle:(id)arg4;

@end

