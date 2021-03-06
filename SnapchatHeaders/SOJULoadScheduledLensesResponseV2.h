//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJULoadScheduledLensesResponseV2-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJULoadScheduledLensesResponseV2 : NSObject <SOJULoadScheduledLensesResponseV2>
{
    NSArray *_activeLenses;
    NSArray *_precachedLenses;
    NSNumber *_cacheTtlMillis;
    NSString *_lensListSignature;
    NSString *_preselectedLensId;
    NSArray *_activeRearLenses;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *activeRearLenses; // @synthesize activeRearLenses=_activeRearLenses;
@property(readonly, copy, nonatomic) NSString *preselectedLensId; // @synthesize preselectedLensId=_preselectedLensId;
@property(readonly, copy, nonatomic) NSString *lensListSignature; // @synthesize lensListSignature=_lensListSignature;
@property(readonly, copy, nonatomic) NSNumber *cacheTtlMillis; // @synthesize cacheTtlMillis=_cacheTtlMillis;
@property(readonly, copy, nonatomic) NSArray *precachedLenses; // @synthesize precachedLenses=_precachedLenses;
@property(readonly, copy, nonatomic) NSArray *activeLenses; // @synthesize activeLenses=_activeLenses;
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
- (id)initWithActiveLenses:(id)arg1 precachedLenses:(id)arg2 cacheTtlMillis:(id)arg3 lensListSignature:(id)arg4 preselectedLensId:(id)arg5 activeRearLenses:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)cacheTtlMillisValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

