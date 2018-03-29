//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString, SCStoriesThumbnailMedia;

@interface SCStoriesFriendFeedSummary : SCDocObject <NSCopying>
{
    _Bool _hasUnviewedStories;
    NSString *_feedId;
    long long _type;
    SCStoriesThumbnailMedia *_thumbnail;
    double _expirationDate;
    long long _numActiveStories;
    double _mostRecentStoryTimestamp;
    double _mostRecentUnviewedTimestamp;
    double _mostRecentViewedTimestamp;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1;
+ (const char *)table;
@property(readonly, nonatomic) double mostRecentViewedTimestamp; // @synthesize mostRecentViewedTimestamp=_mostRecentViewedTimestamp;
@property(readonly, nonatomic) double mostRecentUnviewedTimestamp; // @synthesize mostRecentUnviewedTimestamp=_mostRecentUnviewedTimestamp;
@property(readonly, nonatomic) double mostRecentStoryTimestamp; // @synthesize mostRecentStoryTimestamp=_mostRecentStoryTimestamp;
@property(readonly, nonatomic) _Bool hasUnviewedStories; // @synthesize hasUnviewedStories=_hasUnviewedStories;
@property(readonly, nonatomic) long long numActiveStories; // @synthesize numActiveStories=_numActiveStories;
@property(readonly, nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) SCStoriesThumbnailMedia *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedId:(id)arg1 type:(long long)arg2 thumbnail:(id)arg3 expirationDate:(double)arg4 numActiveStories:(long long)arg5 hasUnviewedStories:(_Bool)arg6 mostRecentStoryTimestamp:(double)arg7 mostRecentUnviewedTimestamp:(double)arg8 mostRecentViewedTimestamp:(double)arg9;

@end
