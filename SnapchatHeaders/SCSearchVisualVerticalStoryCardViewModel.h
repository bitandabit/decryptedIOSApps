//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCMedia, SCSearchActionModel, SCSearchStoryIcon, SCSearchStreamingMediaInfo, SCSearchThumbnail;

@interface SCSearchVisualVerticalStoryCardViewModel : NSObject <NSCopying>
{
    _Bool _isStoryModerated;
    _Bool _shouldPlayVideoImmediately;
    _Bool _enableVideoStreamingThumbnail;
    NSString *_title;
    NSString *_subtitle;
    NSString *_emoji;
    NSString *_category;
    double _timestampSecs;
    SCSearchActionModel *_longPressActionModel;
    SCSearchActionModel *_singleTapActionModel;
    NSString *_debugSubtitle;
    SCSearchActionModel *_debugActionModel;
    SCSearchStoryIcon *_icon;
    SCSearchThumbnail *_thumbnail;
    SCMedia *_videoThumbnail;
    SCSearchStreamingMediaInfo *_videoStreamingThumbnail;
    struct UIEdgeInsets _cardInsets;
    struct UIEdgeInsets _iconInsets;
    struct UIEdgeInsets _categoryInsets;
}

@property(readonly, nonatomic) _Bool enableVideoStreamingThumbnail; // @synthesize enableVideoStreamingThumbnail=_enableVideoStreamingThumbnail;
@property(readonly, nonatomic) _Bool shouldPlayVideoImmediately; // @synthesize shouldPlayVideoImmediately=_shouldPlayVideoImmediately;
@property(readonly, nonatomic) struct UIEdgeInsets categoryInsets; // @synthesize categoryInsets=_categoryInsets;
@property(readonly, nonatomic) struct UIEdgeInsets iconInsets; // @synthesize iconInsets=_iconInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardInsets; // @synthesize cardInsets=_cardInsets;
@property(readonly, copy, nonatomic) SCSearchStreamingMediaInfo *videoStreamingThumbnail; // @synthesize videoStreamingThumbnail=_videoStreamingThumbnail;
@property(readonly, copy, nonatomic) SCMedia *videoThumbnail; // @synthesize videoThumbnail=_videoThumbnail;
@property(readonly, copy, nonatomic) SCSearchThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) SCSearchStoryIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) SCSearchActionModel *debugActionModel; // @synthesize debugActionModel=_debugActionModel;
@property(readonly, copy, nonatomic) NSString *debugSubtitle; // @synthesize debugSubtitle=_debugSubtitle;
@property(readonly, nonatomic) _Bool isStoryModerated; // @synthesize isStoryModerated=_isStoryModerated;
@property(readonly, copy, nonatomic) SCSearchActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, nonatomic) double timestampSecs; // @synthesize timestampSecs=_timestampSecs;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 emoji:(id)arg3 category:(id)arg4 timestampSecs:(double)arg5 longPressActionModel:(id)arg6 singleTapActionModel:(id)arg7 isStoryModerated:(_Bool)arg8 debugSubtitle:(id)arg9 debugActionModel:(id)arg10 icon:(id)arg11 thumbnail:(id)arg12 videoThumbnail:(id)arg13 videoStreamingThumbnail:(id)arg14 cardInsets:(struct UIEdgeInsets)arg15 iconInsets:(struct UIEdgeInsets)arg16 categoryInsets:(struct UIEdgeInsets)arg17 shouldPlayVideoImmediately:(_Bool)arg18 enableVideoStreamingThumbnail:(_Bool)arg19;

@end

