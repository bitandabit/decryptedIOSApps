//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCBehaviorPrediction-Protocol.h"

@class NSDictionary, NSString;

@interface SCBehaviorPrediction : NSObject <SCBehaviorPrediction>
{
    double _ttl;
    double _bornTime;
    NSDictionary *_behaviorPredictionResponseDict;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)predictionWithJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *behaviorPredictionResponseDict; // @synthesize behaviorPredictionResponseDict=_behaviorPredictionResponseDict;
@property(readonly, nonatomic) double bornTime; // @synthesize bornTime=_bornTime;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTtl:(double)arg1 bornTime:(double)arg2 behaviorPredictionResponseDict:(id)arg3;
- (_Bool)isExpired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

