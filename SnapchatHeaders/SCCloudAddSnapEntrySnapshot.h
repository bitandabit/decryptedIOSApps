//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCloudAddSnapEntrySnapshot-Protocol.h"

@class NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryEntry, SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudAddSnapEntrySnapshot : NSObject <SCCloudAddSnapEntrySnapshot>
{
    id <SCGalleryProfile> _profile;
    id <SCGalleryEntry> _entryPlaceholder;
    id <SCGallerySnap> _snapPlaceholder;
    id <SCGallerySnapDetail> _detailPlaceholder;
    id <SCGallerySnapMiniThumbnail> _miniThumbnailPlaceholder;
    NSString *_duplicatedFromSnapId;
    NSDictionary *_dataVaultEncryption;
    SCCloudSyncTriggerUserContext *_userContext;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) SCCloudSyncTriggerUserContext *userContext; // @synthesize userContext=_userContext;
@property(readonly, copy, nonatomic) NSDictionary *dataVaultEncryption; // @synthesize dataVaultEncryption=_dataVaultEncryption;
@property(readonly, copy, nonatomic) NSString *duplicatedFromSnapId; // @synthesize duplicatedFromSnapId=_duplicatedFromSnapId;
@property(readonly, copy, nonatomic) id <SCGallerySnapMiniThumbnail> miniThumbnailPlaceholder; // @synthesize miniThumbnailPlaceholder=_miniThumbnailPlaceholder;
@property(readonly, copy, nonatomic) id <SCGallerySnapDetail> detailPlaceholder; // @synthesize detailPlaceholder=_detailPlaceholder;
@property(readonly, copy, nonatomic) id <SCGallerySnap> snapPlaceholder; // @synthesize snapPlaceholder=_snapPlaceholder;
@property(readonly, copy, nonatomic) id <SCGalleryEntry> entryPlaceholder; // @synthesize entryPlaceholder=_entryPlaceholder;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile; // @synthesize profile=_profile;
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
- (id)initWithProfile:(id)arg1 entryPlaceholder:(id)arg2 snapPlaceholder:(id)arg3 detailPlaceholder:(id)arg4 miniThumbnailPlaceholder:(id)arg5 duplicatedFromSnapId:(id)arg6 dataVaultEncryption:(id)arg7 userContext:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

