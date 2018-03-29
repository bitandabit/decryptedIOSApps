//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUMessageBody-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUKhaleesiShare, SOJUMedia, SOJUMediaSave, SOJUMessageParcel, SOJUNycShare, SOJUSearchShareStory, SOJUSearchShareStorySnap, SOJUSnapMetadata, SOJUSnapchatter, SOJUSticker, SOJUStoryShare;

@interface SOJUMessageBody : NSObject <SOJUMessageBody>
{
    SOJUMedia *_media;
    NSArray *_medias;
    SOJUSticker *_sticker;
    SOJUSnapchatter *_snapchatter;
    NSString *_type;
    NSNumber *_typeVersion;
    NSString *_text;
    NSArray *_attributes;
    NSArray *_mediaCardAttributes;
    NSString *_storyTitle;
    SOJUStoryShare *_storyShare;
    NSNumber *_obfuscation;
    SOJUSnapMetadata *_snapMetadata;
    SOJUKhaleesiShare *_khaleesiShare;
    SOJUNycShare *_nycShare;
    SOJUSearchShareStorySnap *_searchShareStorySnap;
    SOJUSearchShareStory *_searchShareStory;
    SOJUMediaSave *_mediaSave;
    NSArray *_replyMedias;
    NSArray *_messagePallet;
    NSNumber *_sendStartTimestamp;
    NSNumber *_isScreenRecording;
    SOJUMessageParcel *_messageParcel;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUMessageParcel *messageParcel; // @synthesize messageParcel=_messageParcel;
@property(readonly, copy, nonatomic) NSNumber *isScreenRecording; // @synthesize isScreenRecording=_isScreenRecording;
@property(readonly, copy, nonatomic) NSNumber *sendStartTimestamp; // @synthesize sendStartTimestamp=_sendStartTimestamp;
@property(readonly, copy, nonatomic) NSArray *messagePallet; // @synthesize messagePallet=_messagePallet;
@property(readonly, copy, nonatomic) NSArray *replyMedias; // @synthesize replyMedias=_replyMedias;
@property(readonly, copy, nonatomic) SOJUMediaSave *mediaSave; // @synthesize mediaSave=_mediaSave;
@property(readonly, copy, nonatomic) SOJUSearchShareStory *searchShareStory; // @synthesize searchShareStory=_searchShareStory;
@property(readonly, copy, nonatomic) SOJUSearchShareStorySnap *searchShareStorySnap; // @synthesize searchShareStorySnap=_searchShareStorySnap;
@property(readonly, copy, nonatomic) SOJUNycShare *nycShare; // @synthesize nycShare=_nycShare;
@property(readonly, copy, nonatomic) SOJUKhaleesiShare *khaleesiShare; // @synthesize khaleesiShare=_khaleesiShare;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata; // @synthesize snapMetadata=_snapMetadata;
@property(readonly, copy, nonatomic) NSNumber *obfuscation; // @synthesize obfuscation=_obfuscation;
@property(readonly, copy, nonatomic) SOJUStoryShare *storyShare; // @synthesize storyShare=_storyShare;
@property(readonly, copy, nonatomic) NSString *storyTitle; // @synthesize storyTitle=_storyTitle;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes; // @synthesize mediaCardAttributes=_mediaCardAttributes;
@property(readonly, copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSNumber *typeVersion; // @synthesize typeVersion=_typeVersion;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) SOJUSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, copy, nonatomic) SOJUSticker *sticker; // @synthesize sticker=_sticker;
@property(readonly, copy, nonatomic) NSArray *medias; // @synthesize medias=_medias;
@property(readonly, copy, nonatomic) SOJUMedia *media; // @synthesize media=_media;
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
- (id)initWithMedia:(id)arg1 medias:(id)arg2 sticker:(id)arg3 snapchatter:(id)arg4 type:(id)arg5 typeVersion:(id)arg6 text:(id)arg7 attributes:(id)arg8 mediaCardAttributes:(id)arg9 storyTitle:(id)arg10 storyShare:(id)arg11 obfuscation:(id)arg12 snapMetadata:(id)arg13 khaleesiShare:(id)arg14 nycShare:(id)arg15 searchShareStorySnap:(id)arg16 searchShareStory:(id)arg17 mediaSave:(id)arg18 replyMedias:(id)arg19 messagePallet:(id)arg20 sendStartTimestamp:(id)arg21 isScreenRecording:(id)arg22 messageParcel:(id)arg23;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isScreenRecordingValue;
- (long long)sendStartTimestampValue;
- (int)obfuscationValue;
- (int)typeVersionValue;
- (long long)typeEnum;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

