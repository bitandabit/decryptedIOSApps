//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCSearchActionable-Protocol.h"

@class NSString, SCBitmojiManager, SCSearchFriendStoryThumbnailDownloader, SCSearchImageDownloader, SCSearchProfilePictureThumbnail, UIImageView, UILabel, UIView;
@protocol SCSearchActionHandling;

@interface SCSearchSnapFeedFriendStoryCollectionViewCell : SCSearchCollectionViewCell <SCSearchActionable>
{
    UILabel *_displayNameLabel;
    UILabel *_subtitleLabel;
    UIImageView *_thumbnailView;
    UIView *_circleView;
    SCSearchProfilePictureThumbnail *_profilePictureView;
    id <SCSearchActionHandling> _actionHandler;
    id _viewModel;
    SCSearchImageDownloader *_imageDownloader;
    SCSearchFriendStoryThumbnailDownloader *_thumbnailDownloader;
    SCBitmojiManager *_bitmojiManager;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) SCBitmojiManager *bitmojiManager; // @synthesize bitmojiManager=_bitmojiManager;
@property(retain, nonatomic) SCSearchFriendStoryThumbnailDownloader *thumbnailDownloader; // @synthesize thumbnailDownloader=_thumbnailDownloader;
@property(retain, nonatomic) SCSearchImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)viewModel;
@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (id)_SCSearchFormattedDateStringWithTimeInterval:(double)arg1;
- (void)_updateThumbnailViewWithImage:(id)arg1;
- (void)_updateProfileImageWithViewModel:(id)arg1;
- (void)_updateWithViewModel:(id)arg1;
- (void)_layoutWithViewModel;
- (void)_compareAndUpdateViewModelIfNeeded:(id)arg1;
- (_Bool)shouldShowBackgroundView;
- (_Bool)hasOverridedLongPressAction;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

