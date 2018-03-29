//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchDynamicStorySnap-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString, SCSearchPerson, SCSearchPivotInfo, SCSearchStreamingMediaInfo;

@interface SCSearchDynamicStorySnap : NSObject <SCSearchDynamicStorySnap>
{
    _Bool _isZipped;
    _Bool _isInfiniteDuration;
    _Bool _hasLensFilter;
    NSString *_snapId;
    NSString *_sssId;
    NSString *_mediaId;
    NSString *_mediaKey;
    NSString *_mediaIv;
    NSString *_mediaURL;
    SCSearchStreamingMediaInfo *_videoStreamingInfo;
    long long _streamingFailureCode;
    double _duration;
    NSString *_attachmentUrl;
    long long _mediaType;
    long long _sourceType;
    NSString *_title;
    NSArray *_subtitles;
    NSString *_displayGeoInfo;
    NSDate *_creationTime;
    NSDate *_expirationTime;
    NSDictionary *_debugInfo;
    SCSearchPerson *_storyCreator;
    SCSearchPivotInfo *_pivotInfo;
    NSData *_audioStitchData;
    NSString *_serializedContextHint;
    NSString *_encryptedGeoData;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(readonly, copy, nonatomic) NSString *serializedContextHint; // @synthesize serializedContextHint=_serializedContextHint;
@property(readonly, nonatomic) _Bool hasLensFilter; // @synthesize hasLensFilter=_hasLensFilter;
@property(readonly, copy, nonatomic) NSData *audioStitchData; // @synthesize audioStitchData=_audioStitchData;
@property(readonly, copy, nonatomic) SCSearchPivotInfo *pivotInfo; // @synthesize pivotInfo=_pivotInfo;
@property(readonly, copy, nonatomic) SCSearchPerson *storyCreator; // @synthesize storyCreator=_storyCreator;
@property(readonly, copy, nonatomic) NSDictionary *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(readonly, copy, nonatomic) NSDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(readonly, copy, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, copy, nonatomic) NSString *displayGeoInfo; // @synthesize displayGeoInfo=_displayGeoInfo;
@property(readonly, copy, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(readonly, nonatomic) _Bool isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
@property(readonly, nonatomic) _Bool isZipped; // @synthesize isZipped=_isZipped;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long streamingFailureCode; // @synthesize streamingFailureCode=_streamingFailureCode;
@property(readonly, copy, nonatomic) SCSearchStreamingMediaInfo *videoStreamingInfo; // @synthesize videoStreamingInfo=_videoStreamingInfo;
@property(readonly, copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(readonly, copy, nonatomic) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *sssId; // @synthesize sssId=_sssId;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 sssId:(id)arg2 mediaId:(id)arg3 mediaKey:(id)arg4 mediaIv:(id)arg5 mediaURL:(id)arg6 videoStreamingInfo:(id)arg7 streamingFailureCode:(long long)arg8 duration:(double)arg9 isZipped:(_Bool)arg10 isInfiniteDuration:(_Bool)arg11 attachmentUrl:(id)arg12 mediaType:(long long)arg13 sourceType:(long long)arg14 title:(id)arg15 subtitles:(id)arg16 displayGeoInfo:(id)arg17 creationTime:(id)arg18 expirationTime:(id)arg19 debugInfo:(id)arg20 storyCreator:(id)arg21 pivotInfo:(id)arg22 audioStitchData:(id)arg23 hasLensFilter:(_Bool)arg24 serializedContextHint:(id)arg25 encryptedGeoData:(id)arg26;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

