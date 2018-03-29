//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString, SPTLoginMarketSignupRestrictions;

@interface SignupUserDetails : NSObject
{
    NSString *_email;
    NSString *_password;
    NSString *_passwordVerification;
    NSString *_username;
    NSDate *_birthday;
    NSString *_gender;
    NSNumber *_acceptedTC;
    NSNumber *_acceptedPrivacyPolicy;
    NSString *_inviteCode;
    NSString *_deviceIP;
    NSString *_facebookAccessToken;
    NSString *_facebookUserIdentifier;
    NSString *_facebookUserName;
    SPTLoginMarketSignupRestrictions *_marketRestrictions;
}

@property(retain, nonatomic) SPTLoginMarketSignupRestrictions *marketRestrictions; // @synthesize marketRestrictions=_marketRestrictions;
@property(retain, nonatomic) NSString *facebookUserName; // @synthesize facebookUserName=_facebookUserName;
@property(retain, nonatomic) NSString *facebookUserIdentifier; // @synthesize facebookUserIdentifier=_facebookUserIdentifier;
@property(retain, nonatomic) NSString *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(retain, nonatomic) NSString *deviceIP; // @synthesize deviceIP=_deviceIP;
@property(retain, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(retain, nonatomic) NSNumber *acceptedPrivacyPolicy; // @synthesize acceptedPrivacyPolicy=_acceptedPrivacyPolicy;
@property(retain, nonatomic) NSNumber *acceptedTC; // @synthesize acceptedTC=_acceptedTC;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *passwordVerification; // @synthesize passwordVerification=_passwordVerification;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)escapedParameter:(id)arg1;
- (id)gregorianBirthdayComponents;
- (_Bool)hasUserAcceptLegalRequirements;
- (id)serializedPostDataWithParameters:(id)arg1;
- (id)serializedPostDataForFacebookSignup;
- (id)serializedPostDataForEmailSignup;
- (_Bool)isEmailSignupRequiredDataSpecified;

@end

