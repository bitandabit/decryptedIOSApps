//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, FBKVOController, NSError;
@protocol SCManagedCaptureDeviceExposureHandler, SCManagedDeviceAdjustingExposureDelegate;

@interface SCManagedCaptureDevice : NSObject
{
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureDeviceFormat *_defaultFormat;
    AVCaptureDeviceFormat *_nightFormat;
    AVCaptureDeviceFormat *_liveVideoStreamingFormat;
    unsigned long long _devicePosition;
    id <SCManagedCaptureDeviceExposureHandler> _exposureHandler;
    struct CGPoint _focusPointOfInterest;
    _Bool _continuousAutofocus;
    _Bool _focusLock;
    FBKVOController *_observeController;
    NSError *_error;
    _Bool _softwareZoom;
    _Bool _isConnected;
    _Bool _flashActive;
    _Bool _torchActive;
    _Bool _liveVideoStreamingActive;
    float _zoomFactor;
    _Bool _isNightModeActive;
    _Bool _captureDepthData;
    float _fieldOfView;
    id <SCManagedDeviceAdjustingExposureDelegate> _adjustingExposureDelegate;
}

+ (struct CGSize)nightModeActiveFormatResolution;
+ (struct CGSize)defaultActiveFormatResolution;
+ (_Bool)isNightModeSupported;
+ (_Bool)isMixCaptureSupported;
+ (_Bool)is1080pSupported;
+ (id)deviceWithPosition:(unsigned long long)arg1;
+ (id)dualCamera;
+ (id)back;
+ (id)front;
@property(nonatomic) float fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property(nonatomic) __weak id <SCManagedDeviceAdjustingExposureDelegate> adjustingExposureDelegate; // @synthesize adjustingExposureDelegate=_adjustingExposureDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_adjustingExposureChanged:(id)arg1;
- (void)_setAsExposureListenerForDevice:(id)arg1;
- (id)activeFormat;
- (void)_enableSubjectAreaChangeMonitoring;
- (_Bool)isAvailable;
- (_Bool)liveVideoStreamingActive;
- (_Bool)isNightModeActive;
- (float)zoomFactor;
- (_Bool)torchActive;
- (_Bool)flashActive;
- (_Bool)isConnected;
- (_Bool)softwareZoom;
- (id)error;
- (id)deviceInput;
- (id)device;
- (struct CGPoint)convertViewCoordinates:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2 videoGravity:(id)arg3;
- (_Bool)isTorchSupported;
- (_Bool)isFlashSupported;
- (void)setTorchActive:(_Bool)arg1;
- (void)setFlashActive:(_Bool)arg1;
- (void)_setSmoothFocus:(_Bool)arg1;
- (void)_setFocusLock:(_Bool)arg1;
- (void)setRecording:(_Bool)arg1;
- (void)continuousAutofocus;
- (void)setAutofocusPointOfInterest:(struct CGPoint)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1 fromUser:(_Bool)arg2;
- (void)_updateFieldOfView;
- (void)setZoomFactor:(float)arg1;
- (void)_updateDeviceFrameRate;
- (void)_updateActiveFormatWithSession:(id)arg1 fallbackPreset:(id)arg2;
- (void)updateActiveFormatWithSession:(id)arg1;
- (void)setCaptureDepthData:(_Bool)arg1 session:(id)arg2;
- (void)setLiveVideoStreaming:(_Bool)arg1 session:(id)arg2;
- (void)setNightModeActive:(_Bool)arg1 session:(id)arg2;
- (id)_bestSupportedFormat;
- (void)_findSupportedFormats;
- (void)resetDeviceAsInput;
- (void)removeDeviceAsInput:(id)arg1;
- (_Bool)setDeviceAsInput:(id)arg1;
- (unsigned long long)position;
- (id)initWithDevice:(id)arg1 devicePosition:(unsigned long long)arg2;

@end

