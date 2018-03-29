//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCFeatureController-Protocol.h"

@class NSMapTable, NSString, SCFeatureHandsFreeView, SCLongPressGestureRecognizer;
@protocol SCFeature;

@interface SCFeatureHandsFreeController : NSObject <SCFeatureController>
{
    id <SCFeature> _feature;
    SCLongPressGestureRecognizer *_longPressGestureRecognizer;
    SCFeatureHandsFreeView *_view;
    NSMapTable *_previousTouchPositions;
}

@property(retain, nonatomic) NSMapTable *previousTouchPositions; // @synthesize previousTouchPositions=_previousTouchPositions;
@property(retain, nonatomic) SCFeatureHandsFreeView *view; // @synthesize view=_view;
@property(readonly, nonatomic) SCLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) __weak id <SCFeature> feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (void)controlDidChange:(id)arg1;
- (void)forwardGesture:(id)arg1;
- (void)configureWithView:(id)arg1;
- (_Bool)shouldDisplayTooltip;
- (void)dealloc;
- (id)initWithCameraOverlay:(id)arg1 featureSettingsManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
