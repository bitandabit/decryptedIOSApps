//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt32Dictionary, NSString;

@interface SCPBMediaSave : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *destination; // @dynamic destination;
@property(retain, nonatomic) GPBStringInt32Dictionary *mediaTypeSavedCount; // @dynamic mediaTypeSavedCount;
@property(readonly, nonatomic) unsigned long long mediaTypeSavedCount_Count; // @dynamic mediaTypeSavedCount_Count;
@property(copy, nonatomic) NSString *savedMessageId; // @dynamic savedMessageId;
@property(copy, nonatomic) NSString *savedMessageSenderId; // @dynamic savedMessageSenderId;

@end

