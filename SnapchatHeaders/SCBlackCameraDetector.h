//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCBlackCameraPreviewDetector, SCBlackCameraRunningDetector, SCBlackCameraSessionBlockDetector, SCBlackCameraViewDetector, SCQueuePerformer;

@interface SCBlackCameraDetector : NSObject
{
    SCQueuePerformer *_queuePerformer;
    SCBlackCameraViewDetector *_cameraViewDetector;
    SCBlackCameraRunningDetector *_sessionRunningDetector;
    SCBlackCameraPreviewDetector *_previewDetector;
    SCBlackCameraSessionBlockDetector *_sessionBlockDetector;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SCBlackCameraSessionBlockDetector *sessionBlockDetector; // @synthesize sessionBlockDetector=_sessionBlockDetector;
@property(retain, nonatomic) SCBlackCameraPreviewDetector *previewDetector; // @synthesize previewDetector=_previewDetector;
@property(retain, nonatomic) SCBlackCameraRunningDetector *sessionRunningDetector; // @synthesize sessionRunningDetector=_sessionRunningDetector;
@property(retain, nonatomic) SCBlackCameraViewDetector *cameraViewDetector; // @synthesize cameraViewDetector=_cameraViewDetector;
@property(retain, nonatomic) SCQueuePerformer *queuePerformer; // @synthesize queuePerformer=_queuePerformer;
- (void).cxx_destruct;
- (void)sessionDidCommitConfiguration;
- (void)sessionWillCommitConfiguration;
- (void)capturePreviewDidBecomeVisible:(_Bool)arg1;
- (void)sessionDidChangeIsRunning:(_Bool)arg1;
- (void)sessionDidCallStopRunning;
- (void)sessionWillCallStopRunning;
- (void)sessionDidCallStartRunning;
- (void)sessionWillCallStartRunning;
- (void)onCameraViewVisible:(_Bool)arg1;
- (id)init;

@end

