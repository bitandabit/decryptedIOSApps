//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCMTGetCurrentUserScoreboardResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int currentUserGlobalRank; // @dynamic currentUserGlobalRank;
@property(retain, nonatomic) NSMutableArray *friendScoresArray; // @dynamic friendScoresArray;
@property(readonly, nonatomic) unsigned long long friendScoresArray_Count; // @dynamic friendScoresArray_Count;
@property(retain, nonatomic) NSMutableArray *globalLeadersArray; // @dynamic globalLeadersArray;
@property(readonly, nonatomic) unsigned long long globalLeadersArray_Count; // @dynamic globalLeadersArray_Count;
@property(nonatomic) int remainingGameDurationMs; // @dynamic remainingGameDurationMs;
@property(retain, nonatomic) NSMutableArray *topActionStickersArray; // @dynamic topActionStickersArray;
@property(readonly, nonatomic) unsigned long long topActionStickersArray_Count; // @dynamic topActionStickersArray_Count;

@end

