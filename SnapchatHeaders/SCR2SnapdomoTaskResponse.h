//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCR2SnapdomoTaskResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool needsOnboarding; // @dynamic needsOnboarding;
@property(retain, nonatomic) NSMutableArray *tasksArray; // @dynamic tasksArray;
@property(readonly, nonatomic) unsigned long long tasksArray_Count; // @dynamic tasksArray_Count;

@end
