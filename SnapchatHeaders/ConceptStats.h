//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSMutableArray, NSString;

@interface ConceptStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *termsArray; // @dynamic termsArray;
@property(readonly, nonatomic) unsigned long long termsArray_Count; // @dynamic termsArray_Count;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *topDynStory; // @dynamic topDynStory;
@property(nonatomic) unsigned int totalUsers; // @dynamic totalUsers;
@property(nonatomic) unsigned int totalVolume; // @dynamic totalVolume;
@property(retain, nonatomic) GPBInt64Array *volumeTimestampByPercentileArray; // @dynamic volumeTimestampByPercentileArray;
@property(readonly, nonatomic) unsigned long long volumeTimestampByPercentileArray_Count; // @dynamic volumeTimestampByPercentileArray_Count;

@end

