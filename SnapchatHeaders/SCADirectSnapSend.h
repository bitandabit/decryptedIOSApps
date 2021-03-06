//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCADirectSnapSendBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADirectSnapSend : SCADirectSnapSendBase <MapSerializable, NSCopying>
{
    NSNumber *deviceScore;
    long long lensSource;
    long long filterStreak;
    long long sendSource;
    long long friendshipStatus;
    long long correspondentType;
    NSString *filterLensId;
    NSString *lensOptionId;
    NSString *snapSessionId;
    NSString *filterVenueId;
    NSString *snapId;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getServerRankingId;
- (void)setServerRankingId:(id)arg1;
- (id)getRankingId;
- (void)setRankingId:(id)arg1;
- (id)getRankingModelId;
- (void)setRankingModelId:(id)arg1;
- (id)getSnapId;
- (void)setSnapId:(id)arg1;
- (id)getFilterVenueId;
- (void)setFilterVenueId:(id)arg1;
- (id)getSnapSessionId;
- (void)setSnapSessionId:(id)arg1;
- (id)getLensOptionId;
- (void)setLensOptionId:(id)arg1;
- (id)getFilterLensId;
- (void)setFilterLensId:(id)arg1;
- (long long)getCorrespondentType;
- (void)setCorrespondentType:(long long)arg1;
- (long long)getFriendshipStatus;
- (void)setFriendshipStatus:(long long)arg1;
- (long long)getSendSource;
- (void)setSendSource:(long long)arg1;
- (long long)getFilterStreak;
- (void)setFilterStreak:(long long)arg1;
- (long long)getLensSource;
- (void)setLensSource:(long long)arg1;
- (long long)getDeviceScore;
- (void)setDeviceScore:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

