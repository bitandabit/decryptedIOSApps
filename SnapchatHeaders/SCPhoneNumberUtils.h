//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCPhoneNumberUtils : NSObject
{
}

+ (id)stripDigitsFromPhoneNumber:(id)arg1;
+ (_Bool)shouldShowPhoneVerificationFlow:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2;
+ (_Bool)deprecatedClientIsValidNumber:(id)arg1 withCountryCode:(id)arg2;
+ (_Bool)isValidClientPhoneNumberFormat:(id)arg1;
+ (unsigned int)getCountryCodeForRegion:(id)arg1;
+ (id)formatPhoneNumberShouldShowForeignCountryCode:(_Bool)arg1 withPhoneNumber:(id)arg2 withCountryCode:(id)arg3;
+ (id)formatPhoneNumber:(id)arg1 withCountryCode:(id)arg2;
+ (id)formatPhoneNumber:(id)arg1;

@end

