//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaThumbnailViewModel.h"

@class NSString, SCChatMediaContent;

@interface SCReplyMessageThumbnailViewModelV3 : SCBaseMediaThumbnailViewModel
{
    SCChatMediaContent *_replyMedia;
    NSString *_conversationId;
    NSString *_senderUsername;
    NSString *_messageId;
}

- (void)setMessageId:(id)arg1;
- (id)messageId;
- (void)setSenderUsername:(id)arg1;
- (id)senderUsername;
- (void)setConversationId:(id)arg1;
- (id)conversationId;
- (void).cxx_destruct;
- (id)videoURL;
- (void)fetchVideoOverlayThumbnailWithSize:(struct CGSize)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchVideoOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchOriginalImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2;
- (void)loadMedia;
- (_Bool)shouldDisplayAnimatedImages;
- (_Bool)shouldDisplayFailedToSend;
- (_Bool)shouldDisplaySendingOverlay;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)readyForDisplay;
- (_Bool)mediaLoaded;
- (_Bool)shouldCropCircularMedia;
- (_Bool)isCircular;
- (double)width;
- (double)height;
- (long long)mediaType;
- (id)trackingId;
- (id)mediaIdentifier;
- (_Bool)representsMedia:(id)arg1;
- (id)displayedMedia;
- (_Bool)useDisplayedMediaDirectly;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)containsVideo;
- (id)initWithChatMediaContent:(id)arg1 message:(id)arg2;

@end

