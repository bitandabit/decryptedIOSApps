//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringDoubleDictionary, NSString;

@interface SCMEGetExplorerStatusesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *calloutId; // @dynamic calloutId;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) GPBStringDoubleDictionary *friendIdsAndScores; // @dynamic friendIdsAndScores;
@property(readonly, nonatomic) unsigned long long friendIdsAndScores_Count; // @dynamic friendIdsAndScores_Count;
@property(nonatomic) _Bool isNewMapUser; // @dynamic isNewMapUser;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end
