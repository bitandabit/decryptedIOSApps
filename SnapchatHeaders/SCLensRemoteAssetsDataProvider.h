//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LSARemoteAssetsComponentListener-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"

@class LSARemoteAssetsComponent, NSString, SC3DBitmojiMetadataStore, SCLens, SCLensDataFetcherV2, SCLensDataUploader, SCSessionRequestManager;

@interface SCLensRemoteAssetsDataProvider : NSObject <LSARemoteAssetsComponentListener, SCLensUIUpdateListener>
{
    LSARemoteAssetsComponent *_remoteAssetsComponent;
    SC3DBitmojiMetadataStore *_bitmoji3DMetadataStore;
    SCLensDataFetcherV2 *_dataFetcher;
    SCLensDataUploader *_dataUploader;
    SCSessionRequestManager *_requestManager;
    SCLens *_activeLens;
    NSString *_userId;
    NSString *_bitmojiAvatarId;
    NSString *_friendUserId;
    NSString *_friendAvatarId;
}

+ (id)currentlyApplyingAssets;
@property(copy, nonatomic) NSString *friendAvatarId; // @synthesize friendAvatarId=_friendAvatarId;
@property(copy, nonatomic) NSString *friendUserId; // @synthesize friendUserId=_friendUserId;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)didSetAsset:(id)arg1;
- (void)willSetAsset:(id)arg1;
- (void)didEndDisplayingLens:(id)arg1;
- (void)willDisplayLens:(id)arg1;
- (void)didHideLenses;
- (void)willShowLenses;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (void)getAssetForLensId:(id)arg1 assetId:(id)arg2 assetType:(long long)arg3 avatarId:(id)arg4 encryptionKey:(id)arg5 encryptionIv:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5 effectId:(id)arg6;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 effectId:(id)arg4;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetWithId:(id)arg2 assetType:(long long)arg3 avatarId:(id)arg4 encryptionKey:(id)arg5 encryptionIv:(id)arg6 effectId:(id)arg7;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetWithId:(id)arg2 assetType:(long long)arg3 avatarId:(id)arg4 effectId:(id)arg5;
- (id)initWithRemoteAssetsComponent:(id)arg1 bitmoji3DMetadataStore:(id)arg2 dataFetcher:(id)arg3 dataUploader:(id)arg4 requestManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
