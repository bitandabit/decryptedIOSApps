//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "FNFAVPlayerLayer.h"
#import "FNFDecompressionSessionDelegate.h"
#import "FNFPlayerDisplayEngine.h"

@class CADisplayLink, FNFPlayerFramesBuffer, FNFRenderingThread, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface FNFIOSurfacePlayerLayer : CALayer <FNFDecompressionSessionDelegate, FNFPlayerDisplayEngine, FNFAVPlayerLayer>
{
    struct CGAffineTransform _preferredTransform;
    CADisplayLink *_displayLink;
    NSString *_videoGravity;
    _Bool _shouldRenderWhilePlaybackPaused;
    _Bool _layoutChanged;
    struct CGSize _presentationRect;
    struct CGSize _layerSize;
    _Bool _isReadyForDisplay;
    FNFPlayerFramesBuffer *_framesBuffer;
    id <FNFDecompressionSession> _decompressionSession;
    id <FNFDecompressionSession> _previousDecompressionSession;
    _Bool _shouldCloseDSessionOnCallback;
    CDUnknownBlockType _dataBlock;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _Bool _requestingData;
    NSError *_layerError;
    struct OpaqueCMTimebase *_controlTimeBase;
    _Bool _offMainThreadRendering;
    FNFRenderingThread *_renderingThread;
    _Bool _optimizeMemory;
    _Bool _blockPlayWhenNotActive;
    _Bool _allowPlayWhenInactive;
    _Bool _shouldLockRenderImmediately;
    _Bool _storeLastDisplayedSampleBuffer;
    struct __CVBuffer *_lastDisplayedSampleBuffer;
    int _sampleBufferRequestThreshold;
    _Bool _requestedResizeDecompressionSession;
    _Bool _presentsWithTransaction;
    unsigned int _numOfVP9DecoderThreads;
    _Bool _shouldSyncBeforeRunloopStop;
    _Bool _shouldFrameSeekOnPause;
    _Bool _shouldLayoutSublayerOnMainOrRenderingThread;
    _Bool _shouldUseBlackImageDuringGLReset;
    _Bool _shouldUseMultithreadedGLContext;
    _Bool _appActive;
    id <FNFPlayerDisplayEngineDelegate> _playerLayerDelegate;
}

@property _Bool appActive; // @synthesize appActive=_appActive;
@property(nonatomic) __weak id <FNFPlayerDisplayEngineDelegate> playerLayerDelegate; // @synthesize playerLayerDelegate=_playerLayerDelegate;
- (void).cxx_destruct;
- (void)_clearBuffers;
- (_Bool)_preventPlayback;
- (void)_setPreferredTransform:(id)arg1;
@property(nonatomic) struct CGAffineTransform preferredTransform;
- (void)_updateReadyForDisplay:(_Bool)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleError:(id)arg1 ifIFrameStillValid:(unsigned long long)arg2;
- (void)handleDecompressionSessionError:(id)arg1 ifIFrameStillValid:(unsigned long long)arg2;
- (void)handleDecompressionSessionError:(id)arg1;
- (void)_requestData;
- (_Bool)isReadyForMoreMediaData;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attributes:(unsigned int)arg2;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 presentationDuration:(CDStruct_1b6d18a9)arg3;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 presentationDuration:(CDStruct_1b6d18a9)arg3 iFrame:(unsigned long long)arg4;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)flush;
- (void)setNeedsDisplayFrame;
- (_Bool)seekFrameUpdatesFinished;
- (void)flushAndRemoveImage;
- (void)_resetRendering;
- (void)stopRequestingMediaData;
@property(readonly, nonatomic) long long status;
@property(copy) NSString *videoGravity;
@property(retain) struct OpaqueCMTimebase *controlTimebase;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
- (_Bool)allowRenderingWhileApplicationInactive;
@property(retain, nonatomic) id <FNFAVPlayer> player;
- (_Bool)flushIfError;
- (void)_drawFrameTransaction:(_Bool)arg1;
- (void)_drawFrame:(_Bool)arg1;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1;
- (void)_performOnRenderingThreadOrAsyncMain:(CDUnknownBlockType)arg1;
- (void)_performOnRenderingThreadOrCurrent:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)invalidate;
- (void)_releaseTimeBase;
- (_Bool)flushDisplayReadySampleBuffers;
- (void)_tryToMoveToNextFrameWithDrawingOn:(_Bool)arg1;
- (void)_requestLastDisplayedSampleBuffer:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)requestLastDisplayedSampleBuffer:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_displayLinkCallback:(id)arg1;
- (void)layoutSublayers;
- (void)pauseDisplayLink;
- (void)pause:(int)arg1;
- (void)resume;
- (void)setRenderer:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)dispatchAsyncOnRenderingThread:(CDUnknownBlockType)arg1;
- (void)dispatchSyncOnRenderingThread:(CDUnknownBlockType)arg1;
- (void)setRenderingThreadPriority:(double)arg1;
- (void)_requestResizeDecompressionSession;
@property(readonly, copy) NSString *description;
- (id)initWithConfigs:(CDStruct_7933af2f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
