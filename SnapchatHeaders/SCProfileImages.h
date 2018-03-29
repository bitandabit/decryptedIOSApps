//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCProfileImages : NSObject <NSCoding, NSCopying>
{
    _Bool _profileImagesIsDirty;
    _Bool _didFetchProfileImages;
    _Bool _hasProfileImages;
    NSString *_username;
    NSString *_userId;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    long long _lastTakenTimestamp;
    long long _lastDeletedTimestamp;
    long long _lastCachedTimestamp;
    unsigned long long _sharingCount;
}

@property(nonatomic) _Bool hasProfileImages; // @synthesize hasProfileImages=_hasProfileImages;
@property(nonatomic) _Bool didFetchProfileImages; // @synthesize didFetchProfileImages=_didFetchProfileImages;
@property(nonatomic) _Bool profileImagesIsDirty; // @synthesize profileImagesIsDirty=_profileImagesIsDirty;
@property(nonatomic) unsigned long long sharingCount; // @synthesize sharingCount=_sharingCount;
@property(nonatomic) long long lastCachedTimestamp; // @synthesize lastCachedTimestamp=_lastCachedTimestamp;
@property(nonatomic) long long lastDeletedTimestamp; // @synthesize lastDeletedTimestamp=_lastDeletedTimestamp;
@property(nonatomic) long long lastTakenTimestamp; // @synthesize lastTakenTimestamp=_lastTakenTimestamp;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)fetchCachedProfileImagesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)cachedImageFilesExist;
- (id)imageJpgFilenameForProfileImageType:(long long)arg1;
- (void)removeCachedProfileImageData:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cacheProfileImageData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteProfileImagesAt:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadProfileImages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProfileImagesInContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProfileImagesInContext:(id)arg1;
- (void)resetStatus;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 userId:(id)arg2 bitmojiAvatarId:(id)arg3 bitmojiSelfieId:(id)arg4;
- (_Bool)_isValidUsernameForDownloadingProfileImages:(id)arg1;
- (_Bool)_isValidUserIdForModifyingProfileImages:(id)arg1;
- (void)downloadProfileImages:(id)arg1 size:(id)arg2 inContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteProfileImagesAt:(long long)arg1 forUserId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadProfileImages:(id)arg1 forUserId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
