//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSearchActionModel;

@interface SCSearchBrandStoryViewModel : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_thumbnailUrl;
    SCSearchActionModel *_singleTapActionModel;
}

@property(readonly, copy, nonatomic) SCSearchActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 thumbnailUrl:(id)arg3 singleTapActionModel:(id)arg4;

@end

