//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUSnapAdsPortalAd <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *effectiveStatus;
@property(readonly, copy, nonatomic) NSString *adSquadId;
@property(readonly, copy, nonatomic) NSString *optimizationGoal;
@property(readonly, copy, nonatomic) NSNumber *adSetDailyBudget;
@property(readonly, copy, nonatomic) NSString *adSetName;
@property(readonly, copy, nonatomic) NSString *campaignName;
@property(readonly, copy, nonatomic) NSNumber *lifetimeSpend;
@property(readonly, copy, nonatomic) NSNumber *isPrivateMediaUrl;
@property(readonly, copy, nonatomic) NSString *adCategoryType;
@property(readonly, copy, nonatomic) NSString *displayState;
@property(readonly, copy, nonatomic) NSArray *reviewStatusReasons;
@property(readonly, copy, nonatomic) NSNumber *endTimestampInMillis;
@property(readonly, copy, nonatomic) NSNumber *startTimestampInMillis;
@property(readonly, copy, nonatomic) NSString *responseJson;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *coverMediaId;
@property(readonly, copy, nonatomic) NSArray *media;
@property(readonly, copy, nonatomic) NSArray *collaborators;
@property(readonly, copy, nonatomic) NSString *runStatus;
@property(readonly, copy, nonatomic) NSString *approvalStatus;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *creatorId;
@property(readonly, copy, nonatomic) NSString *adAccountName;
@property(readonly, copy, nonatomic) NSString *adAccountId;
@property(readonly, copy, nonatomic) NSNumber *createdAt;
@property(readonly, copy, nonatomic) NSString *idValue;
@end
