//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUBroadcastUserStoryPrecachingPrecacheCounts-Protocol.h"

@class NSString, SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability;

@interface SOJUBroadcastUserStoryPrecachingPrecacheCounts : NSObject <SOJUBroadcastUserStoryPrecachingPrecacheCounts>
{
    SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability *_mainCounts;
    SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability *_lowPowerCounts;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability *lowPowerCounts; // @synthesize lowPowerCounts=_lowPowerCounts;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability *mainCounts; // @synthesize mainCounts=_mainCounts;
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
- (id)initWithMainCounts:(id)arg1 lowPowerCounts:(id)arg2;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

