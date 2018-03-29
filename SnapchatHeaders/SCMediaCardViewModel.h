//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface SCMediaCardViewModel : NSObject
{
    _Bool _shouldShowDefaultThumbnail;
    _Bool _isGrayScale;
    _Bool _shouldActOnGesture;
    _Bool _shouldUseV3Cache;
    _Bool _disableV2ContextMenu;
    NSString *_thumbnailCacheId;
    UIImage *_thumbnailImage;
    NSString *_title;
    NSString *_subtitle;
}

@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool disableV2ContextMenu; // @synthesize disableV2ContextMenu=_disableV2ContextMenu;
@property(readonly, nonatomic) _Bool shouldUseV3Cache; // @synthesize shouldUseV3Cache=_shouldUseV3Cache;
@property(nonatomic) _Bool shouldActOnGesture; // @synthesize shouldActOnGesture=_shouldActOnGesture;
@property(nonatomic) _Bool isGrayScale; // @synthesize isGrayScale=_isGrayScale;
@property(nonatomic) _Bool shouldShowDefaultThumbnail; // @synthesize shouldShowDefaultThumbnail=_shouldShowDefaultThumbnail;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, copy, nonatomic) NSString *thumbnailCacheId; // @synthesize thumbnailCacheId=_thumbnailCacheId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)trackingId;
- (_Bool)isCircularThumbnail;
- (id)defaultThumbnailImage;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)_subtitleColor;
- (id)_titleColor;
- (id)accessoryIcon;
- (id)actionText;
- (id)attributedSubtitle;
- (id)attributedTitle;
- (long long)type;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 isGrayScale:(_Bool)arg3 shouldActOnGesture:(_Bool)arg4 disableV2ContextMenu:(_Bool)arg5;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 thumbnailCacheId:(id)arg3 shouldShowDefaultThumbnail:(_Bool)arg4 isGrayScale:(_Bool)arg5 shouldActOnGesture:(_Bool)arg6 shouldUseV3Cache:(_Bool)arg7 disableV2ContextMenu:(_Bool)arg8;

@end

