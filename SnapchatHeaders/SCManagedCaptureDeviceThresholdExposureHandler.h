//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCManagedCaptureDeviceExposureHandler-Protocol.h"

@class AVCaptureDevice, FBKVOController, NSString, SCExposureState;

@interface SCManagedCaptureDeviceThresholdExposureHandler : NSObject <SCManagedCaptureDeviceExposureHandler>
{
    AVCaptureDevice *_device;
    struct CGPoint _exposurePointOfInterest;
    double _threshold;
    SCExposureState *_exposureState;
    FBKVOController *_kvoController;
}

- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1;
- (void)setStableExposure:(_Bool)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1 fromUser:(_Bool)arg2;
- (struct CGPoint)getExposurePointOfInterest;
- (id)initWithDevice:(id)arg1 pointOfInterest:(struct CGPoint)arg2 threshold:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
