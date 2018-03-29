//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGalleryServletGallerySyncResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryServletGalleryUserSetting, SOJUGalleryServletQuota;

@interface SOJUGalleryServletGallerySyncResponse : NSObject <SOJUGalleryServletGallerySyncResponse>
{
    NSNumber *_serviceStatusCode;
    NSString *_userString;
    NSNumber *_backoffTime;
    NSString *_debugInfo;
    SOJUGalleryServletQuota *_quota;
    NSNumber *_totalEntryCount;
    NSNumber *_lastSeqnum;
    NSNumber *_highestSeqnum;
    NSArray *_entries;
    NSNumber *_hasMore;
    SOJUGalleryServletGalleryUserSetting *_userSettings;
    NSArray *_defunctMedias;
    NSNumber *_batchLowSeqnum;
    NSNumber *_batchHighSeqnum;
    NSNumber *_lowestSeqnum;
    NSString *_syncToken;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(readonly, copy, nonatomic) NSNumber *lowestSeqnum; // @synthesize lowestSeqnum=_lowestSeqnum;
@property(readonly, copy, nonatomic) NSNumber *batchHighSeqnum; // @synthesize batchHighSeqnum=_batchHighSeqnum;
@property(readonly, copy, nonatomic) NSNumber *batchLowSeqnum; // @synthesize batchLowSeqnum=_batchLowSeqnum;
@property(readonly, copy, nonatomic) NSArray *defunctMedias; // @synthesize defunctMedias=_defunctMedias;
@property(readonly, copy, nonatomic) SOJUGalleryServletGalleryUserSetting *userSettings; // @synthesize userSettings=_userSettings;
@property(readonly, copy, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly, copy, nonatomic) NSNumber *highestSeqnum; // @synthesize highestSeqnum=_highestSeqnum;
@property(readonly, copy, nonatomic) NSNumber *lastSeqnum; // @synthesize lastSeqnum=_lastSeqnum;
@property(readonly, copy, nonatomic) NSNumber *totalEntryCount; // @synthesize totalEntryCount=_totalEntryCount;
@property(readonly, copy, nonatomic) SOJUGalleryServletQuota *quota; // @synthesize quota=_quota;
@property(readonly, copy, nonatomic) NSString *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(readonly, copy, nonatomic) NSNumber *backoffTime; // @synthesize backoffTime=_backoffTime;
@property(readonly, copy, nonatomic) NSString *userString; // @synthesize userString=_userString;
@property(readonly, copy, nonatomic) NSNumber *serviceStatusCode; // @synthesize serviceStatusCode=_serviceStatusCode;
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
- (id)initWithServiceStatusCode:(id)arg1 userString:(id)arg2 backoffTime:(id)arg3 debugInfo:(id)arg4 quota:(id)arg5 totalEntryCount:(id)arg6 lastSeqnum:(id)arg7 highestSeqnum:(id)arg8 entries:(id)arg9 hasMore:(id)arg10 userSettings:(id)arg11 defunctMedias:(id)arg12 batchLowSeqnum:(id)arg13 batchHighSeqnum:(id)arg14 lowestSeqnum:(id)arg15 syncToken:(id)arg16;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)lowestSeqnumValue;
- (long long)batchHighSeqnumValue;
- (long long)batchLowSeqnumValue;
- (_Bool)hasMoreValue;
- (long long)highestSeqnumValue;
- (long long)lastSeqnumValue;
- (int)totalEntryCountValue;
- (long long)backoffTimeValue;
- (long long)serviceStatusCodeEnum;
- (int)serviceStatusCodeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

