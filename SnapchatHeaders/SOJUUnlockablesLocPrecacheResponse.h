//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUUnlockablesLocPrecacheResponse-Protocol.h"

@class NSString, SOJULocationResponse, SOJUUnlockablesCountryUnlockablesCache, SOJUUnlockablesFencedUnlockablesCache, SOJUUnlockablesPersonalUnlockablesCache, SOJUUnlockablesPrecacheConfiguration, SOJUUnlockablesPrecacheRegions;

@interface SOJUUnlockablesLocPrecacheResponse : NSObject <SOJUUnlockablesLocPrecacheResponse>
{
    NSString *_precacheStatus;
    SOJUUnlockablesFencedUnlockablesCache *_fencedUnlockablesCache;
    SOJUUnlockablesPersonalUnlockablesCache *_personalUnlockablesCache;
    SOJUUnlockablesCountryUnlockablesCache *_countryUnlockablesCache;
    SOJUUnlockablesPrecacheConfiguration *_precacheConfiguration;
    SOJUUnlockablesPrecacheRegions *_precacheRegions;
    SOJULocationResponse *_liveLocData;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJULocationResponse *liveLocData; // @synthesize liveLocData=_liveLocData;
@property(readonly, copy, nonatomic) SOJUUnlockablesPrecacheRegions *precacheRegions; // @synthesize precacheRegions=_precacheRegions;
@property(readonly, copy, nonatomic) SOJUUnlockablesPrecacheConfiguration *precacheConfiguration; // @synthesize precacheConfiguration=_precacheConfiguration;
@property(readonly, copy, nonatomic) SOJUUnlockablesCountryUnlockablesCache *countryUnlockablesCache; // @synthesize countryUnlockablesCache=_countryUnlockablesCache;
@property(readonly, copy, nonatomic) SOJUUnlockablesPersonalUnlockablesCache *personalUnlockablesCache; // @synthesize personalUnlockablesCache=_personalUnlockablesCache;
@property(readonly, copy, nonatomic) SOJUUnlockablesFencedUnlockablesCache *fencedUnlockablesCache; // @synthesize fencedUnlockablesCache=_fencedUnlockablesCache;
@property(readonly, copy, nonatomic) NSString *precacheStatus; // @synthesize precacheStatus=_precacheStatus;
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
- (id)initWithPrecacheStatus:(id)arg1 fencedUnlockablesCache:(id)arg2 personalUnlockablesCache:(id)arg3 countryUnlockablesCache:(id)arg4 precacheConfiguration:(id)arg5 precacheRegions:(id)arg6 liveLocData:(id)arg7;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)precacheStatusEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
