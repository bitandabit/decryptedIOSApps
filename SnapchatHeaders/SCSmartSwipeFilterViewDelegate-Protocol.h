//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCAltitudeFilterView, SCSmartSwipeFilterView, SCVenueFilterSelector, SCVenueFilterView, SCWeatherFilterView, UILongPressGestureRecognizer;

@protocol SCSmartSwipeFilterViewDelegate <NSObject>
- (void)swipeViewWillClearAllStacked:(SCSmartSwipeFilterView *)arg1;
- (void)swipeFilterView:(SCSmartSwipeFilterView *)arg1 endedSwipeSessionNumber:(unsigned long long)arg2;
- (void)swipeViewDidEndDoubleSwiping:(SCSmartSwipeFilterView *)arg1;
- (void)swipeViewWillStartDoubleSwiping:(SCSmartSwipeFilterView *)arg1;
- (void)swipeViewDidEndDecelerating:(SCSmartSwipeFilterView *)arg1;
- (void)swipeFilterViewDidScroll:(SCSmartSwipeFilterView *)arg1 isRecoveryMode:(_Bool)arg2;
- (void)swipeFilterView:(SCSmartSwipeFilterView *)arg1 longPressDidCancel:(UILongPressGestureRecognizer *)arg2;
- (void)venueFilterView:(SCVenueFilterView *)arg1 didReportWithVenueSelector:(SCVenueFilterSelector *)arg2;
- (void)venueFilterViewDidUpdate;
- (void)weatherViewDidUpdate:(SCWeatherFilterView *)arg1;
- (void)altitudeViewDidUpdate:(SCAltitudeFilterView *)arg1;
- (void)geoFilterViewNeedsUpdate:(NSString *)arg1;
@end
