//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface IMPCreateBusinessAccountRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(copy, nonatomic) NSString *adminUserId; // @dynamic adminUserId;
@property(copy, nonatomic) NSString *adminUsername; // @dynamic adminUsername;
@property(copy, nonatomic) NSData *businessLogo; // @dynamic businessLogo;
@property(copy, nonatomic) NSString *businessName; // @dynamic businessName;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *emailAddress; // @dynamic emailAddress;
@property(copy, nonatomic) NSString *hostAccountUsername; // @dynamic hostAccountUsername;
@property(copy, nonatomic) NSString *logoURL; // @dynamic logoURL;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(copy, nonatomic) NSString *websiteURL; // @dynamic websiteURL;

@end

