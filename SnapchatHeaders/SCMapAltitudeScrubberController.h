//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, NSTimer, SCMapAltitudeScrubberView, SCMapView, UIPanGestureRecognizer;

@interface SCMapAltitudeScrubberController : NSObject <UIGestureRecognizerDelegate>
{
    SCMapAltitudeScrubberView *_scrubberView;
    SCMapView *_mapView;
    double _lastZoomLevel;
    _Bool _scrubberIsVisible;
    NSTimer *_scrubberHideTimer;
    struct CLLocationCoordinate2D _startingScrubCoordinate;
    double _percentageAdjustment;
    _Bool _manualPercentage;
    UIPanGestureRecognizer *_gestureRecognizer;
}

@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (void)_onAltitudeGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)scrubberView;
- (_Bool)isScrubbing;
- (void)_hideScrubberTick;
- (void)updateZoomLevelShouldDebounceHidden:(_Bool)arg1;
- (void)updateZoomLevel;
- (void)installInMapView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

