//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCPBGeofence;

@interface SCPBOurStoryAuth : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *account; // @dynamic account;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *friendName; // @dynamic friendName;
@property(retain, nonatomic) SCPBGeofence *geofence; // @dynamic geofence;
@property(nonatomic) _Bool hasGeofence; // @dynamic hasGeofence;
@property(nonatomic) _Bool isWhitelisted; // @dynamic isWhitelisted;
@property(nonatomic) _Bool lagunaStory; // @dynamic lagunaStory;
@property(nonatomic) _Bool localStory; // @dynamic localStory;
@property(copy, nonatomic) NSString *myStoriesDisplayName; // @dynamic myStoriesDisplayName;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(retain, nonatomic) NSMutableArray *substoryDisplayNamesArray; // @dynamic substoryDisplayNamesArray;
@property(readonly, nonatomic) unsigned long long substoryDisplayNamesArray_Count; // @dynamic substoryDisplayNamesArray_Count;
@property(retain, nonatomic) NSMutableDictionary *substoryLocationIds; // @dynamic substoryLocationIds;
@property(readonly, nonatomic) unsigned long long substoryLocationIds_Count; // @dynamic substoryLocationIds_Count;
@property(nonatomic) long long timeLeft; // @dynamic timeLeft;
@property(copy, nonatomic) NSString *venue; // @dynamic venue;

@end

