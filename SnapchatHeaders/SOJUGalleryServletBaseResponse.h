//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGalleryServletBaseResponse-Protocol.h"

@class NSNumber, NSString, SOJUGalleryServletQuota;

@interface SOJUGalleryServletBaseResponse : NSObject <SOJUGalleryServletBaseResponse>
{
    NSNumber *_serviceStatusCode;
    NSString *_userString;
    NSNumber *_backoffTime;
    NSString *_debugInfo;
    SOJUGalleryServletQuota *_quota;
    NSNumber *_totalEntryCount;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
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
- (id)initWithServiceStatusCode:(id)arg1 userString:(id)arg2 backoffTime:(id)arg3 debugInfo:(id)arg4 quota:(id)arg5 totalEntryCount:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)totalEntryCountValue;
- (long long)backoffTimeValue;
- (long long)serviceStatusCodeEnum;
- (int)serviceStatusCodeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

