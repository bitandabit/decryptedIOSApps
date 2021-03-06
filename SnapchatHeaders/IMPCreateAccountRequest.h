//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPConvertUserInfo, IMPCreateUserInfo, NSData, NSString;

@interface IMPCreateAccountRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessCategory; // @dynamic businessCategory;
@property(copy, nonatomic) NSString *businessDescription; // @dynamic businessDescription;
@property(copy, nonatomic) NSString *businessDisplayName; // @dynamic businessDisplayName;
@property(copy, nonatomic) NSString *businessEmail; // @dynamic businessEmail;
@property(copy, nonatomic) NSData *businessLogo; // @dynamic businessLogo;
@property(copy, nonatomic) NSString *businessPhoneNumber; // @dynamic businessPhoneNumber;
@property(copy, nonatomic) NSString *businessStreetAddress; // @dynamic businessStreetAddress;
@property(copy, nonatomic) NSString *businessWebsite; // @dynamic businessWebsite;
@property(copy, nonatomic) NSString *callingUserDisplayName; // @dynamic callingUserDisplayName;
@property(copy, nonatomic) NSString *callingUserEmail; // @dynamic callingUserEmail;
@property(copy, nonatomic) NSString *callingUserId; // @dynamic callingUserId;
@property(retain, nonatomic) IMPConvertUserInfo *convertUserInfo; // @dynamic convertUserInfo;
@property(retain, nonatomic) IMPCreateUserInfo *createUserInfo; // @dynamic createUserInfo;
@property(copy, nonatomic) NSString *existingOrganizationId; // @dynamic existingOrganizationId;
@property(readonly, nonatomic) int onboardingTypeInfoOneOfCase; // @dynamic onboardingTypeInfoOneOfCase;

@end

