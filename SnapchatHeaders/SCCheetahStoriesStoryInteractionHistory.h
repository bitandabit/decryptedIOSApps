//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCCheetahStoriesInteractionEventBooleanType, SCCheetahStoriesInteractionEventFloatType, SCCheetahStoriesInteractionEventIntegerType;

@interface SCCheetahStoriesStoryInteractionHistory : NSObject <NSCopying, NSCoding>
{
    unsigned int _storyDurationSec;
    unsigned int _entryEvent;
    unsigned int _exitEvent;
    unsigned int _longImpressionCount;
    unsigned int _numSnapsViewedFromLatestVersion;
    unsigned int _totalWatchTimeOnLatestVersion;
    unsigned int _totalImpressionTimeOnLatestVersion;
    unsigned int _numSnapsInLatestVersion;
    unsigned long long _storyDedupeFp;
    SCCheetahStoriesInteractionEventBooleanType *_isSubscribed;
    SCCheetahStoriesInteractionEventBooleanType *_isHidden;
    SCCheetahStoriesInteractionEventFloatType *_shortImpressionScore;
    SCCheetahStoriesInteractionEventFloatType *_longImpressionScore;
    SCCheetahStoriesInteractionEventFloatType *_shortViewScore;
    SCCheetahStoriesInteractionEventFloatType *_longViewScore;
    NSString *_longImpressionThumbnailId;
    NSString *_longViewThumbnailId;
    unsigned long long _latestVersion;
    unsigned long long _latestWatchedVersion;
    unsigned long long _tapStoryKey;
    SCCheetahStoriesInteractionEventIntegerType *_numberOfWatches;
    SCCheetahStoriesInteractionEventIntegerType *_snapCompletionPercent;
    SCCheetahStoriesInteractionEventFloatType *_decayedNumSnapsViewed;
    SCCheetahStoriesInteractionEventFloatType *_decayedTotalWatchTime;
    SCCheetahStoriesInteractionEventFloatType *_decayedTotalImpressionTime;
    long long _storyType;
}

@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventFloatType *decayedTotalImpressionTime; // @synthesize decayedTotalImpressionTime=_decayedTotalImpressionTime;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventFloatType *decayedTotalWatchTime; // @synthesize decayedTotalWatchTime=_decayedTotalWatchTime;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventFloatType *decayedNumSnapsViewed; // @synthesize decayedNumSnapsViewed=_decayedNumSnapsViewed;
@property(readonly, nonatomic) unsigned int numSnapsInLatestVersion; // @synthesize numSnapsInLatestVersion=_numSnapsInLatestVersion;
@property(readonly, nonatomic) unsigned int totalImpressionTimeOnLatestVersion; // @synthesize totalImpressionTimeOnLatestVersion=_totalImpressionTimeOnLatestVersion;
@property(readonly, nonatomic) unsigned int totalWatchTimeOnLatestVersion; // @synthesize totalWatchTimeOnLatestVersion=_totalWatchTimeOnLatestVersion;
@property(readonly, nonatomic) unsigned int numSnapsViewedFromLatestVersion; // @synthesize numSnapsViewedFromLatestVersion=_numSnapsViewedFromLatestVersion;
@property(readonly, nonatomic) unsigned int longImpressionCount; // @synthesize longImpressionCount=_longImpressionCount;
@property(readonly, nonatomic) unsigned int exitEvent; // @synthesize exitEvent=_exitEvent;
@property(readonly, nonatomic) unsigned int entryEvent; // @synthesize entryEvent=_entryEvent;
@property(readonly, nonatomic) unsigned int storyDurationSec; // @synthesize storyDurationSec=_storyDurationSec;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventIntegerType *snapCompletionPercent; // @synthesize snapCompletionPercent=_snapCompletionPercent;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventIntegerType *numberOfWatches; // @synthesize numberOfWatches=_numberOfWatches;
@property(readonly, nonatomic) unsigned long long tapStoryKey; // @synthesize tapStoryKey=_tapStoryKey;
@property(readonly, nonatomic) unsigned long long latestWatchedVersion; // @synthesize latestWatchedVersion=_latestWatchedVersion;
@property(readonly, nonatomic) unsigned long long latestVersion; // @synthesize latestVersion=_latestVersion;
@property(readonly, copy, nonatomic) NSString *longViewThumbnailId; // @synthesize longViewThumbnailId=_longViewThumbnailId;
@property(readonly, copy, nonatomic) NSString *longImpressionThumbnailId; // @synthesize longImpressionThumbnailId=_longImpressionThumbnailId;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventFloatType *longViewScore; // @synthesize longViewScore=_longViewScore;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventFloatType *shortViewScore; // @synthesize shortViewScore=_shortViewScore;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventFloatType *longImpressionScore; // @synthesize longImpressionScore=_longImpressionScore;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventFloatType *shortImpressionScore; // @synthesize shortImpressionScore=_shortImpressionScore;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventBooleanType *isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, copy, nonatomic) SCCheetahStoriesInteractionEventBooleanType *isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, nonatomic) unsigned long long storyDedupeFp; // @synthesize storyDedupeFp=_storyDedupeFp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryDedupeFp:(unsigned long long)arg1 isSubscribed:(id)arg2 isHidden:(id)arg3 shortImpressionScore:(id)arg4 longImpressionScore:(id)arg5 shortViewScore:(id)arg6 longViewScore:(id)arg7 longImpressionThumbnailId:(id)arg8 longViewThumbnailId:(id)arg9 latestVersion:(unsigned long long)arg10 latestWatchedVersion:(unsigned long long)arg11 tapStoryKey:(unsigned long long)arg12 numberOfWatches:(id)arg13 snapCompletionPercent:(id)arg14 storyDurationSec:(unsigned int)arg15 entryEvent:(unsigned int)arg16 exitEvent:(unsigned int)arg17 longImpressionCount:(unsigned int)arg18 numSnapsViewedFromLatestVersion:(unsigned int)arg19 totalWatchTimeOnLatestVersion:(unsigned int)arg20 totalImpressionTimeOnLatestVersion:(unsigned int)arg21 numSnapsInLatestVersion:(unsigned int)arg22 decayedNumSnapsViewed:(id)arg23 decayedTotalWatchTime:(id)arg24 decayedTotalImpressionTime:(id)arg25 storyType:(long long)arg26;
- (id)initWithCoder:(id)arg1;
- (_Bool)wasFullyViewedRecently;
- (long long)_compareInteractionHistoryByLongImpression:(id)arg1;
- (long long)_compareInteractionHistoryByNumberOfWatches:(id)arg1;
- (long long)compareWithInteractionHistory:(id)arg1;

@end

