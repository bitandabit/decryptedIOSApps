//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SCCheetahStory;

@interface SCCheetahLoggingViewingSessionData : NSObject <NSCopying>
{
    _Bool _isSubitemViewingSession;
    NSDate *_currentStoryStartViewTimestamp;
    NSMutableSet *_uniqueViewedSubitemIds;
    NSDate *_currentlyPlayingMediaStartTime;
    NSMutableSet *_skippedSubitemIds;
    NSMutableDictionary *_subitemIdToIndex;
    SCCheetahStory *_story;
    unsigned long long _rerankingId;
    long long _itemPos;
    long long _itemSource;
    long long _entryEvent;
    NSDate *_viewSessionStartTime;
    double _mediaViewTime;
    NSString *_subitemId;
    NSString *_pageId;
    unsigned long long _numberOfSnapsViewed;
    long long _maxSubitemViewIndex;
    NSString *_maxSubitemIdView;
    NSDictionary *_fieldsOverrideDict;
}

@property(readonly, nonatomic) NSDictionary *fieldsOverrideDict; // @synthesize fieldsOverrideDict=_fieldsOverrideDict;
@property(readonly, nonatomic) NSString *maxSubitemIdView; // @synthesize maxSubitemIdView=_maxSubitemIdView;
@property(readonly, nonatomic) long long maxSubitemViewIndex; // @synthesize maxSubitemViewIndex=_maxSubitemViewIndex;
@property(readonly, nonatomic) unsigned long long numberOfSnapsViewed; // @synthesize numberOfSnapsViewed=_numberOfSnapsViewed;
@property(readonly, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) NSString *subitemId; // @synthesize subitemId=_subitemId;
@property(readonly, nonatomic) double mediaViewTime; // @synthesize mediaViewTime=_mediaViewTime;
@property(readonly, nonatomic) NSDate *viewSessionStartTime; // @synthesize viewSessionStartTime=_viewSessionStartTime;
@property(readonly, nonatomic) long long entryEvent; // @synthesize entryEvent=_entryEvent;
@property(readonly, nonatomic) long long itemSource; // @synthesize itemSource=_itemSource;
@property(readonly, nonatomic) long long itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, nonatomic) unsigned long long rerankingId; // @synthesize rerankingId=_rerankingId;
@property(readonly, nonatomic) SCCheetahStory *story; // @synthesize story=_story;
- (void).cxx_destruct;
- (long long)itemType;
- (unsigned long long)adjustedSnapIndexForSubitemId:(id)arg1;
- (unsigned long long)numberOfSnapsAvailable;
- (_Bool)updateSkippedSubitemId:(id)arg1;
- (void)resetAfterLoadingFromSavedCopyWithTime:(id)arg1;
- (double)getTotalMediaDurationSecs;
- (unsigned long long)numberOfUniqueSubitemsViewed;
- (void)subItemDidEndViewingAtTime:(id)arg1;
- (void)mediaStartedPlayingAtTime:(id)arg1;
- (void)viewingSubitemWithId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStory:(id)arg1 rerankingId:(unsigned long long)arg2 itemPos:(long long)arg3 itemSource:(long long)arg4 subitemId:(id)arg5 pageId:(id)arg6 entryEvent:(long long)arg7 viewSessionStartTime:(id)arg8 fieldsOverrideDict:(id)arg9;

@end
