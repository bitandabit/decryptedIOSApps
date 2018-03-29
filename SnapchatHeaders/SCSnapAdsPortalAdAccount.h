//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMonetizationAccount.h"

#import "NSCoding-Protocol.h"

@class NSDate, NSString, SCSnapAdsPortalNotificationSettings;

@interface SCSnapAdsPortalAdAccount : SCMonetizationAccount <NSCoding>
{
    SCSnapAdsPortalNotificationSettings *_notificationSettings;
    NSString *_accountId;
    NSString *_accountName;
    NSString *_currencyType;
    long long _roleType;
    NSDate *_createTime;
    NSString *_accountOrgName;
}

+ (id)_requiredAccountProperties;
@property(readonly, copy, nonatomic) NSString *accountOrgName; // @synthesize accountOrgName=_accountOrgName;
@property(readonly, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(readonly, nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(readonly, copy, nonatomic) NSString *currencyType; // @synthesize currencyType=_currencyType;
- (id)accountName;
- (id)accountId;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)allNotificationSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getNotificationSettingOfType:(long long)arg1;
- (void)updateNotificationSettingOfType:(long long)arg1 enabled:(_Bool)arg2;
- (_Bool)_isValidSOJUAccount:(id)arg1;
- (id)initFromSOJUSnapAdsPortalAccount:(id)arg1 didFetchAd:(_Bool)arg2;
- (id)init;

@end
