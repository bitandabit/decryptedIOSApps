//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSearchActionModel, SCSearchThumbnail;

@interface SCSearchSnapFeedStoryViewModel : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_emoji;
    NSString *_category;
    SCSearchThumbnail *_thumbnail;
    double _timestampSecs;
    SCSearchActionModel *_longPressActionModel;
    SCSearchActionModel *_singleTapActionModel;
}

@property(readonly, copy, nonatomic) SCSearchActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, nonatomic) double timestampSecs; // @synthesize timestampSecs=_timestampSecs;
@property(readonly, copy, nonatomic) SCSearchThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 emoji:(id)arg3 category:(id)arg4 thumbnail:(id)arg5 timestampSecs:(double)arg6 longPressActionModel:(id)arg7 singleTapActionModel:(id)arg8;

@end

