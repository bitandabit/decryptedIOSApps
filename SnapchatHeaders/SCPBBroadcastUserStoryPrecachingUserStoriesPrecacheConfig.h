//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCPBBroadcastUserStoryPrecachingLookaheadPrecacheConfig, SCPBBroadcastUserStoryPrecachingPrecacheCounts;

@interface SCPBBroadcastUserStoryPrecachingUserStoriesPrecacheConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBBroadcastUserStoryPrecachingPrecacheCounts *defaultPrecacheCount; // @dynamic defaultPrecacheCount;
@property(nonatomic) _Bool hasDefaultPrecacheCount; // @dynamic hasDefaultPrecacheCount;
@property(nonatomic) _Bool hasLookaheadPrecache; // @dynamic hasLookaheadPrecache;
@property(retain, nonatomic) SCPBBroadcastUserStoryPrecachingLookaheadPrecacheConfig *lookaheadPrecache; // @dynamic lookaheadPrecache;
@property(retain, nonatomic) NSMutableArray *lookaheadPrecachePerSectionArray; // @dynamic lookaheadPrecachePerSectionArray;
@property(readonly, nonatomic) unsigned long long lookaheadPrecachePerSectionArray_Count; // @dynamic lookaheadPrecachePerSectionArray_Count;
@property(retain, nonatomic) NSMutableArray *precacheCountsPerStoryArray; // @dynamic precacheCountsPerStoryArray;
@property(readonly, nonatomic) unsigned long long precacheCountsPerStoryArray_Count; // @dynamic precacheCountsPerStoryArray_Count;

@end

