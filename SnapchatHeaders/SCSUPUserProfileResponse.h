//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CentralKitchenUserData, SCSUPBasicAttributes, SCSUPContentEngagement, SCSUPFriendScores, SCSUPGeographics, SCSUPInterests, SCSUPNotifications, SCSUPReadReceipt, SCSUPRecommendedUsers, SCSUPSalientTerms, Subscriptions;

@interface SCSUPUserProfileResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPBasicAttributes *basicAttributes; // @dynamic basicAttributes;
@property(retain, nonatomic) CentralKitchenUserData *centralKitchenUserData; // @dynamic centralKitchenUserData;
@property(retain, nonatomic) SCSUPContentEngagement *contentEngagement; // @dynamic contentEngagement;
@property(retain, nonatomic) SCSUPFriendScores *friendScores; // @dynamic friendScores;
@property(retain, nonatomic) SCSUPGeographics *geographics; // @dynamic geographics;
@property(nonatomic) _Bool hasBasicAttributes; // @dynamic hasBasicAttributes;
@property(nonatomic) _Bool hasCentralKitchenUserData; // @dynamic hasCentralKitchenUserData;
@property(nonatomic) _Bool hasContentEngagement; // @dynamic hasContentEngagement;
@property(nonatomic) _Bool hasFriendScores; // @dynamic hasFriendScores;
@property(nonatomic) _Bool hasGeographics; // @dynamic hasGeographics;
@property(nonatomic) _Bool hasInterests; // @dynamic hasInterests;
@property(nonatomic) _Bool hasNegativeInterests; // @dynamic hasNegativeInterests;
@property(nonatomic) _Bool hasNotifications; // @dynamic hasNotifications;
@property(nonatomic) _Bool hasReadReceipt; // @dynamic hasReadReceipt;
@property(nonatomic) _Bool hasRecommendedUsers; // @dynamic hasRecommendedUsers;
@property(nonatomic) _Bool hasSalientTerms; // @dynamic hasSalientTerms;
@property(nonatomic) _Bool hasSubscriptions; // @dynamic hasSubscriptions;
@property(retain, nonatomic) SCSUPInterests *interests; // @dynamic interests;
@property(retain, nonatomic) SCSUPInterests *negativeInterests; // @dynamic negativeInterests;
@property(retain, nonatomic) SCSUPNotifications *notifications; // @dynamic notifications;
@property(retain, nonatomic) SCSUPReadReceipt *readReceipt; // @dynamic readReceipt;
@property(retain, nonatomic) SCSUPRecommendedUsers *recommendedUsers; // @dynamic recommendedUsers;
@property(retain, nonatomic) SCSUPSalientTerms *salientTerms; // @dynamic salientTerms;
@property(retain, nonatomic) Subscriptions *subscriptions; // @dynamic subscriptions;

@end

