//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBEncryptionSetupNonceExchangeMessage;

@interface MLBEncryptionSetupResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSetupMessage; // @dynamic hasSetupMessage;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) MLBEncryptionSetupNonceExchangeMessage *setupMessage; // @dynamic setupMessage;
@property(nonatomic) int status; // @dynamic status;

@end

