//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSFFSPerson;

@interface SCSFFSFriendMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long addFriendTsSecs; // @dynamic addFriendTsSecs;
@property(nonatomic) int birthdate; // @dynamic birthdate;
@property(retain, nonatomic) NSMutableArray *friendmojisArray; // @dynamic friendmojisArray;
@property(readonly, nonatomic) unsigned long long friendmojisArray_Count; // @dynamic friendmojisArray_Count;
@property(nonatomic) _Bool hasPerson; // @dynamic hasPerson;
@property(nonatomic) _Bool isReported; // @dynamic isReported;
@property(retain, nonatomic) SCSFFSPerson *person; // @dynamic person;
@property(nonatomic) long long reverseAddFriendTsSecs; // @dynamic reverseAddFriendTsSecs;

@end
