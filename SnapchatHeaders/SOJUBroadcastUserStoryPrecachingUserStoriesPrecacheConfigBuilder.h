//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig, SOJUBroadcastUserStoryPrecachingPrecacheCounts;

@interface SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfigBuilder : NSObject
{
    NSArray *_precacheCountsPerStory;
    SOJUBroadcastUserStoryPrecachingPrecacheCounts *_defaultPrecacheCount;
    SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *_lookaheadPrecache;
    NSArray *_lookaheadPrecachePerSection;
}

+ (id)withJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig:(id)arg1;
- (void).cxx_destruct;
- (id)setLookaheadPrecachePerSection:(id)arg1;
- (id)setLookaheadPrecache:(id)arg1;
- (id)setDefaultPrecacheCount:(id)arg1;
- (id)setPrecacheCountsPerStory:(id)arg1;
- (id)build;

@end

