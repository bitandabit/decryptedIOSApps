//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPBBroadcastUserStoryPrecachingPrecacheCounts;

@interface SCPBBroadcastUserStoryPrecachingLookaheadPrecacheConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInlineForwardPrecacheCounts; // @dynamic hasInlineForwardPrecacheCounts;
@property(nonatomic) _Bool hasNumSnapsPerStoryAlwaysPrecached; // @dynamic hasNumSnapsPerStoryAlwaysPrecached;
@property(nonatomic) _Bool hasNumSnapsToLoadBeforeAllowViewing; // @dynamic hasNumSnapsToLoadBeforeAllowViewing;
@property(nonatomic) _Bool hasNumStoriesAlwaysPrecached; // @dynamic hasNumStoriesAlwaysPrecached;
@property(nonatomic) _Bool hasTapToLoadCounts; // @dynamic hasTapToLoadCounts;
@property(retain, nonatomic) SCPBBroadcastUserStoryPrecachingPrecacheCounts *inlineForwardPrecacheCounts; // @dynamic inlineForwardPrecacheCounts;
@property(retain, nonatomic) SCPBBroadcastUserStoryPrecachingPrecacheCounts *numSnapsPerStoryAlwaysPrecached; // @dynamic numSnapsPerStoryAlwaysPrecached;
@property(retain, nonatomic) SCPBBroadcastUserStoryPrecachingPrecacheCounts *numSnapsToLoadBeforeAllowViewing; // @dynamic numSnapsToLoadBeforeAllowViewing;
@property(retain, nonatomic) SCPBBroadcastUserStoryPrecachingPrecacheCounts *numStoriesAlwaysPrecached; // @dynamic numStoriesAlwaysPrecached;
@property(copy, nonatomic) NSString *order; // @dynamic order;
@property(retain, nonatomic) SCPBBroadcastUserStoryPrecachingPrecacheCounts *tapToLoadCounts; // @dynamic tapToLoadCounts;

@end
