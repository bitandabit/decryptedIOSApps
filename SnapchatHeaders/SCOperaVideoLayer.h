//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, NSURL, NSValue, SCOperaPage;
@protocol SCAudioStitch;

@interface SCOperaVideoLayer : NSObject <SCOperaLayer>
{
    _Bool _controlsEnabled;
    _Bool _audioDisabled;
    _Bool _hasFraming;
    _Bool _loadingIndicatorEnabled;
    _Bool _streaming;
    _Bool _disableSwipeUp;
    _Bool _subtitlesSupported;
    _Bool _progressViewEnabled;
    unsigned long long _docking;
    unsigned long long _playbackMode;
    NSURL *_url;
    NSURL *_shareableURL;
    NSString *_assetKey;
    unsigned long long _initialRotateDirection;
    double _controlsMinimumDuration;
    double _mediaStartTime;
    SCOperaPage *_page;
    id <SCAudioStitch> _audioStitch;
    double _audioStitchAnimationDuration;
    NSValue *_videoSize;
    NSString *_progressViewText;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, copy, nonatomic) NSString *progressViewText; // @synthesize progressViewText=_progressViewText;
@property(readonly, nonatomic) _Bool progressViewEnabled; // @synthesize progressViewEnabled=_progressViewEnabled;
@property(readonly, nonatomic) _Bool subtitlesSupported; // @synthesize subtitlesSupported=_subtitlesSupported;
@property(readonly, nonatomic) _Bool disableSwipeUp; // @synthesize disableSwipeUp=_disableSwipeUp;
@property(readonly, copy, nonatomic) NSValue *videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) _Bool streaming; // @synthesize streaming=_streaming;
@property(readonly, nonatomic) _Bool loadingIndicatorEnabled; // @synthesize loadingIndicatorEnabled=_loadingIndicatorEnabled;
@property(readonly, nonatomic) double audioStitchAnimationDuration; // @synthesize audioStitchAnimationDuration=_audioStitchAnimationDuration;
@property(readonly, nonatomic) id <SCAudioStitch> audioStitch; // @synthesize audioStitch=_audioStitch;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) double mediaStartTime; // @synthesize mediaStartTime=_mediaStartTime;
@property(readonly, nonatomic) _Bool hasFraming; // @synthesize hasFraming=_hasFraming;
@property(readonly, nonatomic) double controlsMinimumDuration; // @synthesize controlsMinimumDuration=_controlsMinimumDuration;
@property(readonly, nonatomic) unsigned long long initialRotateDirection; // @synthesize initialRotateDirection=_initialRotateDirection;
@property(readonly, nonatomic) _Bool audioDisabled; // @synthesize audioDisabled=_audioDisabled;
@property(readonly, nonatomic) _Bool controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(readonly, copy, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(readonly, nonatomic) NSURL *shareableURL; // @synthesize shareableURL=_shareableURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(readonly, nonatomic) unsigned long long docking; // @synthesize docking=_docking;
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
