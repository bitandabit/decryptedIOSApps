//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatMediaDrawerBaseMedia.h"

@interface SCChatMediaDrawerImage : SCChatMediaDrawerBaseMedia
{
}

- (_Bool)shouldResizeBeforeUploading;
- (double)duration;
- (_Bool)isZipped;
- (double)height;
- (double)width;
- (long long)mediaContentType;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareUploadDataForMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareUploadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareUploadDataForMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelThumbnailFetchRequest;
- (void)_fetchOriginalImageDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchImageWithSize:(struct CGSize)arg1 thumbnailType:(long long)arg2 allowLowQuality:(_Bool)arg3 userSession:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithPHAsset:(id)arg1;

@end

