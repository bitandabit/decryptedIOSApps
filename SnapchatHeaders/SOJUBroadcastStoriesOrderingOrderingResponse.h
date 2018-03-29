//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUBroadcastStoriesOrderingOrderingResponse-Protocol.h"

@class NSArray, NSString;

@interface SOJUBroadcastStoriesOrderingOrderingResponse : NSObject <SOJUBroadcastStoriesOrderingOrderingResponse>
{
    NSArray *_recentOrder;
    NSArray *_autoAdvanceOrder;
    NSArray *_qualityProgrammingOrder;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *qualityProgrammingOrder; // @synthesize qualityProgrammingOrder=_qualityProgrammingOrder;
@property(readonly, copy, nonatomic) NSArray *autoAdvanceOrder; // @synthesize autoAdvanceOrder=_autoAdvanceOrder;
@property(readonly, copy, nonatomic) NSArray *recentOrder; // @synthesize recentOrder=_recentOrder;
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
- (id)initWithRecentOrder:(id)arg1 autoAdvanceOrder:(id)arg2 qualityProgrammingOrder:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

