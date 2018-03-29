//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASnapViewBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAStorySnapViewBase : SCASnapViewBase <MapSerializable, NSCopying>
{
    NSNumber *withAnimated;
    NSNumber *multiSnapCount;
    NSNumber *multiSnapIndex;
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *swipeUp;
    NSNumber *camera;
    NSNumber *rollMaxDegree;
    NSNumber *rollMinDegree;
    NSNumber *playbackVolume;
    NSNumber *level;
    NSNumber *isExplorable;
    NSNumber *isExplorableTs;
    NSNumber *autoAdvanceIndex;
    NSNumber *storySessionId;
    NSNumber *usingPlaylist;
    NSNumber *tapPositionX;
    NSNumber *tapPositionY;
    NSNumber *isPostable;
    NSNumber *friendLinkHop;
    NSNumber *groupStoryPosterCount;
    NSNumber *groupStoryViewerCount;
    NSNumber *mapSessionId;
    NSNumber *mapZoomLevel;
    NSNumber *distanceFromUserMeter;
    NSNumber *distanceFromFriendMinMeter;
    long long storyType;
    long long source;
    long long deletedSegments;
    long long exitEvent;
    long long playbackAudio;
    long long storyTypeSpecific;
    long long mapSourceType;
    long long mapStoryType;
    NSString *geoFence;
    NSString *subpageName;
    NSString *deepLinkId;
    NSString *posterId;
    NSString *storySnapId;
    NSString *submissionId;
    NSString *storyParentSnapId;
    NSString *storyRootSnapId;
    NSString *hydraResultId;
    NSString *groupStoryId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_poster_id;
- (void)setGhost_poster_id:(id)arg1;
- (id)getGroupStoryId;
- (void)setGroupStoryId:(id)arg1;
- (id)getHydraResultId;
- (void)setHydraResultId:(id)arg1;
- (id)getStoryRootSnapId;
- (void)setStoryRootSnapId:(id)arg1;
- (id)getStoryParentSnapId;
- (void)setStoryParentSnapId:(id)arg1;
- (id)getSubmissionId;
- (void)setSubmissionId:(id)arg1;
- (id)getStorySnapId;
- (void)setStorySnapId:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (id)getDeepLinkId;
- (void)setDeepLinkId:(id)arg1;
- (id)getSubpageName;
- (void)setSubpageName:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (long long)getMapStoryType;
- (void)setMapStoryType:(long long)arg1;
- (long long)getMapSourceType;
- (void)setMapSourceType:(long long)arg1;
- (long long)getStoryTypeSpecific;
- (void)setStoryTypeSpecific:(long long)arg1;
- (long long)getPlaybackAudio;
- (void)setPlaybackAudio:(long long)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (long long)getDeletedSegments;
- (void)setDeletedSegments:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (double)getDistanceFromFriendMinMeter;
- (void)setDistanceFromFriendMinMeter:(double)arg1;
- (double)getDistanceFromUserMeter;
- (void)setDistanceFromUserMeter:(double)arg1;
- (double)getMapZoomLevel;
- (void)setMapZoomLevel:(double)arg1;
- (long long)getMapSessionId;
- (void)setMapSessionId:(long long)arg1;
- (long long)getGroupStoryViewerCount;
- (void)setGroupStoryViewerCount:(long long)arg1;
- (long long)getGroupStoryPosterCount;
- (void)setGroupStoryPosterCount:(long long)arg1;
- (long long)getFriendLinkHop;
- (void)setFriendLinkHop:(long long)arg1;
- (_Bool)getIsPostable;
- (void)setIsPostable:(_Bool)arg1;
- (long long)getTapPositionY;
- (void)setTapPositionY:(long long)arg1;
- (long long)getTapPositionX;
- (void)setTapPositionX:(long long)arg1;
- (_Bool)getUsingPlaylist;
- (void)setUsingPlaylist:(_Bool)arg1;
- (long long)getStorySessionId;
- (void)setStorySessionId:(long long)arg1;
- (long long)getAutoAdvanceIndex;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (double)getIsExplorableTs;
- (void)setIsExplorableTs:(double)arg1;
- (_Bool)getIsExplorable;
- (void)setIsExplorable:(_Bool)arg1;
- (long long)getLevel;
- (void)setLevel:(long long)arg1;
- (double)getPlaybackVolume;
- (void)setPlaybackVolume:(double)arg1;
- (double)getRollMinDegree;
- (void)setRollMinDegree:(double)arg1;
- (double)getRollMaxDegree;
- (void)setRollMaxDegree:(double)arg1;
- (long long)getCamera;
- (void)setCamera:(long long)arg1;
- (_Bool)getSwipeUp;
- (void)setSwipeUp:(_Bool)arg1;
- (long long)getSnapIndexPos;
- (void)setSnapIndexPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (long long)getMultiSnapIndex;
- (void)setMultiSnapIndex:(long long)arg1;
- (long long)getMultiSnapCount;
- (void)setMultiSnapCount:(long long)arg1;
- (_Bool)getWithAnimated;
- (void)setWithAnimated:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
