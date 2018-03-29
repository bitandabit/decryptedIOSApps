//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLAnnotationView.h"

@class CALayer, MGLCoordinateFormatter, MGLMapView, MGLUserLocation;

@interface MGLUserLocationAnnotationView : MGLAnnotationView
{
    MGLCoordinateFormatter *_accessibilityCoordinateFormatter;
    MGLMapView *_mapView;
    MGLUserLocation *_userLocation;
    CALayer *_hitTestLayer;
}

@property(nonatomic) __weak CALayer *hitTestLayer; // @synthesize hitTestLayer=_hitTestLayer;
@property(nonatomic) __weak MGLUserLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityPath;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)update;
- (id)initWithFrame:(struct CGRect)arg1;

@end
