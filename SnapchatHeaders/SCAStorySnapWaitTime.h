//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAStorySnapWaitTime : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *autoAdvanceIndex;
    NSNumber *mediaBytesSize;
    NSNumber *snapTimeSec;
    NSNumber *startNumBytesDownloaded;
    NSNumber *bandwidthMean;
    NSNumber *bandwidthMedian;
    NSNumber *bandwidthSampleSize;
    NSNumber *deviceScore;
    NSNumber *time;
    NSNumber *snapIndexPos;
    NSNumber *snapIndexCount;
    NSNumber *storySessionId;
    NSNumber *withStreamingEnabled;
    long long viewSource;
    long long mediaType;
    long long connectionClass;
    long long itemLoadState;
    long long storyType;
    long long storyTypeSpecific;
    NSString *storySnapId;
    NSString *type;
    NSString *previousAction;
    NSString *sessionId;
    NSString *geofence;
    NSString *posterId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_poster_id;
- (void)setGhost_poster_id:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (id)getGeofence;
- (void)setGeofence:(id)arg1;
- (id)getSessionId;
- (void)setSessionId:(id)arg1;
- (id)getPreviousAction;
- (void)setPreviousAction:(id)arg1;
- (id)getType;
- (void)setType:(id)arg1;
- (id)getStorySnapId;
- (void)setStorySnapId:(id)arg1;
- (long long)getStoryTypeSpecific;
- (void)setStoryTypeSpecific:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getItemLoadState;
- (void)setItemLoadState:(long long)arg1;
- (long long)getConnectionClass;
- (void)setConnectionClass:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getViewSource;
- (void)setViewSource:(long long)arg1;
- (_Bool)getWithStreamingEnabled;
- (void)setWithStreamingEnabled:(_Bool)arg1;
- (long long)getStorySessionId;
- (void)setStorySessionId:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (long long)getSnapIndexPos;
- (void)setSnapIndexPos:(long long)arg1;
- (long long)getTime;
- (void)setTime:(long long)arg1;
- (long long)getDeviceScore;
- (void)setDeviceScore:(long long)arg1;
- (long long)getBandwidthSampleSize;
- (void)setBandwidthSampleSize:(long long)arg1;
- (double)getBandwidthMedian;
- (void)setBandwidthMedian:(double)arg1;
- (double)getBandwidthMean;
- (void)setBandwidthMean:(double)arg1;
- (long long)getStartNumBytesDownloaded;
- (void)setStartNumBytesDownloaded:(long long)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (long long)getMediaBytesSize;
- (void)setMediaBytesSize:(long long)arg1;
- (long long)getAutoAdvanceIndex;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

