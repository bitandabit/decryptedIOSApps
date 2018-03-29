//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAChatChatView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *ackTimeSec;
    NSNumber *noteTimeSec;
    NSNumber *playbackAudio;
    NSNumber *tapCount;
    NSNumber *camera;
    NSNumber *cellViewPosition;
    long long messageType;
    long long mediaType;
    long long source;
    long long friendshipStatus;
    long long correspondentType;
    NSString *correspondentId;
    NSString *subpageName;
    NSString *chatId;
    NSString *mischiefId;
    NSString *teamsnapId;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
    NSString *parcelType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getParcelType;
- (void)setParcelType:(id)arg1;
- (id)getServerRankingId;
- (void)setServerRankingId:(id)arg1;
- (id)getRankingId;
- (void)setRankingId:(id)arg1;
- (id)getRankingModelId;
- (void)setRankingModelId:(id)arg1;
- (id)getTeamsnapId;
- (void)setTeamsnapId:(id)arg1;
- (id)getMischiefId;
- (void)setMischiefId:(id)arg1;
- (id)getChatId;
- (void)setChatId:(id)arg1;
- (id)getSubpageName;
- (void)setSubpageName:(id)arg1;
- (id)getCorrespondentId;
- (void)setCorrespondentId:(id)arg1;
- (long long)getCorrespondentType;
- (void)setCorrespondentType:(long long)arg1;
- (long long)getFriendshipStatus;
- (void)setFriendshipStatus:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getMessageType;
- (void)setMessageType:(long long)arg1;
- (long long)getCellViewPosition;
- (void)setCellViewPosition:(long long)arg1;
- (long long)getCamera;
- (void)setCamera:(long long)arg1;
- (long long)getTapCount;
- (void)setTapCount:(long long)arg1;
- (_Bool)getPlaybackAudio;
- (void)setPlaybackAudio:(_Bool)arg1;
- (double)getNoteTimeSec;
- (void)setNoteTimeSec:(double)arg1;
- (double)getAckTimeSec;
- (void)setAckTimeSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
