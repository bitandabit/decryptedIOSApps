//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetReader, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSArray, NSData, NSString, NSURL, NSValue, SCCroppingState, SCImageProcessVideoExportSession, SCMultiSnapDrawingCache, SCMultiSnapOverlayState, SCSnapVideoFilterAudioState, SCSnapVideoFilterUpdateListenerAnnouncer, UIImage;
@protocol OS_dispatch_queue, SCPreviewVideoProvider, SnapVideoFilterDelegate;

@interface SnapVideoFilter : NSObject
{
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_writerVideoInput;
    AVAssetWriterInput *_writerAudioInput;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    NSObject<OS_dispatch_queue> *_queue;
    struct opaqueCMSampleBuffer *_audioSampleBuffer;
    CDUnknownBlockType _completion;
    SCImageProcessVideoExportSession *_videoExportSession;
    struct OpaqueVTDecompressionSession *_videoDecompressionSession;
    struct __CVBuffer *_decompressedImageBuffer;
    NSArray *_GPUCommands;
    NSArray *_CPUCommands;
    _Bool _useOverlayImageAsMask;
    _Bool _highQuality;
    _Bool _audioEnabled;
    _Bool _isLagunaVideo;
    _Bool _videoCircleRenderer;
    _Bool _videoCircleColorBlack;
    _Bool _videoCircleMask;
    _Bool _savesToCameraRoll;
    id <SnapVideoFilterDelegate> _delegate;
    id <SCPreviewVideoProvider> _videoProvider;
    SCSnapVideoFilterUpdateListenerAnnouncer *_updateAnnouncer;
    UIImage *_snapImage;
    double _imageDuration;
    long long _frameRate;
    long long _bitrate;
    unsigned long long _videoTranscodeContext;
    NSData *_backgroundAudioData;
    NSData *_overridingAudioData;
    NSString *_filterName;
    long long _overlayImageFileSizeBits;
    NSURL *_overlayImageURL;
    UIImage *_overlayImage;
    NSData *_overlayImagePNGData;
    UIImage *_overlayImageForThumbnail;
    double _videoPlaybackRate;
    double _videoTargetAspectRatio;
    long long _videoTargetOrientation;
    long long _thumbnailOrientation;
    NSArray *_timeRanges;
    SCCroppingState *_croppingState;
    double _croppingAspectRatio;
    NSValue *_multiSnapTimeRange;
    id <SCPreviewVideoProvider> _multiSnapSourceVideoProvider;
    SCMultiSnapOverlayState *_multiSnapOverlayState;
    SCMultiSnapDrawingCache *_multiSnapDrawingCache;
    SCSnapVideoFilterAudioState *_audioState;
    NSString *_uuid;
    NSData *_thumbnailData;
    NSArray *_videoTrackedImages;
    NSString *_captureSessionID;
    unsigned long long _captureSessionIndex;
    CDUnknownBlockType _progressBlock;
    struct CGSize _videoCirclePadding;
    struct CGSize _overlaySize;
    struct CGSize _videoTargetSize;
}

+ (id)baseVideoPath;
+ (id)performer;
+ (id)_videoTrackedImageForGeoFilterWithOverlay:(id)arg1 snap:(id)arg2 hasAnimatedSticker:(_Bool)arg3 semaphore:(id)arg4 belowStickers:(_Bool *)arg5;
+ (id)videoTrackedImagesFromSnapOverlay:(id)arg1 snap:(id)arg2 videoTargetSize:(struct CGSize)arg3 isLagunaVideo:(_Bool)arg4 userSession:(id)arg5;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) unsigned long long captureSessionIndex; // @synthesize captureSessionIndex=_captureSessionIndex;
@property(copy, nonatomic) NSString *captureSessionID; // @synthesize captureSessionID=_captureSessionID;
@property(copy, nonatomic) NSArray *videoTrackedImages; // @synthesize videoTrackedImages=_videoTrackedImages;
@property(readonly, copy, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, nonatomic) struct CGSize videoTargetSize; // @synthesize videoTargetSize=_videoTargetSize;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) SCSnapVideoFilterAudioState *audioState; // @synthesize audioState=_audioState;
@property(nonatomic) _Bool savesToCameraRoll; // @synthesize savesToCameraRoll=_savesToCameraRoll;
@property(retain, nonatomic) SCMultiSnapDrawingCache *multiSnapDrawingCache; // @synthesize multiSnapDrawingCache=_multiSnapDrawingCache;
@property(retain, nonatomic) SCMultiSnapOverlayState *multiSnapOverlayState; // @synthesize multiSnapOverlayState=_multiSnapOverlayState;
@property(nonatomic) struct CGSize overlaySize; // @synthesize overlaySize=_overlaySize;
@property(retain, nonatomic) id <SCPreviewVideoProvider> multiSnapSourceVideoProvider; // @synthesize multiSnapSourceVideoProvider=_multiSnapSourceVideoProvider;
@property(retain, nonatomic) NSValue *multiSnapTimeRange; // @synthesize multiSnapTimeRange=_multiSnapTimeRange;
@property(nonatomic) double croppingAspectRatio; // @synthesize croppingAspectRatio=_croppingAspectRatio;
@property(retain, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
@property(copy, nonatomic) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
@property(nonatomic) long long thumbnailOrientation; // @synthesize thumbnailOrientation=_thumbnailOrientation;
@property(nonatomic) long long videoTargetOrientation; // @synthesize videoTargetOrientation=_videoTargetOrientation;
@property(nonatomic) double videoTargetAspectRatio; // @synthesize videoTargetAspectRatio=_videoTargetAspectRatio;
@property(nonatomic) double videoPlaybackRate; // @synthesize videoPlaybackRate=_videoPlaybackRate;
@property(nonatomic) _Bool videoCircleMask; // @synthesize videoCircleMask=_videoCircleMask;
@property(nonatomic) struct CGSize videoCirclePadding; // @synthesize videoCirclePadding=_videoCirclePadding;
@property(nonatomic) _Bool videoCircleColorBlack; // @synthesize videoCircleColorBlack=_videoCircleColorBlack;
@property(nonatomic) _Bool videoCircleRenderer; // @synthesize videoCircleRenderer=_videoCircleRenderer;
@property(nonatomic) _Bool isLagunaVideo; // @synthesize isLagunaVideo=_isLagunaVideo;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) _Bool highQuality; // @synthesize highQuality=_highQuality;
@property(retain, nonatomic) UIImage *overlayImageForThumbnail; // @synthesize overlayImageForThumbnail=_overlayImageForThumbnail;
@property(nonatomic) _Bool useOverlayImageAsMask; // @synthesize useOverlayImageAsMask=_useOverlayImageAsMask;
@property(copy, nonatomic) NSData *overlayImagePNGData; // @synthesize overlayImagePNGData=_overlayImagePNGData;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) NSURL *overlayImageURL; // @synthesize overlayImageURL=_overlayImageURL;
@property(nonatomic) long long overlayImageFileSizeBits; // @synthesize overlayImageFileSizeBits=_overlayImageFileSizeBits;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(copy, nonatomic) NSData *overridingAudioData; // @synthesize overridingAudioData=_overridingAudioData;
@property(copy, nonatomic) NSData *backgroundAudioData; // @synthesize backgroundAudioData=_backgroundAudioData;
@property(nonatomic) unsigned long long videoTranscodeContext; // @synthesize videoTranscodeContext=_videoTranscodeContext;
@property(nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) double imageDuration; // @synthesize imageDuration=_imageDuration;
@property(retain, nonatomic) UIImage *snapImage; // @synthesize snapImage=_snapImage;
@property(readonly, nonatomic) SCSnapVideoFilterUpdateListenerAnnouncer *updateAnnouncer; // @synthesize updateAnnouncer=_updateAnnouncer;
@property(retain, nonatomic) id <SCPreviewVideoProvider> videoProvider; // @synthesize videoProvider=_videoProvider;
@property(nonatomic) __weak id <SnapVideoFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setupWriterAudioInputForAsset:(id)arg1;
- (void)_setupWriterVideoInputForAsset:(id)arg1;
- (void)_finishWritingWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reverseAssetWithOriginalAudio:(id)arg1 outputURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_shouldEnableContentAdaptiveVideoExportWithVideoAsset:(id)arg1 rawDataURL:(id)arg2;
- (void)_completeWithAsset:(id)arg1;
- (void)_completeWithURL:(id)arg1 error:(id)arg2;
- (void)_videoProcessingDidFailWithError:(id)arg1 commands:(id)arg2 parameters:(id)arg3;
- (void)_videoProcessingDidCancelWithParameters:(id)arg1;
- (id)videoCircleColor;
- (_Bool)needsVideoCircleRenderer;
- (_Bool)hasEdits;
- (void)cancelProcessing;
- (void)configureWithExperimentContext:(id)arg1;
- (void)generateStaticImageAtTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)filterVideoCompletion:(CDUnknownBlockType)arg1;
- (void)filterVideoWithOutputBitrate:(long long)arg1 videoTargetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_writeVideoFromAnimatableImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)_prepareOutputURLFromTempFileURL:(id)arg1 addToActivePath:(_Bool)arg2;
- (id)_prepareOutputURL;
- (void)_generateCommands;
- (void)convertOverlayImageToPNGData;
- (void)createThumbnailWithAsset:(id)arg1;
- (void)_filterVideoWithFixedOutputSize:(struct CGSize)arg1;
- (void)filterVideo;
- (id)tempReverseFileURL;
- (id)tempFileURL;
- (id)snapVideoFilterState;
- (id)initFromSnapVideoFilterState:(id)arg1;
- (id)initWithVideoTranscodeContext:(unsigned long long)arg1;
- (void)_prepareSpectaclesMedia:(id)arg1 snap:(id)arg2 isExporting:(_Bool)arg3 userSession:(id)arg4;
- (void)_checkIfUrlIsValidForAVAsset:(id)arg1 forVideoSnap:(id)arg2;
- (void)filterVideoSnap:(id)arg1 cloudFile:(id)arg2 encryptedContentManager:(id)arg3 reverseAudioCache:(id)arg4 respectSnapOrientation:(_Bool)arg5 scaleMalibu:(_Bool)arg6 blendOverlayIntoVideo:(_Bool)arg7 highQuality:(_Bool)arg8 videoTargetSize:(struct CGSize)arg9 isExporting:(_Bool)arg10 userSession:(id)arg11 queue:(id)arg12 completion:(CDUnknownBlockType)arg13;

@end

