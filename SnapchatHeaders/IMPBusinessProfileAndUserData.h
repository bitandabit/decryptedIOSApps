//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPBusinessProfile, NSMutableArray;

@interface IMPBusinessProfileAndUserData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allowedActionsArray; // @dynamic allowedActionsArray;
@property(readonly, nonatomic) unsigned long long allowedActionsArray_Count; // @dynamic allowedActionsArray_Count;
@property(retain, nonatomic) IMPBusinessProfile *businessProfile; // @dynamic businessProfile;
@property(nonatomic) _Bool hasBusinessProfile; // @dynamic hasBusinessProfile;
@property(nonatomic) _Bool isSubscribed; // @dynamic isSubscribed;
@property(retain, nonatomic) NSMutableArray *pendingRoleInvitesArray; // @dynamic pendingRoleInvitesArray;
@property(readonly, nonatomic) unsigned long long pendingRoleInvitesArray_Count; // @dynamic pendingRoleInvitesArray_Count;

@end

