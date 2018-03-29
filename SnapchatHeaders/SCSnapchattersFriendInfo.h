//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchattersFriendSubtypeInfo;

@interface SCSnapchattersFriendInfo : NSObject <NSCopying>
{
    _Bool _canSeeCustomStories;
    _Bool _isStoryMuted;
    SCSnapchattersFriendSubtypeInfo *_subtypeInfo;
    double _addFriendTimestamp;
}

@property(readonly, nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(readonly, nonatomic) _Bool canSeeCustomStories; // @synthesize canSeeCustomStories=_canSeeCustomStories;
@property(readonly, nonatomic) double addFriendTimestamp; // @synthesize addFriendTimestamp=_addFriendTimestamp;
@property(readonly, copy, nonatomic) SCSnapchattersFriendSubtypeInfo *subtypeInfo; // @synthesize subtypeInfo=_subtypeInfo;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubtypeInfo:(id)arg1 addFriendTimestamp:(double)arg2 canSeeCustomStories:(_Bool)arg3 isStoryMuted:(_Bool)arg4;

@end
