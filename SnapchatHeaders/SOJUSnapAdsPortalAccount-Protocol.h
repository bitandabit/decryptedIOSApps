//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol SOJUSnapAdsPortalAccount <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *roleType;
@property(readonly, copy, nonatomic) NSString *currencyType;
@property(readonly, copy, nonatomic) NSString *organizationName;
@property(readonly, copy, nonatomic) NSArray *notificationSettings;
@property(readonly, copy, nonatomic) NSDictionary *adCategoriesMap;
@property(readonly, copy, nonatomic) NSArray *adCategories;
@property(readonly, copy, nonatomic) NSArray *ads;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSNumber *createdAt;
@property(readonly, copy, nonatomic) NSString *idValue;
@end

