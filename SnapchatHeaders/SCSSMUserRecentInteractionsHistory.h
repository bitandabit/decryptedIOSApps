//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCSSMUserRecentInteractionsHistory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *userCorpusInteractionsArray; // @dynamic userCorpusInteractionsArray;
@property(readonly, nonatomic) unsigned long long userCorpusInteractionsArray_Count; // @dynamic userCorpusInteractionsArray_Count;
@property(retain, nonatomic) NSMutableArray *userStoryInteractionsArray; // @dynamic userStoryInteractionsArray;
@property(readonly, nonatomic) unsigned long long userStoryInteractionsArray_Count; // @dynamic userStoryInteractionsArray_Count;

@end
