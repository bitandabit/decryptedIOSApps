//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGalleryEntry-Protocol.h"
#import "SCGalleryItem-Protocol.h"
#import "SCMediaDrawerItem-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface SCGalleryEntry : NSObject <SCGalleryItem, SCMediaDrawerItem, SCGalleryEntry>
{
    _Bool _isPrivate;
    _Bool _isTemporary;
    _Bool _syncedIsPrivate;
    int _entrySource;
    int _galleryType;
    int _pendingSyncs;
    int _sources;
    int _viewType;
    NSString *_objectID;
    NSDate *_autosaveTimeUtc;
    NSDate *_createTimeUtc;
    NSDictionary *_dataVaultEncryption;
    NSDate *_duplicateTimeUtc;
    NSDate *_earliestSnapCreateTimeUtc;
    NSString *_entryId;
    NSString *_externalId;
    NSString *_retryFromEntryId;
    long long _seqNum;
    NSString *_snapsHash;
    NSDate *_syncedAutosaveTimeUtc;
    NSString *_syncedTitle;
    NSString *_title;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)galleryEntryWithAutosaveTimeUtc:(id)arg1 createTimeUtc:(id)arg2 dataVaultEncryption:(id)arg3 duplicateTimeUtc:(id)arg4 earliestSnapCreateTimeUtc:(id)arg5 entryId:(id)arg6 entrySource:(int)arg7 externalId:(id)arg8 galleryType:(int)arg9 isPrivate:(_Bool)arg10 isTemporary:(_Bool)arg11 pendingSyncs:(int)arg12 retryFromEntryId:(id)arg13 seqNum:(long long)arg14 snapsHash:(id)arg15 sources:(int)arg16 syncedAutosaveTimeUtc:(id)arg17 syncedIsPrivate:(_Bool)arg18 syncedTitle:(id)arg19 title:(id)arg20 viewType:(int)arg21;
+ (id)parseManagedObject:(id)arg1;
+ (id)fetchAllGalleryEntriesIncludingPrivate:(_Bool)arg1;
+ (id)fetchAllGalleryEntries;
+ (id)fetchAllFeaturedEntries:(id)arg1;
+ (id)fetchFeaturedEntryWithExternalId:(id)arg1 ownerOrOwnerDeleted:(id)arg2;
+ (id)fetchLatestAutosavedGroupStoryWithExternalId:(id)arg1 owner:(id)arg2 isPrivate:(_Bool)arg3;
+ (id)fetchLatestAutosavedMyStoryGalleryEntryForOwner:(id)arg1 isPrivate:(_Bool)arg2;
+ (id)fetchPublicGalleryEntriesForOwner:(id)arg1;
+ (id)fetchPrivateGalleryEntriesForOwner:(id)arg1;
+ (id)fetchPrivateGalleryEntriesForOwnerFailed:(id)arg1;
+ (id)fetchOrderedGalleryEntriesForOwnerFailed:(id)arg1;
+ (id)fetchOrderedGalleryEntriesForOwner:(id)arg1;
+ (id)fetchUnsyncedGalleryEntriesForOwnerAndOwnerDeleted:(id)arg1;
+ (id)fetchGalleryEntriesWithEntryIds:(id)arg1;
+ (id)fetchManualSaveGalleryEntryWithExternalId:(id)arg1 isPrivate:(_Bool)arg2 owner:(id)arg3;
+ (id)fetchGalleryEntryWithEntryId:(id)arg1;
+ (_Bool)fetchIsDeletedEntryWithEntryId:(id)arg1;
+ (_Bool)fetchIsFailedWithEntryId:(id)arg1;
+ (unsigned long long)countOfGalleryEntriesForOwnerFailed:(id)arg1 options:(id)arg2;
+ (unsigned long long)countOfGalleryEntriesForOwnerDeleted:(id)arg1 options:(id)arg2;
+ (unsigned long long)countOfGalleryEntriesForOwner:(id)arg1 options:(id)arg2;
+ (id)fetchGalleryEntryForSyncedSnap:(id)arg1 options:(id)arg2;
+ (id)fetchGalleryEntryForSyncedHighlightedSnap:(id)arg1 options:(id)arg2;
+ (id)fetchGalleryEntryForSnap:(id)arg1 options:(id)arg2;
+ (id)fetchGalleryEntriesForOwnerFailed:(id)arg1 options:(id)arg2;
+ (id)fetchGalleryEntriesForOwnerDeleted:(id)arg1 options:(id)arg2;
+ (id)fetchGalleryEntriesForOwner:(id)arg1 options:(id)arg2;
+ (id)fetchGalleryEntryForHighlightedSnap:(id)arg1 options:(id)arg2;
+ (unsigned long long)countOfGalleryEntriesWithOptions:(id)arg1;
+ (id)fetchGalleryEntriesWithOptions:(id)arg1;
+ (id)allKeys;
+ (id)observe:(id)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *syncedTitle; // @synthesize syncedTitle=_syncedTitle;
@property(readonly, nonatomic) _Bool syncedIsPrivate; // @synthesize syncedIsPrivate=_syncedIsPrivate;
@property(readonly, copy, nonatomic) NSDate *syncedAutosaveTimeUtc; // @synthesize syncedAutosaveTimeUtc=_syncedAutosaveTimeUtc;
@property(readonly, nonatomic) int sources; // @synthesize sources=_sources;
@property(readonly, copy, nonatomic) NSString *snapsHash; // @synthesize snapsHash=_snapsHash;
@property(readonly, nonatomic) long long seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, copy, nonatomic) NSString *retryFromEntryId; // @synthesize retryFromEntryId=_retryFromEntryId;
@property(readonly, nonatomic) int pendingSyncs; // @synthesize pendingSyncs=_pendingSyncs;
@property(readonly, nonatomic) _Bool isTemporary; // @synthesize isTemporary=_isTemporary;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) int galleryType; // @synthesize galleryType=_galleryType;
@property(readonly, copy, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(readonly, nonatomic) int entrySource; // @synthesize entrySource=_entrySource;
@property(readonly, copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
@property(readonly, copy, nonatomic) NSDate *earliestSnapCreateTimeUtc; // @synthesize earliestSnapCreateTimeUtc=_earliestSnapCreateTimeUtc;
@property(readonly, copy, nonatomic) NSDate *duplicateTimeUtc; // @synthesize duplicateTimeUtc=_duplicateTimeUtc;
@property(readonly, copy, nonatomic) NSDictionary *dataVaultEncryption; // @synthesize dataVaultEncryption=_dataVaultEncryption;
@property(readonly, copy, nonatomic) NSDate *createTimeUtc; // @synthesize createTimeUtc=_createTimeUtc;
@property(readonly, copy, nonatomic) NSDate *autosaveTimeUtc; // @synthesize autosaveTimeUtc=_autosaveTimeUtc;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(id)arg1 autosaveTimeUtc:(id)arg2 createTimeUtc:(id)arg3 dataVaultEncryption:(id)arg4 duplicateTimeUtc:(id)arg5 earliestSnapCreateTimeUtc:(id)arg6 entryId:(id)arg7 entrySource:(int)arg8 externalId:(id)arg9 galleryType:(int)arg10 isPrivate:(_Bool)arg11 isTemporary:(_Bool)arg12 pendingSyncs:(int)arg13 retryFromEntryId:(id)arg14 seqNum:(long long)arg15 snapsHash:(id)arg16 sources:(int)arg17 syncedAutosaveTimeUtc:(id)arg18 syncedIsPrivate:(_Bool)arg19 syncedTitle:(id)arg20 title:(id)arg21 viewType:(int)arg22;
@property(readonly, nonatomic) NSDate *galleryItemDuplicateTime;
@property(readonly, nonatomic) NSDate *galleryItemCreateTime;
@property(readonly, copy, nonatomic) NSString *galleryItemIdentifier;
@property(readonly, nonatomic) unsigned long long galleryItemType;
- (long long)itemType;
- (id)itemId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

