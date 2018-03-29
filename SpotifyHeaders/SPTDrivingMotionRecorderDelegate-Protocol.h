//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTDrivingMotionRecorder, SPTDrivingMotionRecorderMeasurement, SPTDrivingMotionRecorderResult;

@protocol SPTDrivingMotionRecorderDelegate <NSObject>

@optional
- (void)motionRecorder:(SPTDrivingMotionRecorder *)arg1 didFinishRecordingWithResult:(SPTDrivingMotionRecorderResult *)arg2;
- (void)motionRecorder:(SPTDrivingMotionRecorder *)arg1 didReceiveGyroMeasurement:(SPTDrivingMotionRecorderMeasurement *)arg2 error:(NSError *)arg3;
- (void)motionRecorder:(SPTDrivingMotionRecorder *)arg1 didReceiveAccelerometerMeasurement:(SPTDrivingMotionRecorderMeasurement *)arg2 error:(NSError *)arg3;
@end

