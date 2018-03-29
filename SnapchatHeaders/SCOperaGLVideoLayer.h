//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCOperaPage;

@interface SCOperaGLVideoLayer : NSObject <SCOperaLayer>
{
    _Bool _isRotatingVideo;
    _Bool _audioDisabled;
    _Bool _isReversePlayback;
    NSString *_assetKey;
    NSString *_intermediateGLCommandsKey;
    NSString *_outputGLCommandsKey;
    NSString *_audioProcessorMixKey;
    NSString *_reverseAudioDataKey;
    unsigned long long _playbackMode;
    double _playbackTimeScale;
    double _mediaScaleFactor;
    double _xOffset;
    double _yOffset;
    SCOperaPage *_page;
    struct CGAffineTransform _viewportTransform;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(readonly, nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(readonly, nonatomic) double mediaScaleFactor; // @synthesize mediaScaleFactor=_mediaScaleFactor;
@property(readonly, nonatomic) struct CGAffineTransform viewportTransform; // @synthesize viewportTransform=_viewportTransform;
@property(readonly, nonatomic) _Bool isReversePlayback; // @synthesize isReversePlayback=_isReversePlayback;
@property(readonly, nonatomic) _Bool audioDisabled; // @synthesize audioDisabled=_audioDisabled;
@property(readonly, nonatomic) double playbackTimeScale; // @synthesize playbackTimeScale=_playbackTimeScale;
@property(readonly, nonatomic) unsigned long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(readonly, nonatomic) _Bool isRotatingVideo; // @synthesize isRotatingVideo=_isRotatingVideo;
@property(readonly, copy, nonatomic) NSString *reverseAudioDataKey; // @synthesize reverseAudioDataKey=_reverseAudioDataKey;
@property(readonly, copy, nonatomic) NSString *audioProcessorMixKey; // @synthesize audioProcessorMixKey=_audioProcessorMixKey;
@property(readonly, copy, nonatomic) NSString *outputGLCommandsKey; // @synthesize outputGLCommandsKey=_outputGLCommandsKey;
@property(readonly, copy, nonatomic) NSString *intermediateGLCommandsKey; // @synthesize intermediateGLCommandsKey=_intermediateGLCommandsKey;
@property(readonly, copy, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
