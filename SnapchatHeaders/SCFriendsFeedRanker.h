//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SCFriendsFeedRankingScoring;

@interface SCFriendsFeedRanker : NSObject
{
    id <SCFriendsFeedRankingScoring> _rankingScorer;
}

- (void).cxx_destruct;
- (id)rankFriendsFeedRankableItems:(id)arg1;
- (id)initWithRankingScorer:(id)arg1;

@end

