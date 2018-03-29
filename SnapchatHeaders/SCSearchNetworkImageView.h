//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"

@class NSString, SCNetworkImageViewSynchronizer, SCSearchEventListenerAnnouncer, SCSearchNetworkImage, UIImage, UIImageView;
@protocol SCSearchItemDownloaderHandling, SCSearchItemDownloading;

@interface SCSearchNetworkImageView : UIView <SCSearchEventAnnouncing, SCSearchEventListener>
{
    id <SCSearchItemDownloading> _imageDownloader;
    id <SCSearchItemDownloaderHandling> _imageLoaderHandler;
    SCSearchNetworkImage *_displayedNetworkImage;
    UIImageView *_imageView;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    CDUnknownBlockType _pendingImageBlock;
    UIImage *_loadingImage;
    SCSearchNetworkImage *_networkImage;
    SCNetworkImageViewSynchronizer *_imageSynchronizer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCNetworkImageViewSynchronizer *imageSynchronizer; // @synthesize imageSynchronizer=_imageSynchronizer;
@property(retain, nonatomic) SCSearchNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
@property(retain, nonatomic) id <SCSearchItemDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
- (void).cxx_destruct;
- (void)_announceDownloadEvent:(id)arg1 extraData:(id)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_setPendingImageIfPossibleWithPendingImageBlock:(CDUnknownBlockType)arg1;
- (void)_syncDisplayedImageIfNecessary;
- (void)_setLoadingImage;
- (void)_setSuccessImageWithNetworkImage:(id)arg1 image:(id)arg2;
- (void)_updateFailureWithNetworkImage:(id)arg1;
- (void)_updateSuccessWithNetworkImage:(id)arg1 image:(id)arg2 animated:(_Bool)arg3;
- (void)_handleImageLoaderFailureHandlerWithRequestedImage:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleImageLoaderCompletionHandlerWithRequestedImage:(id)arg1 resultImage:(id)arg2 downloadStartTime:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadNetworkImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) long long contentMode;
- (void)setNetworkImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

