//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchEventListener-Protocol.h"

@class NSDictionary, NSString;
@protocol SCNetworkingRankingUserInfoProvider, SCPerforming;

@interface SCNetworkingRanking : NSObject <SCSearchEventListener>
{
    id <SCPerforming> _queuePerformer;
    NSDictionary *_userProfileMap;
    NSDictionary *_rankingModelMap;
    NSDictionary *_feedRankingRecords;
    id <SCNetworkingRankingUserInfoProvider> _userinfoProvider;
}

+ (id)shared;
@property(nonatomic) __weak id <SCNetworkingRankingUserInfoProvider> userinfoProvider; // @synthesize userinfoProvider=_userinfoProvider;
@property(retain) NSDictionary *feedRankingRecords; // @synthesize feedRankingRecords=_feedRankingRecords;
@property(retain) NSDictionary *rankingModelMap; // @synthesize rankingModelMap=_rankingModelMap;
@property(retain) NSDictionary *userProfileMap; // @synthesize userProfileMap=_userProfileMap;
- (void).cxx_destruct;
- (void)_logInvalidFeature;
- (void)_logNetowkingRankingUserProfile;
- (id)calculateScoreWithContext:(id)arg1 contextScore:(unsigned long long)arg2 userInitiated:(_Bool)arg3 type:(id)arg4 networkCondition:(id)arg5 feedRankingScore:(id)arg6;
- (_Bool)isModelAvailable;
- (id)modelVersion;
- (void)updateUserProfileMap:(id)arg1;
- (id)feedRankingScore:(id)arg1;
- (id)username;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

