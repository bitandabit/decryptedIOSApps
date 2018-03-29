//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIView;
@protocol SCCachingMediaRequest, SCPerforming, SCStickerProtocol;

@interface SCStickerPickerStickerCell : UICollectionViewCell
{
    UILabel *_label;
    UIImageView *_stickerImageView;
    UIActivityIndicatorView *_stickerImageLoadingView;
    UIView *_activeView;
    id <SCCachingMediaRequest> _thumbnailRequest;
    id <SCPerforming> _performer;
    CDUnknownBlockType _delayShowActivityViewBlock;
    long long _numDisplayed;
    long long _numEndDisplayed;
    double _startTime;
    UIImageView *_backgroundImageView;
    _Bool _canTapToReload;
    id <SCStickerProtocol> _sticker;
    unsigned long long _sourceType;
    UIImage *_previewImage;
}

+ (_Bool)_isTallAspectRatioGeoFilterImage:(id)arg1;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) _Bool canTapToReload; // @synthesize canTapToReload=_canTapToReload;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, copy, nonatomic) id <SCStickerProtocol> sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (double)emojiFontSize;
- (void)shrink;
- (void)grow;
- (_Bool)isStickerReady;
- (void)stopAnimatingSticker:(id)arg1;
- (void)_setImageStickerWithUserSession:(id)arg1 contexts:(id)arg2;
- (void)_setEmojiLabel;
- (void)_setEmojiSticker;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)prepareForReuse;
- (void)setSticker:(id)arg1 userSession:(id)arg2 contexts:(id)arg3;
@property(readonly, copy, nonatomic) UIImage *stickerImage;
- (void)layoutSubviews;

@end
