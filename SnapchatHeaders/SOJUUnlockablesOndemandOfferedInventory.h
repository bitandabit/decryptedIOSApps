//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUUnlockablesOndemandOfferedInventory-Protocol.h"

@class NSString, SOJUUnlockablesOndemandAssetRequirements, SOJUUnlockablesOndemandFenceRequirements, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandSizeRequirements;

@interface SOJUUnlockablesOndemandOfferedInventory : NSObject <SOJUUnlockablesOndemandOfferedInventory>
{
    SOJUUnlockablesOndemandSchedule *_schedule;
    SOJUUnlockablesOndemandFenceRequirements *_fenceRequirements;
    SOJUUnlockablesOndemandSizeRequirements *_sizeRequirements;
    SOJUUnlockablesOndemandAssetRequirements *_assetRequirements;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandAssetRequirements *assetRequirements; // @synthesize assetRequirements=_assetRequirements;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSizeRequirements *sizeRequirements; // @synthesize sizeRequirements=_sizeRequirements;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandFenceRequirements *fenceRequirements; // @synthesize fenceRequirements=_fenceRequirements;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSchedule *schedule; // @synthesize schedule=_schedule;
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
- (id)initWithSchedule:(id)arg1 fenceRequirements:(id)arg2 sizeRequirements:(id)arg3 assetRequirements:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

