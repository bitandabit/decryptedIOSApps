//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PHAsset, PreviewViewController, SCFuture, SCPreviewBlob;

@protocol SCPreviewViewControllerSnapchatGalleryDelegate <NSObject>
- (void)previewViewControllerDidSendOrPostVideo:(PreviewViewController *)arg1 hasUnsavedChange:(_Bool)arg2 previewBlob:(SCPreviewBlob *)arg3 thumbnailAspectRatio:(double)arg4;
- (void)previewViewControllerDidSendOrPostPhoto:(PreviewViewController *)arg1 hasUnsavedChange:(_Bool)arg2 previewThumbnailFuture:(SCFuture *)arg3 thumbnailAspectRatio:(double)arg4;
- (void)previewViewController:(PreviewViewController *)arg1 didCopyAsset:(PHAsset *)arg2 newAsset:(PHAsset *)arg3;
- (void)previewViewController:(PreviewViewController *)arg1 didEditAsset:(PHAsset *)arg2 newAsset:(PHAsset *)arg3;
- (void)didSaveAndDismissIfNeeded:(_Bool)arg1;
@end

