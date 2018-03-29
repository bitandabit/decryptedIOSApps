//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUChatMessageBodyAttribute-Protocol.h"

@class NSString;

@interface SOJUChatMessageBodyAttribute : NSObject <SOJUChatMessageBodyAttribute>
{
    NSString *_type;
    NSString *_iosHref;
    NSString *_itunesId;
    NSString *_affiliateToken;
    NSString *_campaignTracker;
    NSString *_androidHref;
    NSString *_href;
    NSString *_formatType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *formatType; // @synthesize formatType=_formatType;
@property(readonly, copy, nonatomic) NSString *href; // @synthesize href=_href;
@property(readonly, copy, nonatomic) NSString *androidHref; // @synthesize androidHref=_androidHref;
@property(readonly, copy, nonatomic) NSString *campaignTracker; // @synthesize campaignTracker=_campaignTracker;
@property(readonly, copy, nonatomic) NSString *affiliateToken; // @synthesize affiliateToken=_affiliateToken;
@property(readonly, copy, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(readonly, copy, nonatomic) NSString *iosHref; // @synthesize iosHref=_iosHref;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
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
- (id)initWithType:(id)arg1 iosHref:(id)arg2 itunesId:(id)arg3 affiliateToken:(id)arg4 campaignTracker:(id)arg5 androidHref:(id)arg6 href:(id)arg7 formatType:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)formatTypeEnum;
- (long long)typeEnum;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
