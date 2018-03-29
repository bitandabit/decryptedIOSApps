//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaThumbnailViewModel.h"

@class SCChatRenderableChatMedia;

@interface SCRenderableMediaThumbnailViewModel : SCBaseMediaThumbnailViewModel
{
    SCChatRenderableChatMedia *_renderableMedia;
}

- (void).cxx_destruct;
- (_Bool)shouldCropCircularMedia;
- (_Bool)isCircular;
- (_Bool)_isLagunaMediaType;
- (double)width;
- (double)height;
- (id)trackingId;
- (id)mediaIdentifier;
- (void)setMediaToDisplay:(id)arg1;
- (_Bool)representsMedia:(id)arg1;
- (id)displayedMedia;
- (id)videoURL;
- (void)fetchVideoOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)containsVideo;
- (void)fetchOriginalImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchImagesToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2 userSession:(id)arg3;
- (void)fetchImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2;
- (CDUnknownBlockType)_fetchMediaCompletionBlockForMediaType:(long long)arg1;
- (void)loadMedia;
- (_Bool)shouldDisplayAnimatedImages;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)shouldDisplayFailedToSend;
- (_Bool)shouldDisplaySendingOverlay;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)readyForDisplay;
- (_Bool)mediaLoaded;
- (id)initWithMedia:(id)arg1;

@end

