//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class FeedbackDimensions, SCCORECompositeStoryId;

@interface BibQueryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) FeedbackDimensions *aggregationDimensions; // @dynamic aggregationDimensions;
@property(nonatomic) _Bool hasAggregationDimensions; // @dynamic hasAggregationDimensions;
@property(nonatomic) _Bool hasStoryId; // @dynamic hasStoryId;
@property(nonatomic) int origin; // @dynamic origin;
@property(retain, nonatomic) SCCORECompositeStoryId *storyId; // @dynamic storyId;
@property(nonatomic) long long timestampMsecs; // @dynamic timestampMsecs;

@end

