//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SPTLoginMarketSignupStatusRequest;

@protocol SPTLoginMarketSignupStatusRequestDelegate <NSObject>
- (void)marketSignupStatusRequest:(SPTLoginMarketSignupStatusRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)marketSignupStatusRequestDidSucceedForNormalMarket:(SPTLoginMarketSignupStatusRequest *)arg1 allowNeutralGender:(_Bool)arg2;
- (void)marketSignupStatusRequestDidSucceed:(SPTLoginMarketSignupStatusRequest *)arg1 withInviteOnlyMarketCountryCode:(NSString *)arg2 allowNeutralGender:(_Bool)arg3;
@end

