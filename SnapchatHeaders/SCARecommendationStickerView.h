//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCARecommendationStickerView : SCAUserNotTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *recommendationRank;
    NSNumber *recommendationTotalCount;
    long long recommendationType;
    long long source;
    long long sectionName;
    NSString *recommendationProfile;
    NSString *stickerId;
    NSString *stickerPackId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getStickerPackId;
- (void)setStickerPackId:(id)arg1;
- (id)getStickerId;
- (void)setStickerId:(id)arg1;
- (id)getRecommendationProfile;
- (void)setRecommendationProfile:(id)arg1;
- (long long)getSectionName;
- (void)setSectionName:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getRecommendationType;
- (void)setRecommendationType:(long long)arg1;
- (long long)getRecommendationTotalCount;
- (void)setRecommendationTotalCount:(long long)arg1;
- (long long)getRecommendationRank;
- (void)setRecommendationRank:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

