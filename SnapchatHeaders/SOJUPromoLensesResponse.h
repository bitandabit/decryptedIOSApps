//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUPromoLensesResponse-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUPromoLensesResponse : NSObject <SOJUPromoLensesResponse>
{
    NSArray *_storeLenses;
    NSNumber *_displayCount;
    NSString *_lensListSignature;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *lensListSignature; // @synthesize lensListSignature=_lensListSignature;
@property(readonly, copy, nonatomic) NSNumber *displayCount; // @synthesize displayCount=_displayCount;
@property(readonly, copy, nonatomic) NSArray *storeLenses; // @synthesize storeLenses=_storeLenses;
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
- (id)initWithStoreLenses:(id)arg1 displayCount:(id)arg2 lensListSignature:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)displayCountValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

