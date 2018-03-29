//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUBroadcastPrecachingPrecache-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastPrecachingLookaheadPrecache;

@interface SOJUBroadcastPrecachingPrecache : NSObject <SOJUBroadcastPrecachingPrecache>
{
    NSNumber *_useServerPreloadingLogic;
    NSArray *_entities;
    NSArray *_defaults;
    NSArray *_lookaheadPrecache;
    SOJUBroadcastPrecachingLookaheadPrecache *_defaultLookaheadPrecache;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUBroadcastPrecachingLookaheadPrecache *defaultLookaheadPrecache; // @synthesize defaultLookaheadPrecache=_defaultLookaheadPrecache;
@property(readonly, copy, nonatomic) NSArray *lookaheadPrecache; // @synthesize lookaheadPrecache=_lookaheadPrecache;
@property(readonly, copy, nonatomic) NSArray *defaults; // @synthesize defaults=_defaults;
@property(readonly, copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(readonly, copy, nonatomic) NSNumber *useServerPreloadingLogic; // @synthesize useServerPreloadingLogic=_useServerPreloadingLogic;
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
- (id)initWithUseServerPreloadingLogic:(id)arg1 entities:(id)arg2 defaults:(id)arg3 lookaheadPrecache:(id)arg4 defaultLookaheadPrecache:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)useServerPreloadingLogicValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

