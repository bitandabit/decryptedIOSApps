//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCULUnlockablesSnapInfo : GPBMessage
{
}

+ (id)descriptor;
+ (id)snapInfoFromByteString:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *filtersArray; // @dynamic filtersArray;
@property(readonly, nonatomic) unsigned long long filtersArray_Count; // @dynamic filtersArray_Count;
@property(retain, nonatomic) NSMutableArray *lensesArray; // @dynamic lensesArray;
@property(readonly, nonatomic) unsigned long long lensesArray_Count; // @dynamic lensesArray_Count;
@property(copy, nonatomic) NSString *snapSessionId; // @dynamic snapSessionId;
@property(retain, nonatomic) NSMutableArray *stickersArray; // @dynamic stickersArray;
@property(readonly, nonatomic) unsigned long long stickersArray_Count; // @dynamic stickersArray_Count;

@end
