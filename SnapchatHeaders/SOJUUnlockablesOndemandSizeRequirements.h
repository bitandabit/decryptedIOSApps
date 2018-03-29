//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUUnlockablesOndemandSizeRequirements-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandSizeRequirements : NSObject <SOJUUnlockablesOndemandSizeRequirements>
{
    NSNumber *_maxSquareMeters;
    NSNumber *_minSquareMeters;
    NSNumber *_earthRadiusInMeters;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *earthRadiusInMeters; // @synthesize earthRadiusInMeters=_earthRadiusInMeters;
@property(readonly, copy, nonatomic) NSNumber *minSquareMeters; // @synthesize minSquareMeters=_minSquareMeters;
@property(readonly, copy, nonatomic) NSNumber *maxSquareMeters; // @synthesize maxSquareMeters=_maxSquareMeters;
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
- (id)initWithMaxSquareMeters:(id)arg1 minSquareMeters:(id)arg2 earthRadiusInMeters:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (double)earthRadiusInMetersValue;
- (double)minSquareMetersValue;
- (double)maxSquareMetersValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
