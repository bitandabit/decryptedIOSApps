//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUReceivedSnapMessage-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUGenericSnap, SOJUHeader, SOJUMediaUrl, SOJUSnapMetadata, SOJUSnapstreakMetadata;

@interface SOJUReceivedSnapMessage : NSObject <SOJUReceivedSnapMessage>
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSDictionary *_knownChatSequenceNumbers;
    NSNumber *_mischiefVersion;
    NSNumber *_seqNum;
    NSNumber *_timestamp;
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
    NSNumber *_sentTimestamp;
    NSNumber *_deliveredTimestamp;
    NSNumber *_status;
    NSString *_snapId;
    NSNumber *_zipped;
    NSString *_captionTextDeprecated;
    NSNumber *_captionOrientationDeprecated;
    NSNumber *_captionPositionDeprecated;
    NSNumber *_mediaType;
    NSNumber *_displayTime;
    NSString *_filterId;
    NSString *_esId;
    NSString *_egData;
    NSArray *_uvTags;
    NSNumber *_fiVersion;
    NSString *_fiSenderOutAlpha;
    NSString *_fiRecipientOutAlpha;
    NSNumber *_fiSendTimestamp;
    NSDictionary *_fideliusInfo;
    NSString *_sojuNewSnapId;
    NSString *_sojuNewSnapMediaType;
    NSString *_fiSnapKey;
    NSString *_fiSnapIv;
    NSString *_venueId;
    NSArray *_snapAttachments;
    NSNumber *_isInfiniteDuration;
    SOJUSnapstreakMetadata *_snapstreakMetadata;
    NSNumber *_sendStartTimestamp;
    NSString *_fiSenderOutBeta;
    NSArray *_replyMedias;
    NSNumber *_fiSnapReleaseTs;
    NSString *_checksum;
    NSNumber *_fiRetried;
    SOJUGenericSnap *_sojuNewSnap;
    SOJUMediaUrl *_directDownloadUrl;
    NSString *_contextHint;
    NSString *_animatedSnapType;
    SOJUSnapMetadata *_snapMetadata;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata; // @synthesize snapMetadata=_snapMetadata;
@property(readonly, copy, nonatomic) NSString *animatedSnapType; // @synthesize animatedSnapType=_animatedSnapType;
@property(readonly, copy, nonatomic) NSString *contextHint; // @synthesize contextHint=_contextHint;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directDownloadUrl; // @synthesize directDownloadUrl=_directDownloadUrl;
@property(readonly, copy, nonatomic) SOJUGenericSnap *sojuNewSnap; // @synthesize sojuNewSnap=_sojuNewSnap;
@property(readonly, copy, nonatomic) NSNumber *fiRetried; // @synthesize fiRetried=_fiRetried;
@property(readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(readonly, copy, nonatomic) NSNumber *fiSnapReleaseTs; // @synthesize fiSnapReleaseTs=_fiSnapReleaseTs;
@property(readonly, copy, nonatomic) NSArray *replyMedias; // @synthesize replyMedias=_replyMedias;
@property(readonly, copy, nonatomic) NSString *fiSenderOutBeta; // @synthesize fiSenderOutBeta=_fiSenderOutBeta;
@property(readonly, copy, nonatomic) NSNumber *sendStartTimestamp; // @synthesize sendStartTimestamp=_sendStartTimestamp;
@property(readonly, copy, nonatomic) SOJUSnapstreakMetadata *snapstreakMetadata; // @synthesize snapstreakMetadata=_snapstreakMetadata;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
@property(readonly, copy, nonatomic) NSArray *snapAttachments; // @synthesize snapAttachments=_snapAttachments;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(readonly, copy, nonatomic) NSString *fiSnapIv; // @synthesize fiSnapIv=_fiSnapIv;
@property(readonly, copy, nonatomic) NSString *fiSnapKey; // @synthesize fiSnapKey=_fiSnapKey;
@property(readonly, copy, nonatomic) NSString *sojuNewSnapMediaType; // @synthesize sojuNewSnapMediaType=_sojuNewSnapMediaType;
@property(readonly, copy, nonatomic) NSString *sojuNewSnapId; // @synthesize sojuNewSnapId=_sojuNewSnapId;
@property(readonly, copy, nonatomic) NSDictionary *fideliusInfo; // @synthesize fideliusInfo=_fideliusInfo;
@property(readonly, copy, nonatomic) NSNumber *fiSendTimestamp; // @synthesize fiSendTimestamp=_fiSendTimestamp;
@property(readonly, copy, nonatomic) NSString *fiRecipientOutAlpha; // @synthesize fiRecipientOutAlpha=_fiRecipientOutAlpha;
@property(readonly, copy, nonatomic) NSString *fiSenderOutAlpha; // @synthesize fiSenderOutAlpha=_fiSenderOutAlpha;
@property(readonly, copy, nonatomic) NSNumber *fiVersion; // @synthesize fiVersion=_fiVersion;
@property(readonly, copy, nonatomic) NSArray *uvTags; // @synthesize uvTags=_uvTags;
@property(readonly, copy, nonatomic) NSString *egData; // @synthesize egData=_egData;
@property(readonly, copy, nonatomic) NSString *esId; // @synthesize esId=_esId;
@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, copy, nonatomic) NSNumber *displayTime; // @synthesize displayTime=_displayTime;
@property(readonly, copy, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSNumber *captionPositionDeprecated; // @synthesize captionPositionDeprecated=_captionPositionDeprecated;
@property(readonly, copy, nonatomic) NSNumber *captionOrientationDeprecated; // @synthesize captionOrientationDeprecated=_captionOrientationDeprecated;
@property(readonly, copy, nonatomic) NSString *captionTextDeprecated; // @synthesize captionTextDeprecated=_captionTextDeprecated;
@property(readonly, copy, nonatomic) NSNumber *zipped; // @synthesize zipped=_zipped;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSNumber *deliveredTimestamp; // @synthesize deliveredTimestamp=_deliveredTimestamp;
@property(readonly, copy, nonatomic) NSNumber *sentTimestamp; // @synthesize sentTimestamp=_sentTimestamp;
@property(readonly, copy, nonatomic) NSString *appEngineTarget; // @synthesize appEngineTarget=_appEngineTarget;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion; // @synthesize mischiefVersion=_mischiefVersion;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers; // @synthesize knownChatSequenceNumbers=_knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *retried; // @synthesize retried=_retried;
@property(readonly, copy, nonatomic) SOJUHeader *header; // @synthesize header=_header;
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
- (id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 sentTimestamp:(id)arg10 deliveredTimestamp:(id)arg11 status:(id)arg12 snapId:(id)arg13 zipped:(id)arg14 captionTextDeprecated:(id)arg15 captionOrientationDeprecated:(id)arg16 captionPositionDeprecated:(id)arg17 mediaType:(id)arg18 displayTime:(id)arg19 filterId:(id)arg20 esId:(id)arg21 egData:(id)arg22 uvTags:(id)arg23 fiVersion:(id)arg24 fiSenderOutAlpha:(id)arg25 fiRecipientOutAlpha:(id)arg26 fiSendTimestamp:(id)arg27 fideliusInfo:(id)arg28 sojuNewSnapId:(id)arg29 sojuNewSnapMediaType:(id)arg30 fiSnapKey:(id)arg31 fiSnapIv:(id)arg32 venueId:(id)arg33 snapAttachments:(id)arg34 isInfiniteDuration:(id)arg35 snapstreakMetadata:(id)arg36 sendStartTimestamp:(id)arg37 fiSenderOutBeta:(id)arg38 replyMedias:(id)arg39 fiSnapReleaseTs:(id)arg40 checksum:(id)arg41 fiRetried:(id)arg42 sojuNewSnap:(id)arg43 directDownloadUrl:(id)arg44 contextHint:(id)arg45 animatedSnapType:(id)arg46 snapMetadata:(id)arg47;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)animatedSnapTypeEnum;
- (_Bool)fiRetriedValue;
- (long long)fiSnapReleaseTsValue;
- (long long)sendStartTimestampValue;
- (_Bool)isInfiniteDurationValue;
- (long long)fiSendTimestampValue;
- (int)fiVersionValue;
- (double)displayTimeValue;
- (int)mediaTypeValue;
- (double)captionPositionDeprecatedValue;
- (long long)captionOrientationDeprecatedValue;
- (_Bool)zippedValue;
- (int)statusValue;
- (long long)deliveredTimestampValue;
- (long long)sentTimestampValue;
- (long long)typeEnum;
- (long long)timestampValue;
- (long long)seqNumValue;
- (long long)mischiefVersionValue;
- (_Bool)retriedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

