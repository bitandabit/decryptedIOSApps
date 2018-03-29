//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUVideoRecordingTranscodingConfig-Protocol.h"

@class NSNumber, NSString;

@interface SOJUVideoRecordingTranscodingConfig : NSObject <SOJUVideoRecordingTranscodingConfig>
{
    NSNumber *_recordingBitrate1080p;
    NSNumber *_recordingBitrate720p;
    NSNumber *_recordingBitrate640p;
    NSNumber *_recordingBitrate480p;
    NSNumber *_recordingBitrate360p;
    NSNumber *_transcodingOutputWidth;
    NSNumber *_transcodingOutputBitrate1080p;
    NSNumber *_transcodingOutputBitrate720p;
    NSNumber *_transcodingOutputBitrate640p;
    NSNumber *_transcodingOutputBitrate480p;
    NSNumber *_transcodingOutputBitrate360p;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate360p; // @synthesize transcodingOutputBitrate360p=_transcodingOutputBitrate360p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate480p; // @synthesize transcodingOutputBitrate480p=_transcodingOutputBitrate480p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate640p; // @synthesize transcodingOutputBitrate640p=_transcodingOutputBitrate640p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate720p; // @synthesize transcodingOutputBitrate720p=_transcodingOutputBitrate720p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate1080p; // @synthesize transcodingOutputBitrate1080p=_transcodingOutputBitrate1080p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputWidth; // @synthesize transcodingOutputWidth=_transcodingOutputWidth;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate360p; // @synthesize recordingBitrate360p=_recordingBitrate360p;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate480p; // @synthesize recordingBitrate480p=_recordingBitrate480p;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate640p; // @synthesize recordingBitrate640p=_recordingBitrate640p;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate720p; // @synthesize recordingBitrate720p=_recordingBitrate720p;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate1080p; // @synthesize recordingBitrate1080p=_recordingBitrate1080p;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordingBitrate1080p:(id)arg1 recordingBitrate720p:(id)arg2 recordingBitrate640p:(id)arg3 recordingBitrate480p:(id)arg4 recordingBitrate360p:(id)arg5 transcodingOutputWidth:(id)arg6 transcodingOutputBitrate1080p:(id)arg7 transcodingOutputBitrate720p:(id)arg8 transcodingOutputBitrate640p:(id)arg9 transcodingOutputBitrate480p:(id)arg10 transcodingOutputBitrate360p:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)transcodingOutputBitrate360pValue;
- (int)transcodingOutputBitrate480pValue;
- (int)transcodingOutputBitrate640pValue;
- (int)transcodingOutputBitrate720pValue;
- (int)transcodingOutputBitrate1080pValue;
- (int)transcodingOutputWidthValue;
- (int)recordingBitrate360pValue;
- (int)recordingBitrate480pValue;
- (int)recordingBitrate640pValue;
- (int)recordingBitrate720pValue;
- (int)recordingBitrate1080pValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
