//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaThumbnailViewModel.h"

#import "SCChatMediaMessageStateDelegate-Protocol.h"

@class NSString, SCBaseChatMedia, UIImage;
@protocol SCReplyChatMessage;

@interface SCReplyMessageThumbnailViewModel : SCBaseMediaThumbnailViewModel <SCChatMediaMessageStateDelegate>
{
    SCBaseChatMedia *_baseChatMedia;
    id <SCReplyChatMessage> _message;
    UIImage *_videoOverlayThumbnailImage;
}

- (void).cxx_destruct;
- (_Bool)failedToSend;
- (id)recipient;
- (_Bool)sentByUser;
- (void)setFailed;
- (_Bool)isSent;
- (_Bool)isSending;
- (id)trackingType;
- (id)senderId;
- (id)conversationId;
- (id)videoURL;
- (void)fetchVideoOverlayThumbnailWithSize:(struct CGSize)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchVideoOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchOriginalImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2;
- (void)setLoaded;
- (void)_loadFromCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadMediaUserInitiated:(_Bool)arg1;
- (void)loadMedia;
- (void)loadMediaUserInitiated;
- (_Bool)shouldDisplayAnimatedImages;
- (_Bool)shouldDisplayFailedToSend;
- (_Bool)shouldDisplaySendingOverlay;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)readyForDisplay;
- (_Bool)mediaLoaded;
- (_Bool)mediaSaved;
- (_Bool)shouldCropCircularMedia;
- (_Bool)isCircular;
- (double)width;
- (double)height;
- (void)mediaFailedToLoadFromCache;
- (long long)mediaType;
- (id)trackingId;
- (id)mediaIdentifier;
- (_Bool)representsMedia:(id)arg1;
- (id)displayedMedia;
- (_Bool)useDisplayedMediaDirectly;
- (id)initWithReplyChatMessage:(id)arg1;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)containsVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

