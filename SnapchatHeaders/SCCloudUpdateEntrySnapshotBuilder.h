//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudUpdateEntrySnapshotBuilder : NSObject
{
    id <SCGalleryProfile> _profile;
    NSString *_entryId;
    NSString *_title;
    NSString *_deletedSnapId;
    id <SCGallerySnap> _snapPlaceholder;
    id <SCGallerySnapDetail> _detailPlaceholder;
    id <SCGallerySnapMiniThumbnail> _miniThumbnailPlaceholder;
    NSDictionary *_dataVaultEncryption;
    SCCloudSyncTriggerUserContext *_userContext;
    _Bool _requiresSyncStatusUpdate;
}

+ (id)withCloudUpdateEntrySnapshot:(id)arg1;
- (void).cxx_destruct;
- (id)setRequiresSyncStatusUpdate:(_Bool)arg1;
- (id)setUserContext:(id)arg1;
- (id)setDataVaultEncryption:(id)arg1;
- (id)setMiniThumbnailPlaceholder:(id)arg1;
- (id)setDetailPlaceholder:(id)arg1;
- (id)setSnapPlaceholder:(id)arg1;
- (id)setDeletedSnapId:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setEntryId:(id)arg1;
- (id)setProfile:(id)arg1;
- (id)build;

@end

