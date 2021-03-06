//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCBitmojiAvatarVisibleDelegate-Protocol.h"

@class SCBitmojiAvatarViewModel, SCLazy;
@protocol SCSearchItemDownloading;

@interface SCBitmojiAvatarView : UIView <SCBitmojiAvatarVisibleDelegate>
{
    SCLazy *_emojiLabel;
    SCLazy *_bitmojiNetworkImageView;
    SCBitmojiAvatarViewModel *_viewModel;
    id <SCSearchItemDownloading> _imageDownloader;
}

@property(retain, nonatomic) id <SCSearchItemDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCBitmojiAvatarViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)isVisible;
- (void)_showEmojiLabelWithAttributedText:(id)arg1;
- (void)_updateBitmojiNetworkImageWithFallBackImage:(id)arg1 viewModel:(id)arg2;
- (void)_showBitmojiNetworkImageViewWithNetworkImage:(id)arg1 loadingImage:(id)arg2 fallbackImage:(id)arg3 viewModel:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

