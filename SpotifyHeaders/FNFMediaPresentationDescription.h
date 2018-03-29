//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface FNFMediaPresentationDescription : NSObject
{
    _Bool _isDynamic;
    _Bool _isFragmented;
    unsigned int _durationMS;
    long long _videoType;
    NSString *_mpdAccessibilityDescription;
    double _publishFrameTimeMS;
    NSDate *_availabilityEndTime;
    NSArray *_videoTracks;
    NSArray *_audioTracks;
}

+ (struct _NSRange)rangeFromStartToEndString:(id)arg1;
+ (id)urlFromBase:(id)arg1 suffix:(id)arg2;
+ (id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 segmentsFromEndToStartForLive:(unsigned int)arg3 secondsFromEndToStartForLive:(unsigned int)arg4 enableSecondsFromEndToStartForLive:(_Bool)arg5 vp9Enabled:(_Bool)arg6 opusEnabled:(_Bool)arg7 error:(id *)arg8;
+ (id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 segmentsFromEndToStartForLive:(unsigned int)arg3 vp9Enabled:(_Bool)arg4 opusEnabled:(_Bool)arg5 error:(id *)arg6;
@property(readonly, copy, nonatomic) NSArray *audioTracks; // @synthesize audioTracks=_audioTracks;
@property(readonly, copy, nonatomic) NSArray *videoTracks; // @synthesize videoTracks=_videoTracks;
@property(readonly, copy, nonatomic) NSDate *availabilityEndTime; // @synthesize availabilityEndTime=_availabilityEndTime;
@property(readonly, nonatomic) double publishFrameTimeMS; // @synthesize publishFrameTimeMS=_publishFrameTimeMS;
@property(readonly, copy, nonatomic) NSString *mpdAccessibilityDescription; // @synthesize mpdAccessibilityDescription=_mpdAccessibilityDescription;
@property(readonly, nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) unsigned int durationMS; // @synthesize durationMS=_durationMS;
@property(readonly, nonatomic) _Bool isFragmented; // @synthesize isFragmented=_isFragmented;
@property(readonly, nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
- (void).cxx_destruct;
- (id)initWithAudioTracks:(id)arg1 videoTracks:(id)arg2 isDynamic:(_Bool)arg3 isFragmented:(_Bool)arg4 durationMS:(unsigned int)arg5 videoType:(long long)arg6 mpdAccessibilityDescription:(id)arg7 publishFrameTime:(unsigned long long)arg8 availabilityEndTime:(id)arg9;

@end

