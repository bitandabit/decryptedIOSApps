//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCloudUpdatePrivateEntriesSnapshot-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile;

@interface SCCloudUpdatePrivateEntriesSnapshot : NSObject <SCCloudUpdatePrivateEntriesSnapshot>
{
    _Bool _isPrivate;
    id <SCGalleryProfile> _profile;
    NSString *_entryId;
    NSArray *_addSnapEntities;
    NSDictionary *_dataVaultEncryption;
    SCCloudSyncTriggerUserContext *_userContext;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) SCCloudSyncTriggerUserContext *userContext; // @synthesize userContext=_userContext;
@property(readonly, copy, nonatomic) NSDictionary *dataVaultEncryption; // @synthesize dataVaultEncryption=_dataVaultEncryption;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSArray *addSnapEntities; // @synthesize addSnapEntities=_addSnapEntities;
@property(readonly, copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfile:(id)arg1 entryId:(id)arg2 addSnapEntities:(id)arg3 isPrivate:(_Bool)arg4 dataVaultEncryption:(id)arg5 userContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
