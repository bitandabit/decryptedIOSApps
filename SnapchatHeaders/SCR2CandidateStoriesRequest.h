//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoLocation;

@interface SCR2CandidateStoriesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *existingSubtextHintArray; // @dynamic existingSubtextHintArray;
@property(readonly, nonatomic) unsigned long long existingSubtextHintArray_Count; // @dynamic existingSubtextHintArray_Count;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;
@property(copy, nonatomic) NSString *placeholder; // @dynamic placeholder;

@end

