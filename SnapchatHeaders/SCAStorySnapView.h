//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAStorySnapViewBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAStorySnapView : SCAStorySnapViewBase <MapSerializable, NSCopying>
{
    NSNumber *viewLocation;
    NSNumber *collectionPos;
    NSNumber *deviceScore;
    NSNumber *viewLocationPos;
    long long readState;
    long long bandwidthClass;
    long long viewSource;
    long long playMode;
    long long collectionType;
    long long storyAccessType;
    long long friendshipStatus;
    long long correspondentType;
    NSString *trackingId;
    NSString *sortOrderId;
    NSString *collectionId;
    NSString *mischiefId;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
    NSString *mediaResolution;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getMediaResolution;
- (void)setMediaResolution:(id)arg1;
- (id)getServerRankingId;
- (void)setServerRankingId:(id)arg1;
- (id)getRankingId;
- (void)setRankingId:(id)arg1;
- (id)getRankingModelId;
- (void)setRankingModelId:(id)arg1;
- (id)getMischiefId;
- (void)setMischiefId:(id)arg1;
- (id)getCollectionId;
- (void)setCollectionId:(id)arg1;
- (id)getSortOrderId;
- (void)setSortOrderId:(id)arg1;
- (id)getTrackingId;
- (void)setTrackingId:(id)arg1;
- (long long)getCorrespondentType;
- (void)setCorrespondentType:(long long)arg1;
- (long long)getFriendshipStatus;
- (void)setFriendshipStatus:(long long)arg1;
- (long long)getStoryAccessType;
- (void)setStoryAccessType:(long long)arg1;
- (long long)getCollectionType;
- (void)setCollectionType:(long long)arg1;
- (long long)getPlayMode;
- (void)setPlayMode:(long long)arg1;
- (long long)getViewSource;
- (void)setViewSource:(long long)arg1;
- (long long)getBandwidthClass;
- (void)setBandwidthClass:(long long)arg1;
- (long long)getReadState;
- (void)setReadState:(long long)arg1;
- (long long)getViewLocationPos;
- (void)setViewLocationPos:(long long)arg1;
- (long long)getDeviceScore;
- (void)setDeviceScore:(long long)arg1;
- (long long)getCollectionPos;
- (void)setCollectionPos:(long long)arg1;
- (long long)getViewLocation;
- (void)setViewLocation:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

