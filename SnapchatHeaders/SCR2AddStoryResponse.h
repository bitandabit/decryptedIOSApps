//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2Status;

@interface SCR2AddStoryResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(copy, nonatomic) NSString *serverStoryId; // @dynamic serverStoryId;
@property(copy, nonatomic) NSString *sharingLink; // @dynamic sharingLink;
@property(retain, nonatomic) SCR2Status *status; // @dynamic status;

@end

