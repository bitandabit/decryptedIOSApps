//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt32UInt32Dictionary, NSMutableArray, NSString;

@interface TermStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt32UInt32Dictionary *hourlyCount; // @dynamic hourlyCount;
@property(readonly, nonatomic) unsigned long long hourlyCount_Count; // @dynamic hourlyCount_Count;
@property(retain, nonatomic) GPBUInt32UInt32Dictionary *hourlyVolume; // @dynamic hourlyVolume;
@property(readonly, nonatomic) unsigned long long hourlyVolume_Count; // @dynamic hourlyVolume_Count;
@property(copy, nonatomic) NSString *term; // @dynamic term;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSMutableArray *topDynStoriesArray; // @dynamic topDynStoriesArray;
@property(readonly, nonatomic) unsigned long long topDynStoriesArray_Count; // @dynamic topDynStoriesArray_Count;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;
@property(nonatomic) unsigned int totalVolume; // @dynamic totalVolume;

@end

