//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMediaChatViewModel.h"

#import "SCChatUploadableMediaForwarder-Protocol.h"

@class NSString;
@protocol SCChatSingleMediaThumbnailViewModel;

@interface SCDiscoverSnapChatViewModel : SCMediaChatViewModel <SCChatUploadableMediaForwarder>
{
    id <SCChatSingleMediaThumbnailViewModel> _thumbnailViewModel;
}

- (void).cxx_destruct;
- (id)updatedThumbnailViewModel;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3;
- (id)_discoverMediaBlobMetadata;
- (_Bool)_isImage;
- (_Bool)_isVideo;
- (id)forwardButtonString;
- (_Bool)isReadyToForward;
- (id)forwardPreviewViewModel;
- (id)prepareMediaToUpload;
- (void)forwardMedia:(id)arg1 toRecipients:(id)arg2 mischefs:(id)arg3 additionalText:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
