//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUMessagingStorySharePublisherData-Protocol.h"

@class NSNumber, NSString;

@interface SOJUMessagingStorySharePublisherData : NSObject <SOJUMessagingStorySharePublisherData>
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSString *_thumbnailUrl;
    NSString *_profileDescription;
    NSNumber *_live;
    NSNumber *_publishTimestamp;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiSnapcodeSelfieId;
    NSNumber *_isUserPopular;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *isUserPopular; // @synthesize isUserPopular=_isUserPopular;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @synthesize bitmojiSnapcodeSelfieId=_bitmojiSnapcodeSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSNumber *publishTimestamp; // @synthesize publishTimestamp=_publishTimestamp;
@property(readonly, copy, nonatomic) NSNumber *live; // @synthesize live=_live;
@property(readonly, copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
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
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 thumbnailUrl:(id)arg4 profileDescription:(id)arg5 live:(id)arg6 publishTimestamp:(id)arg7 bitmojiAvatarId:(id)arg8 bitmojiSelfieId:(id)arg9 bitmojiSnapcodeSelfieId:(id)arg10 isUserPopular:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isUserPopularValue;
- (long long)publishTimestampValue;
- (_Bool)liveValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

