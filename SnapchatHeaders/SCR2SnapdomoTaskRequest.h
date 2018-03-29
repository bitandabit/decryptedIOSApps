//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCR2GeoLocation, SCR2UserInfo;

@interface SCR2SnapdomoTaskRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasTaskCheck; // @dynamic hasTaskCheck;
@property(nonatomic) _Bool hasUserInfo; // @dynamic hasUserInfo;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSMutableArray *languagePreferencesArray; // @dynamic languagePreferencesArray;
@property(readonly, nonatomic) unsigned long long languagePreferencesArray_Count; // @dynamic languagePreferencesArray_Count;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;
@property(nonatomic) long long maxNumTasks; // @dynamic maxNumTasks;
@property(retain, nonatomic) NSMutableArray *specsArray; // @dynamic specsArray;
@property(readonly, nonatomic) unsigned long long specsArray_Count; // @dynamic specsArray_Count;
@property(retain, nonatomic) NSMutableDictionary *taskConfigMap; // @dynamic taskConfigMap;
@property(readonly, nonatomic) unsigned long long taskConfigMap_Count; // @dynamic taskConfigMap_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(retain, nonatomic) SCR2UserInfo *userInfo; // @dynamic userInfo;

@end
