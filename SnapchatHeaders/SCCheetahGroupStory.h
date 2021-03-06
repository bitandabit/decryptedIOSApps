//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSearchSnapMedia;

@interface SCCheetahGroupStory : NSObject <NSCopying, NSCoding>
{
    _Bool _isGeoStory;
    _Bool _isCustomStory;
    _Bool _isGroupCreatedByUser;
    float _rawGroupScore;
    float _maxGroupScore;
    NSString *_title;
    NSArray *_posters;
    SCSearchSnapMedia *_thumbnailStorySnap;
    NSString *_groupStoryId;
    double _lastPostedToStoryTimestampSecs;
    double _groupCreationTimestampSecs;
    double _displayTimestampSecs;
}

@property(readonly, nonatomic) double displayTimestampSecs; // @synthesize displayTimestampSecs=_displayTimestampSecs;
@property(readonly, nonatomic) double groupCreationTimestampSecs; // @synthesize groupCreationTimestampSecs=_groupCreationTimestampSecs;
@property(readonly, nonatomic) double lastPostedToStoryTimestampSecs; // @synthesize lastPostedToStoryTimestampSecs=_lastPostedToStoryTimestampSecs;
@property(readonly, nonatomic) _Bool isGroupCreatedByUser; // @synthesize isGroupCreatedByUser=_isGroupCreatedByUser;
@property(readonly, nonatomic) _Bool isCustomStory; // @synthesize isCustomStory=_isCustomStory;
@property(readonly, nonatomic) _Bool isGeoStory; // @synthesize isGeoStory=_isGeoStory;
@property(readonly, nonatomic) float maxGroupScore; // @synthesize maxGroupScore=_maxGroupScore;
@property(readonly, nonatomic) float rawGroupScore; // @synthesize rawGroupScore=_rawGroupScore;
@property(readonly, copy, nonatomic) NSString *groupStoryId; // @synthesize groupStoryId=_groupStoryId;
@property(readonly, copy, nonatomic) SCSearchSnapMedia *thumbnailStorySnap; // @synthesize thumbnailStorySnap=_thumbnailStorySnap;
@property(readonly, copy, nonatomic) NSArray *posters; // @synthesize posters=_posters;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 posters:(id)arg2 thumbnailStorySnap:(id)arg3 groupStoryId:(id)arg4 rawGroupScore:(float)arg5 maxGroupScore:(float)arg6 isGeoStory:(_Bool)arg7 isCustomStory:(_Bool)arg8 isGroupCreatedByUser:(_Bool)arg9 lastPostedToStoryTimestampSecs:(double)arg10 groupCreationTimestampSecs:(double)arg11 displayTimestampSecs:(double)arg12;
- (id)initWithCoder:(id)arg1;

@end

