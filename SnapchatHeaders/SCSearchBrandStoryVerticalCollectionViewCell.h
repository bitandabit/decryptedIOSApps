//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCSearchActionable-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"

@class NSString, SCGradientView, SCSearchActionModel, SCSearchEventListenerAnnouncer, SCSearchNetworkImageView, UILabel;
@protocol SCSearchActionHandling, SCSearchItemDownloading;

@interface SCSearchBrandStoryVerticalCollectionViewCell : SCSearchCollectionViewCell <SCSearchActionable, SCSearchEventAnnouncing, SCSearchEventListener>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_adLabel;
    SCSearchNetworkImageView *_storyCoverImageView;
    SCGradientView *_gradientView;
    SCSearchActionModel *_singleTapActionModel;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    id <SCSearchActionHandling> _actionHandler;
    id _viewModel;
    id <SCSearchItemDownloading> _imageDownloader;
    id <SCSearchItemDownloading> _thumbnailDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCSearchItemDownloading> thumbnailDownloader; // @synthesize thumbnailDownloader=_thumbnailDownloader;
@property(retain, nonatomic) id <SCSearchItemDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)viewModel;
@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_updateStoryCoverImage:(id)arg1 requestedMediaUrl:(id)arg2;
- (void)_compareAndUpdateViewModelIfNeeded:(id)arg1;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
