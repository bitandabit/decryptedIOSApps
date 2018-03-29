//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSDictionary, NSError, NSNumber, NSPersonNameComponents, NSString;

@protocol NSFileProviderItem <NSObject>
@property(nonatomic, readonly) NSString *typeIdentifier;
@property(nonatomic, readonly) NSString *filename;
@property(nonatomic, readonly) NSString *parentItemIdentifier;
@property(nonatomic, readonly) NSString *itemIdentifier;

@optional
@property(nonatomic, readonly) NSDictionary *userInfo;
@property(nonatomic, readonly) NSData *versionIdentifier;
@property(nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
- (_Bool)isSharedByCurrentUser;
- (_Bool)isShared;
- (_Bool)isMostRecentVersionDownloaded;
@property(nonatomic, readonly) NSError *downloadingError;
- (_Bool)isDownloading;
- (_Bool)isDownloaded;
@property(nonatomic, readonly) NSError *uploadingError;
- (_Bool)isUploading;
- (_Bool)isUploaded;
- (_Bool)isTrashed;
@property(nonatomic, readonly) NSNumber *favoriteRank;
@property(nonatomic, readonly) NSData *tagData;
@property(nonatomic, readonly) NSDate *lastUsedDate;
@property(nonatomic, readonly) NSDate *contentModificationDate;
@property(nonatomic, readonly) NSDate *creationDate;
@property(nonatomic, readonly) NSNumber *childItemCount;
@property(nonatomic, readonly) NSNumber *documentSize;
@property(nonatomic, readonly) unsigned long long capabilities;

// Remaining properties
@property(nonatomic, readonly) _Bool downloaded;
@property(nonatomic, readonly) _Bool downloading;
@property(nonatomic, readonly) _Bool mostRecentVersionDownloaded;
@property(nonatomic, readonly) _Bool shared;
@property(nonatomic, readonly) _Bool sharedByCurrentUser;
@property(nonatomic, readonly) _Bool trashed;
@property(nonatomic, readonly) _Bool uploaded;
@property(nonatomic, readonly) _Bool uploading;
@end
