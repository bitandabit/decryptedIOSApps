//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCCheetahStoryLoggingInfo;

@interface SCCheetahImpressionViewItem : NSObject <NSCopying>
{
    _Bool _isProminent;
    _Bool _hasVideoThumbnail;
    _Bool _tileAutoPlayed;
    NSString *_identifier;
    NSDate *_date;
    SCCheetahStoryLoggingInfo *_storyLoggingInfo;
    long long _itemPos;
    long long _source;
    struct CGRect _frame;
}

@property(readonly, nonatomic) _Bool tileAutoPlayed; // @synthesize tileAutoPlayed=_tileAutoPlayed;
@property(readonly, nonatomic) _Bool hasVideoThumbnail; // @synthesize hasVideoThumbnail=_hasVideoThumbnail;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool isProminent; // @synthesize isProminent=_isProminent;
@property(readonly, nonatomic) long long itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, copy, nonatomic) SCCheetahStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 frame:(struct CGRect)arg2 date:(id)arg3 storyLoggingInfo:(id)arg4 itemPos:(long long)arg5 isProminent:(_Bool)arg6 source:(long long)arg7 hasVideoThumbnail:(_Bool)arg8 tileAutoPlayed:(_Bool)arg9;

@end

