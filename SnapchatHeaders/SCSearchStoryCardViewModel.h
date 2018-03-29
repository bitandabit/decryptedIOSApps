//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCMedia, SCSearchActionButtonViewModel, SCSearchActionModel, SCSearchStoryCardColorTheme, SCSearchStoryIcon, SCSearchStreamingMediaInfo, SCSearchThumbnail, UIImage;

@interface SCSearchStoryCardViewModel : NSObject <NSCopying>
{
    _Bool _isStoryModerated;
    _Bool _enableVideoStreamingThumbnail;
    long long _cellStyle;
    long long _contentMode;
    SCSearchStoryCardColorTheme *_colorTheme;
    NSString *_storyID;
    NSString *_coverImageSnapID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_emoji;
    NSString *_category;
    double _timestampSecs;
    NSString *_snippet;
    NSString *_bottomActionTitle;
    NSString *_accessoryText;
    UIImage *_accessoryIcon;
    SCSearchActionModel *_bottomActionModel;
    SCSearchActionModel *_longPressActionModel;
    SCSearchActionModel *_singleTapActionModel;
    SCSearchActionButtonViewModel *_actionButtonViewModel;
    NSString *_debugSubtitle;
    SCSearchActionModel *_debugActionModel;
    SCSearchStoryIcon *_icon;
    SCSearchThumbnail *_thumbnail;
    SCMedia *_videoThumbnail;
    SCSearchStreamingMediaInfo *_videoStreamingThumbnail;
}

@property(readonly, nonatomic) _Bool enableVideoStreamingThumbnail; // @synthesize enableVideoStreamingThumbnail=_enableVideoStreamingThumbnail;
@property(readonly, copy, nonatomic) SCSearchStreamingMediaInfo *videoStreamingThumbnail; // @synthesize videoStreamingThumbnail=_videoStreamingThumbnail;
@property(readonly, copy, nonatomic) SCMedia *videoThumbnail; // @synthesize videoThumbnail=_videoThumbnail;
@property(readonly, copy, nonatomic) SCSearchThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) SCSearchStoryIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) SCSearchActionModel *debugActionModel; // @synthesize debugActionModel=_debugActionModel;
@property(readonly, copy, nonatomic) NSString *debugSubtitle; // @synthesize debugSubtitle=_debugSubtitle;
@property(readonly, nonatomic) _Bool isStoryModerated; // @synthesize isStoryModerated=_isStoryModerated;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *actionButtonViewModel; // @synthesize actionButtonViewModel=_actionButtonViewModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *bottomActionModel; // @synthesize bottomActionModel=_bottomActionModel;
@property(readonly, copy, nonatomic) UIImage *accessoryIcon; // @synthesize accessoryIcon=_accessoryIcon;
@property(readonly, copy, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(readonly, copy, nonatomic) NSString *bottomActionTitle; // @synthesize bottomActionTitle=_bottomActionTitle;
@property(readonly, copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(readonly, nonatomic) double timestampSecs; // @synthesize timestampSecs=_timestampSecs;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *coverImageSnapID; // @synthesize coverImageSnapID=_coverImageSnapID;
@property(readonly, copy, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
@property(readonly, copy, nonatomic) SCSearchStoryCardColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCellStyle:(long long)arg1 contentMode:(long long)arg2 colorTheme:(id)arg3 storyID:(id)arg4 coverImageSnapID:(id)arg5 title:(id)arg6 subtitle:(id)arg7 emoji:(id)arg8 category:(id)arg9 timestampSecs:(double)arg10 snippet:(id)arg11 bottomActionTitle:(id)arg12 accessoryText:(id)arg13 accessoryIcon:(id)arg14 bottomActionModel:(id)arg15 longPressActionModel:(id)arg16 singleTapActionModel:(id)arg17 actionButtonViewModel:(id)arg18 isStoryModerated:(_Bool)arg19 debugSubtitle:(id)arg20 debugActionModel:(id)arg21 icon:(id)arg22 thumbnail:(id)arg23 videoThumbnail:(id)arg24 videoStreamingThumbnail:(id)arg25 enableVideoStreamingThumbnail:(_Bool)arg26;

@end

