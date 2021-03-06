//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ARSession, AVCaptureSession, AVCaptureVideoPreviewLayer, FBKVOController, LSATrackingComponentHandler, NSMutableDictionary, NSMutableSet, NSTimer, SCARImageCapturer, SCBlackCameraNoOutputDetector, SCCaptureSessionFixer, SCManagedCaptureDevice, SCManagedCaptureDeviceDefaultZoomHandler, SCManagedCapturerListenerAnnouncer, SCManagedCapturerState, SCManagedDeviceAdjustingExposureHandler, SCManagedDeviceCapacityAnalyzer, SCManagedDeviceCapacityAnalyzerHandler, SCManagedDroppedFramesReporter, SCManagedFrontFlashController, SCManagedStillImageCapturer, SCManagedStillImageCapturerHandler, SCManagedVideoCapturer, SCManagedVideoCapturerHandler, SCManagedVideoFrameSampler, SCManagedVideoScanner, SCManagedVideoStreamReporter, SCQueuePerformer, SCSingleFrameStreamCapturer, SCVideoPreviewGLViewManager;
@protocol OS_dispatch_semaphore, SCLensProcessingCore, SCManagedSampleBufferDisplayController, SCManagedVideoDataSource;

@interface SCCaptureResource : NSObject
{
    FBKVOController *_previewHiddenKVO;
    _Bool _videoRecording;
    _Bool _appInBackground;
    _Bool _stillImageCapturing;
    _Bool _allowsZoom;
    _Bool _notificationRegistered;
    _Bool _isRecreateSessionFixScheduled;
    unsigned long long _status;
    SCManagedCapturerState *_state;
    SCManagedCaptureDevice *_device;
    id <SCLensProcessingCore> _lensProcessingCore;
    ARSession *_arSession;
    SCARImageCapturer *_arImageCapturer;
    AVCaptureSession *_avSession;
    id <SCManagedVideoDataSource> _videoDataSource;
    SCManagedDeviceCapacityAnalyzer *_deviceCapacityAnalyzer;
    SCManagedVideoScanner *_videoScanner;
    SCManagedCapturerListenerAnnouncer *_announcer;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    SCVideoPreviewGLViewManager *_videoPreviewGLViewManager;
    SCManagedStillImageCapturer *_stillImageCapturer;
    SCManagedVideoCapturer *_videoCapturer;
    SCQueuePerformer *_queuePerformer;
    SCManagedVideoFrameSampler *_videoFrameSampler;
    SCManagedDroppedFramesReporter *_droppedFramesReporter;
    SCManagedVideoStreamReporter *_videoStreamReporter;
    SCManagedFrontFlashController *_frontFlashController;
    SCManagedVideoCapturerHandler *_videoCapturerHandler;
    SCManagedStillImageCapturerHandler *_stillImageCapturerHandler;
    SCManagedDeviceCapacityAnalyzerHandler *_deviceCapacityAnalyzerHandler;
    SCManagedDeviceAdjustingExposureHandler *_deviceAdjustingExposureHandler;
    SCManagedCaptureDeviceDefaultZoomHandler *_deviceZoomHandler;
    FBKVOController *_kvoController;
    LSATrackingComponentHandler *_lsaTrackingComponentHandler;
    NSObject<OS_dispatch_semaphore> *_arSesssionShutdownSemaphore;
    SEL _completeARSessionShutdown;
    SEL _handleAVSessionStatusChange;
    long long _numRetriesFixAVCaptureSessionWithCurrentSession;
    unsigned long long _streamingSequence;
    NSTimer *_livenessTimer;
    NSMutableSet *_tokenSet;
    SCSingleFrameStreamCapturer *_frameCap;
    id <SCManagedSampleBufferDisplayController> _sampleBufferDisplayController;
    unsigned long long _numRetriesFixInconsistencyWithCurrentSession;
    NSMutableDictionary *_debugInfoDict;
    SEL _subjectAreaDidChange;
    SEL _sessionRuntimeError;
    SEL _livenessConsistency;
    double _lastFixSessionTimestamp;
    double _lastSessionRuntimeErrorTime;
    SCBlackCameraNoOutputDetector *_blackCameraNoOutputDetector;
    SCCaptureSessionFixer *_captureSessionFixer;
}

@property(retain, nonatomic) SCCaptureSessionFixer *captureSessionFixer; // @synthesize captureSessionFixer=_captureSessionFixer;
@property(retain, nonatomic) SCBlackCameraNoOutputDetector *blackCameraNoOutputDetector; // @synthesize blackCameraNoOutputDetector=_blackCameraNoOutputDetector;
@property(nonatomic) _Bool isRecreateSessionFixScheduled; // @synthesize isRecreateSessionFixScheduled=_isRecreateSessionFixScheduled;
@property(nonatomic) double lastSessionRuntimeErrorTime; // @synthesize lastSessionRuntimeErrorTime=_lastSessionRuntimeErrorTime;
@property(nonatomic) double lastFixSessionTimestamp; // @synthesize lastFixSessionTimestamp=_lastFixSessionTimestamp;
@property(nonatomic) SEL livenessConsistency; // @synthesize livenessConsistency=_livenessConsistency;
@property(nonatomic) SEL sessionRuntimeError; // @synthesize sessionRuntimeError=_sessionRuntimeError;
@property(nonatomic) SEL subjectAreaDidChange; // @synthesize subjectAreaDidChange=_subjectAreaDidChange;
@property(nonatomic) _Bool notificationRegistered; // @synthesize notificationRegistered=_notificationRegistered;
@property(retain, nonatomic) NSMutableDictionary *debugInfoDict; // @synthesize debugInfoDict=_debugInfoDict;
@property(nonatomic) unsigned long long numRetriesFixInconsistencyWithCurrentSession; // @synthesize numRetriesFixInconsistencyWithCurrentSession=_numRetriesFixInconsistencyWithCurrentSession;
@property(nonatomic) _Bool allowsZoom; // @synthesize allowsZoom=_allowsZoom;
@property(retain, nonatomic) id <SCManagedSampleBufferDisplayController> sampleBufferDisplayController; // @synthesize sampleBufferDisplayController=_sampleBufferDisplayController;
@property(retain, nonatomic) SCSingleFrameStreamCapturer *frameCap; // @synthesize frameCap=_frameCap;
@property(retain, nonatomic) NSMutableSet *tokenSet; // @synthesize tokenSet=_tokenSet;
@property(retain, nonatomic) NSTimer *livenessTimer; // @synthesize livenessTimer=_livenessTimer;
@property(nonatomic) _Bool stillImageCapturing; // @synthesize stillImageCapturing=_stillImageCapturing;
@property(nonatomic) unsigned long long streamingSequence; // @synthesize streamingSequence=_streamingSequence;
@property(nonatomic) _Bool appInBackground; // @synthesize appInBackground=_appInBackground;
@property(nonatomic) long long numRetriesFixAVCaptureSessionWithCurrentSession; // @synthesize numRetriesFixAVCaptureSessionWithCurrentSession=_numRetriesFixAVCaptureSessionWithCurrentSession;
@property(nonatomic) _Bool videoRecording; // @synthesize videoRecording=_videoRecording;
@property(nonatomic) SEL handleAVSessionStatusChange; // @synthesize handleAVSessionStatusChange=_handleAVSessionStatusChange;
@property(nonatomic) SEL completeARSessionShutdown; // @synthesize completeARSessionShutdown=_completeARSessionShutdown;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *arSesssionShutdownSemaphore; // @synthesize arSesssionShutdownSemaphore=_arSesssionShutdownSemaphore;
@property(retain, nonatomic) LSATrackingComponentHandler *lsaTrackingComponentHandler; // @synthesize lsaTrackingComponentHandler=_lsaTrackingComponentHandler;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) SCManagedCaptureDeviceDefaultZoomHandler *deviceZoomHandler; // @synthesize deviceZoomHandler=_deviceZoomHandler;
@property(retain, nonatomic) SCManagedDeviceAdjustingExposureHandler *deviceAdjustingExposureHandler; // @synthesize deviceAdjustingExposureHandler=_deviceAdjustingExposureHandler;
@property(retain, nonatomic) SCManagedDeviceCapacityAnalyzerHandler *deviceCapacityAnalyzerHandler; // @synthesize deviceCapacityAnalyzerHandler=_deviceCapacityAnalyzerHandler;
@property(retain, nonatomic) SCManagedStillImageCapturerHandler *stillImageCapturerHandler; // @synthesize stillImageCapturerHandler=_stillImageCapturerHandler;
@property(retain, nonatomic) SCManagedVideoCapturerHandler *videoCapturerHandler; // @synthesize videoCapturerHandler=_videoCapturerHandler;
@property(retain, nonatomic) SCManagedFrontFlashController *frontFlashController; // @synthesize frontFlashController=_frontFlashController;
@property(retain, nonatomic) SCManagedVideoStreamReporter *videoStreamReporter; // @synthesize videoStreamReporter=_videoStreamReporter;
@property(retain, nonatomic) SCManagedDroppedFramesReporter *droppedFramesReporter; // @synthesize droppedFramesReporter=_droppedFramesReporter;
@property(retain, nonatomic) SCManagedVideoFrameSampler *videoFrameSampler; // @synthesize videoFrameSampler=_videoFrameSampler;
@property(retain, nonatomic) SCQueuePerformer *queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property(retain, nonatomic) SCManagedVideoCapturer *videoCapturer; // @synthesize videoCapturer=_videoCapturer;
@property(retain, nonatomic) SCManagedStillImageCapturer *stillImageCapturer; // @synthesize stillImageCapturer=_stillImageCapturer;
@property(retain, nonatomic) SCVideoPreviewGLViewManager *videoPreviewGLViewManager; // @synthesize videoPreviewGLViewManager=_videoPreviewGLViewManager;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
@property(retain, nonatomic) SCManagedCapturerListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) SCManagedVideoScanner *videoScanner; // @synthesize videoScanner=_videoScanner;
@property(retain, nonatomic) SCManagedDeviceCapacityAnalyzer *deviceCapacityAnalyzer; // @synthesize deviceCapacityAnalyzer=_deviceCapacityAnalyzer;
@property(retain, nonatomic) id <SCManagedVideoDataSource> videoDataSource; // @synthesize videoDataSource=_videoDataSource;
@property(retain, nonatomic) AVCaptureSession *avSession; // @synthesize avSession=_avSession;
@property(retain, nonatomic) SCARImageCapturer *arImageCapturer; // @synthesize arImageCapturer=_arImageCapturer;
@property(retain, nonatomic) ARSession *arSession; // @synthesize arSession=_arSession;
@property(retain, nonatomic) id <SCLensProcessingCore> lensProcessingCore; // @synthesize lensProcessingCore=_lensProcessingCore;
@property(retain, nonatomic) SCManagedCaptureDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) SCManagedCapturerState *state; // @synthesize state=_state;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

