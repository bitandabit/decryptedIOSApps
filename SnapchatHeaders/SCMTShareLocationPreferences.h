//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCMTShareLocationPreferences : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int audience; // @dynamic audience;
@property(nonatomic) _Bool backgroundSharingEnabled; // @dynamic backgroundSharingEnabled;
@property(nonatomic) _Bool ghostMode; // @dynamic ghostMode;
@property(retain, nonatomic) NSMutableArray *perFriendModeArray; // @dynamic perFriendModeArray;
@property(readonly, nonatomic) unsigned long long perFriendModeArray_Count; // @dynamic perFriendModeArray_Count;
@property(nonatomic) _Bool shareUsageData; // @dynamic shareUsageData;
@property(nonatomic) int sharingMode; // @dynamic sharingMode;
@property(nonatomic) int version; // @dynamic version;

@end

