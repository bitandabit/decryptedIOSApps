//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPBSignedPayload;

@interface SCPBMessagingGatewayInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBSignedPayload *gatewayAuthToken; // @dynamic gatewayAuthToken;
@property(copy, nonatomic) NSString *gatewayServer; // @dynamic gatewayServer;
@property(nonatomic) _Bool hasGatewayAuthToken; // @dynamic hasGatewayAuthToken;

@end
