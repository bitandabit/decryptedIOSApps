//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCacheKeyKindEntry-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCCacheKeyKindEntry : NSObject <SCCacheKeyKindEntry>
{
    NSString *_key;
    NSString *_kind;
    NSDate *_expirationDate;
    NSNumber *_referenceCount;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSNumber *referenceCount; // @synthesize referenceCount=_referenceCount;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
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
- (id)initWithKey:(id)arg1 kind:(id)arg2 expirationDate:(id)arg3 referenceCount:(id)arg4;
- (id)adjustReferenceCount:(long long)arg1 expiration:(id)arg2;
- (_Bool)isExpired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
