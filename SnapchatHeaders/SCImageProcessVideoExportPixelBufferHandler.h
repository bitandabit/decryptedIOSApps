//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCImageProcessVideoExportHandler-Protocol.h"

@class AVAssetReader, AVAssetReaderOutput, AVAssetWriter, AVAssetWriterInput, NSArray, NSString, SCImageProcessAssetWriterInputPixelBufferAdaptor, SCImageProcessQueue;
@protocol OS_dispatch_queue, SCImageProcessVideoExportHandlerDelegate;

@interface SCImageProcessVideoExportPixelBufferHandler : NSObject <SCImageProcessVideoExportHandler>
{
    SCImageProcessQueue *_imageProcessQueue;
    NSArray *_GPUCommands;
    NSArray *_CPUCommands;
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetReaderOutput *_readerOutput;
    AVAssetWriterInput *_writerInput;
    SCImageProcessAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    long long _orientation;
    NSObject<OS_dispatch_queue> *_queue;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    CDStruct_1b6d18a9 _presentationTime;
    int _maxFrameRate;
    double _presentationTimeScale;
    struct CGAffineTransform _viewportTransform;
    _Bool _done;
    id <SCImageProcessVideoExportHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCImageProcessVideoExportHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool done; // @synthesize done=_done;
- (void).cxx_destruct;
- (void)startTranscodingWhenReady;
- (void)_finishWritting;
- (void)_skipFrames;
- (void)_appendPixelBufferWithSemaphore:(id)arg1;
- (void)_convertPlaneInputPixelBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(unsigned long long)arg3 parallel:(_Bool)arg4;
- (void)_appendUsingCommandsWithInputPixelBuffer:(struct __CVBuffer *)arg1 semaphore:(id)arg2;
- (void)_appendOutputPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 semaphore:(id)arg3;
- (void)dealloc;
- (id)initWithImageProcessQueue:(id)arg1 GPUCommands:(id)arg2 CPUCommands:(id)arg3 assetReader:(id)arg4 assetWriter:(id)arg5 readerOutput:(id)arg6 writerInput:(id)arg7 pixelBufferAdaptor:(id)arg8 orientation:(long long)arg9 viewportTransform:(struct CGAffineTransform)arg10 queue:(id)arg11 firstSampleBuffer:(struct opaqueCMSampleBuffer *)arg12 maxFrameRate:(int)arg13 presentationTimeScale:(double)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

