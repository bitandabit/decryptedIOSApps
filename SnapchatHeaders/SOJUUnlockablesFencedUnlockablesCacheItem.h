//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUUnlockablesFencedUnlockablesCacheItem-Protocol.h"

@class NSArray, NSString;

@interface SOJUUnlockablesFencedUnlockablesCacheItem : NSObject <SOJUUnlockablesFencedUnlockablesCacheItem>
{
    NSString *_cellToken;
    NSString *_status;
    NSString *_signature;
    NSArray *_unlockablesIds;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *unlockablesIds; // @synthesize unlockablesIds=_unlockablesIds;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *cellToken; // @synthesize cellToken=_cellToken;
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
- (id)initWithCellToken:(id)arg1 status:(id)arg2 signature:(id)arg3 unlockablesIds:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)statusEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

