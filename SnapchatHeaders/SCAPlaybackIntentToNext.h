//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAPlaybackIntentToNext : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *waitMs;
    NSNumber *bufferingTimeMs;
    NSNumber *intentToVideoPreparationStartTimeMs;
    NSNumber *videoPrepareTimeMs;
    NSNumber *intentToPlaylistStartSetupViewModelsTimeMs;
    NSNumber *playlistSetupViewModelsTimeMs;
    NSNumber *playerSessionTs;
    NSNumber *itemLoaded;
    NSNumber *mediaSizeByte;
    NSNumber *snapTimeSec;
    NSNumber *bandwidthMean;
    NSNumber *bandwidthMedian;
    NSNumber *bandwidthSampleSize;
    NSNumber *deviceScore;
    NSNumber *itemLoadedCount;
    NSNumber *withStreamingEnabled;
    long long playbackMode;
    long long playbackLoadPhase;
    long long playSource;
    long long entryEvent;
    long long featureMajorName;
    long long featureMinorName;
    long long itemType;
    long long viewSource;
    long long mediaType;
    long long itemLoadState;
    long long connectionClass;
    long long streamingFailureCode;
    NSString *itemId;
    NSString *itemGroupId;
    NSString *mediaResolution;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getMediaResolution;
- (void)setMediaResolution:(id)arg1;
- (id)getItemGroupId;
- (void)setItemGroupId:(id)arg1;
- (id)getItemId;
- (void)setItemId:(id)arg1;
- (long long)getStreamingFailureCode;
- (void)setStreamingFailureCode:(long long)arg1;
- (long long)getConnectionClass;
- (void)setConnectionClass:(long long)arg1;
- (long long)getItemLoadState;
- (void)setItemLoadState:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getViewSource;
- (void)setViewSource:(long long)arg1;
- (long long)getItemType;
- (void)setItemType:(long long)arg1;
- (long long)getFeatureMinorName;
- (void)setFeatureMinorName:(long long)arg1;
- (long long)getFeatureMajorName;
- (void)setFeatureMajorName:(long long)arg1;
- (long long)getEntryEvent;
- (void)setEntryEvent:(long long)arg1;
- (long long)getPlaySource;
- (void)setPlaySource:(long long)arg1;
- (long long)getPlaybackLoadPhase;
- (void)setPlaybackLoadPhase:(long long)arg1;
- (long long)getPlaybackMode;
- (void)setPlaybackMode:(long long)arg1;
- (_Bool)getWithStreamingEnabled;
- (void)setWithStreamingEnabled:(_Bool)arg1;
- (long long)getItemLoadedCount;
- (void)setItemLoadedCount:(long long)arg1;
- (long long)getDeviceScore;
- (void)setDeviceScore:(long long)arg1;
- (long long)getBandwidthSampleSize;
- (void)setBandwidthSampleSize:(long long)arg1;
- (double)getBandwidthMedian;
- (void)setBandwidthMedian:(double)arg1;
- (double)getBandwidthMean;
- (void)setBandwidthMean:(double)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (long long)getMediaSizeByte;
- (void)setMediaSizeByte:(long long)arg1;
- (_Bool)getItemLoaded;
- (void)setItemLoaded:(_Bool)arg1;
- (long long)getPlayerSessionTs;
- (void)setPlayerSessionTs:(long long)arg1;
- (long long)getPlaylistSetupViewModelsTimeMs;
- (void)setPlaylistSetupViewModelsTimeMs:(long long)arg1;
- (long long)getIntentToPlaylistStartSetupViewModelsTimeMs;
- (void)setIntentToPlaylistStartSetupViewModelsTimeMs:(long long)arg1;
- (long long)getVideoPrepareTimeMs;
- (void)setVideoPrepareTimeMs:(long long)arg1;
- (long long)getIntentToVideoPreparationStartTimeMs;
- (void)setIntentToVideoPreparationStartTimeMs:(long long)arg1;
- (long long)getBufferingTimeMs;
- (void)setBufferingTimeMs:(long long)arg1;
- (long long)getWaitMs;
- (void)setWaitMs:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

