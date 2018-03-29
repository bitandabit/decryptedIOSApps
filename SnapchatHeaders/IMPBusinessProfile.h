//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SGTILink;

@interface IMPBusinessProfile : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *emailAddress; // @dynamic emailAddress;
@property(nonatomic) _Bool hasProfileLink; // @dynamic hasProfileLink;
@property(copy, nonatomic) NSString *hostAccountUsername; // @dynamic hostAccountUsername;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *logoURL; // @dynamic logoURL;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(copy, nonatomic) NSString *profileDeeplinkURL; // @dynamic profileDeeplinkURL;
@property(retain, nonatomic) SGTILink *profileLink; // @dynamic profileLink;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *websiteURL; // @dynamic websiteURL;

@end

