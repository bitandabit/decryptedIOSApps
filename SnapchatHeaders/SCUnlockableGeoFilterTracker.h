//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnlockableTracker.h"

@interface SCUnlockableGeoFilterTracker : SCUnlockableTracker
{
}

+ (id)_buildFilterImpressionTrackForInteraction:(id)arg1 tracker:(id)arg2;
- (_Bool)_canTrack:(id)arg1 forType:(long long)arg2;
- (void)_updateInteraction:(id)arg1 existingInteraction:(id)arg2;
- (void)_fireFilterCarouselInteraction;
- (void)fireTrack;

@end

