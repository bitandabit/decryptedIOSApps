//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "SCManagedAudioDataSourceListener-Protocol.h"
#import "SCManagedLensProcessor-Protocol.h"
#import "SCManagedVideoDataSourceListener-Protocol.h"

@class FBKVOController, LSAComponentManager, NSArray, NSString, SCLensCrashLogger, SCLensFrameRateCounter, SCManagedAudioStreamer, SCManagedLensProcessorState, SCManagedLensProcessorStateWrapper, SCQueuePerformer;
@protocol LSATrackingComponentDelegate, SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener, SCManagedLensesProcessorDelegate;

@interface SCManagedLensesProcessor : NSObject <LSAEffectComponentListener, SCManagedAudioDataSourceListener, SCManagedVideoDataSourceListener, SCManagedLensProcessor>
{
    struct mutex _lock;
    struct mutex _managerLock;
    LSAComponentManager *_componentManager;
    FBKVOController *_kvoController;
    double _previousAudioMuteCheckTime;
    NSArray *_externalFilterFactoryNames;
    SCQueuePerformer *_effectComponentListenerPerformer;
    id <SCManagedLensesProcessorDelegate> _lensesProcessorDelegate;
    id <LSATrackingComponentDelegate> _trackingComponentDelegate;
    SCManagedAudioStreamer *_managedAudioStreamer;
    SCLensCrashLogger *_crashLogger;
    SCLensFrameRateCounter *_frameRateCounter;
    SCManagedLensProcessorStateWrapper *_stateWrapper;
}

@property(retain, nonatomic) SCManagedLensProcessorStateWrapper *stateWrapper; // @synthesize stateWrapper=_stateWrapper;
@property(readonly, nonatomic) SCLensFrameRateCounter *frameRateCounter; // @synthesize frameRateCounter=_frameRateCounter;
@property(retain, nonatomic) SCLensCrashLogger *crashLogger; // @synthesize crashLogger=_crashLogger;
@property(retain, nonatomic) SCManagedAudioStreamer *managedAudioStreamer; // @synthesize managedAudioStreamer=_managedAudioStreamer;
@property(nonatomic) __weak id <LSATrackingComponentDelegate> trackingComponentDelegate; // @synthesize trackingComponentDelegate=_trackingComponentDelegate;
@property(nonatomic) __weak id <SCManagedLensesProcessorDelegate> lensesProcessorDelegate; // @synthesize lensesProcessorDelegate=_lensesProcessorDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeFrameRateListener:(id)arg1;
- (_Bool)addFrameRateListener:(id)arg1;
- (void)removeStateListener:(id)arg1;
- (_Bool)addStateListener:(id)arg1;
- (void)_unregisterFilterFactory;
- (void)_registerFilterFactory:(id)arg1;
- (void)_prepareVideoComponentWithVideoOrientation:(long long)arg1;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)removeFieldOfViewListener;
- (void)setAsFieldOfViewListenerForARDataSource:(id)arg1;
- (void)setAsFieldOfViewListenerForDevice:(id)arg1;
- (void)managedAudioDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_updateRenderingResolutionWithRenderSize:(struct CGSize)arg1;
- (struct CGSize)_renderingResolutionForPixelBuffer:(struct __CVBuffer *)arg1;
- (void)_managedVideoDataSource:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 devicePosition:(unsigned long long)arg4 processingBlock:(CDUnknownBlockType)arg5;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(unsigned long long)arg3;
- (void)_resumeOrPauseLensSoundsIfNecessary;
- (void)_audioSessionDidActivateNotificationReceived:(id)arg1;
- (void)_audioSessionWillDeactivateNotificationReceived:(id)arg1;
- (void)detectLensCategoryOnNextFrame:(struct CGPoint)arg1 videoOrientation:(long long)arg2 lenses:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)processImage:(id)arg1 maxPixelSize:(long long)arg2 devicePosition:(unsigned long long)arg3 fieldOfView:(float)arg4;
- (void)setShouldProcessARFrames:(_Bool)arg1;
- (void)setAspectRatio:(struct SCAspectRatio)arg1;
- (void)setShouldMuteAllSounds:(_Bool)arg1;
- (void)setFieldOfView:(float)arg1;
- (void)setModifySource:(_Bool)arg1;
- (void)setLensesActive:(_Bool)arg1 videoOrientation:(long long)arg2 filterFactory:(id)arg3;
@property(readonly, nonatomic) SCManagedLensProcessorState *state;
@property(readonly, nonatomic) id <SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener> capturerListener;
@property(readonly, nonatomic) LSAComponentManager *componentManager;
- (void)dealloc;
- (id)initWithLensesProcessorDelegate:(id)arg1 trackingComponentDelegate:(id)arg2 managedAudioStreamer:(id)arg3 crashLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

