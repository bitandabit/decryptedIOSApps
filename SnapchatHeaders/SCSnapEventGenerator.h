//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEventGenerator.h"

@class NSDate, NSMutableDictionary, Snap;

@interface SCSnapEventGenerator : SCEventGenerator
{
    NSDate *_lastViewingSnapTimestamp;
    double _timeSinceLastViewedSnap;
    _Bool _hasUnopenVideoWithSound;
    Snap *_highPriorityViewingSnap;
    Snap *_highPriorityUnopenSnap;
    Snap *_highPrioritySentSnap;
    Snap *_normalPriorityUnopenSnap;
    Snap *_normalPriorityReplayableSnap;
    Snap *_latestSnap;
    NSMutableDictionary *_unopenedSnaps;
}

- (void).cxx_destruct;
- (id)mostRecentlyViewedSnapInChat:(id)arg1;
- (id)_highPriorityInteractionEvent;
- (id)_normalPriorityInteractionEvent;
- (id)toInteractionEvent;
- (void)_updateWithLastSnaps;
- (void)updateWithSnap:(id)arg1;
- (id)initWithChat:(id)arg1 generatorType:(long long)arg2;

@end

