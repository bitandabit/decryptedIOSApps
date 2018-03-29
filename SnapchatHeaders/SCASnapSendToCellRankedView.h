//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString, SCARankingSessionMetadata;

@interface SCASnapSendToCellRankedView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *sectionPos;
    NSNumber *cellViewPosition;
    NSNumber *score;
    NSString *correspondentId;
    NSString *mischiefId;
    NSString *features;
    NSString *ghost_correspondent_id;
    SCARankingSessionMetadata *rankingSessionMetadata;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getRankingSessionMetadata;
- (void)setRankingSessionMetadata:(id)arg1;
- (id)getGhost_correspondent_id;
- (void)setGhost_correspondent_id:(id)arg1;
- (id)getFeatures;
- (void)setFeatures:(id)arg1;
- (id)getMischiefId;
- (void)setMischiefId:(id)arg1;
- (id)getCorrespondentId;
- (void)setCorrespondentId:(id)arg1;
- (double)getScore;
- (void)setScore:(double)arg1;
- (long long)getCellViewPosition;
- (void)setCellViewPosition:(long long)arg1;
- (long long)getSectionPos;
- (void)setSectionPos:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

