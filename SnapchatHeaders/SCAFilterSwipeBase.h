//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASwipeBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCAFilterSwipeBase : SCASwipeBase <MapSerializable, NSCopying>
{
    NSNumber *tapCount;
    long long swipeDirection;
    NSString *carouselConfigId;
    NSString *carouselVersionId;
    NSDate *snapTakenTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getSnapTakenTs;
- (void)setSnapTakenTs:(id)arg1;
- (id)getCarouselVersionId;
- (void)setCarouselVersionId:(id)arg1;
- (id)getCarouselConfigId;
- (void)setCarouselConfigId:(id)arg1;
- (long long)getSwipeDirection;
- (void)setSwipeDirection:(long long)arg1;
- (long long)getTapCount;
- (void)setTapCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
