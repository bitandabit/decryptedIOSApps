//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAExplorerReportSnapDialog : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *level;
    long long storyType;
    NSString *geoFence;
    NSString *poster_id;
    NSString *sponser;
    NSString *storySnapId;
    NSString *storyRootSnapId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_poster_id;
- (void)setGhost_poster_id:(id)arg1;
- (id)getStoryRootSnapId;
- (void)setStoryRootSnapId:(id)arg1;
- (id)getStorySnapId;
- (void)setStorySnapId:(id)arg1;
- (id)getSponser;
- (void)setSponser:(id)arg1;
- (id)getPoster_id;
- (void)setPoster_id:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getLevel;
- (void)setLevel:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

