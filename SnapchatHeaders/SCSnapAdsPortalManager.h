//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSMutableDictionary, NSString, SCSnapAdsPortalAccountEntity, SCSnapAdsPortalAdAccount, SCSnapAdsPortalAdEntity, SCSnapAdsPortalAdSetEntity, SCSnapAdsPortalCampaignEntity, SCSnapAdsPortalMetricCalendarData;
@protocol SCObserving;

@interface SCSnapAdsPortalManager : NSObject <SCTimeProfilable, NSCoding>
{
    NSMutableDictionary *_accountsByAccountId;
    NSString *_activeAccountId;
    id <SCObserving> _observeContext;
    _Bool _isAdvertiser;
    SCSnapAdsPortalMetricCalendarData *_activeCalendarData;
    SCSnapAdsPortalCampaignEntity *_activeCampaignEntity;
    SCSnapAdsPortalAdSetEntity *_activeAdSetEntity;
    SCSnapAdsPortalAdEntity *_activeAdEntity;
}

+ (id)_sortAccountsByAccountName:(id)arg1;
+ (int)context;
+ (id)path;
+ (_Bool)initialized;
+ (id)shared;
+ (void)sendRequestToEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)sendRequestWithLoggingToEndpoint:(id)arg1 parameters:(id)arg2 networkEventType:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)fetchAdCreativeForPreviewWithEntityType:(long long)arg1 entityId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)sendNotificationSettingsRequestWithParameters:(id)arg1 endpoint:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)updateNotificationSettingWithAccountId:(id)arg1 notificationSetting:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)fetchEntityMetricsWithAccountId:(id)arg1 entityId:(id)arg2 entityType:(long long)arg3 startTime:(id)arg4 endTime:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)updateSnapAdsPortalAdForAdAccountId:(id)arg1 adId:(id)arg2 updatedParams:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)sendRequestToEndpoint:(id)arg1 entityId:(id)arg2 entityType:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (id)_fetchSingleEntityEndpointUrlForEntityType:(long long)arg1 entityId:(id)arg2;
+ (void)fetchSingleEntityForEntityId:(id)arg1 entityType:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (id)_fetchSubEntitiesEndpointUrlForEntityType:(long long)arg1 entityId:(id)arg2;
+ (void)fetchSubEntitiesForEntityId:(id)arg1 entityType:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)fetchSnapAdsPortalAdAccountsDataWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isAdvertiser; // @synthesize isAdvertiser=_isAdvertiser;
@property(retain, nonatomic) SCSnapAdsPortalAdEntity *activeAdEntity; // @synthesize activeAdEntity=_activeAdEntity;
@property(retain, nonatomic) SCSnapAdsPortalAdSetEntity *activeAdSetEntity; // @synthesize activeAdSetEntity=_activeAdSetEntity;
@property(retain, nonatomic) SCSnapAdsPortalCampaignEntity *activeCampaignEntity; // @synthesize activeCampaignEntity=_activeCampaignEntity;
@property(retain, nonatomic) SCSnapAdsPortalMetricCalendarData *activeCalendarData; // @synthesize activeCalendarData=_activeCalendarData;
- (void).cxx_destruct;
- (void)updateEntity:(id)arg1 updatedEffectiveStatus:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) SCSnapAdsPortalAccountEntity *activeAccountEntity;
- (void)fetchSingleEntityWithEntityId:(id)arg1 parentId:(id)arg2 entityType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fetchAdListWithAdSetId:(id)arg1 objective:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchAdSetListWithCampaignId:(id)arg1 objective:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchCampaignListWithAccountId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchEntityListWithEntityId:(id)arg1 entityType:(long long)arg2 objective:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_setDefaultActiveAccountIfNecessary;
- (void)_updateWithAccounts:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateWithAccounts:(id)arg1 targetAccountId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_createAccountsWithSOJUAccounts:(id)arg1 didFetchAd:(_Bool)arg2;
- (void)clear;
- (_Bool)saveState;
- (void)configureWithUserSession:(id)arg1;
- (void)setAdvertiser:(_Bool)arg1;
- (void)fetchAdAccountsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_handleUpdateAdStatusFailureWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateNotificationSettingWithAccountId:(id)arg1 type:(long long)arg2 enabled:(_Bool)arg3;
- (id)findAdAccountByAdAccountId:(id)arg1;
- (id)accounts;
@property(readonly, nonatomic) SCSnapAdsPortalAdAccount *activeAccount;
- (_Bool)updateActiveAccount:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

