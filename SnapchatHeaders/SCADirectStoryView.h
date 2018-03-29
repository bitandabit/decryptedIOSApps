//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADirectStoryView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *timeViewSec;
    NSNumber *snapViewCount;
    NSNumber *snapCount;
    long long exitEvent;
    long long storyType;
    long long storyTypeSpecific;
    NSString *mischiefId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getMischiefId;
- (void)setMischiefId:(id)arg1;
- (long long)getStoryTypeSpecific;
- (void)setStoryTypeSpecific:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (long long)getSnapCount;
- (void)setSnapCount:(long long)arg1;
- (long long)getSnapViewCount;
- (void)setSnapViewCount:(long long)arg1;
- (double)getTimeViewSec;
- (void)setTimeViewSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
