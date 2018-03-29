//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCloudSyncFeatureSettingsDataProvider-Protocol.h"
#import "SCUpdatesResponseListener-Protocol.h"

@class NSMutableDictionary, NSString, SCQueuePerformer, SCUserSession;

@interface SCFeatureSettingsManager : NSObject <SCCloudSyncFeatureSettingsDataProvider, SCUpdatesResponseListener>
{
    SCUserSession *_userSession;
    SCQueuePerformer *_updateQueuePerformer;
    NSMutableDictionary *_batchedChanges;
}

+ (id)_currentManager;
+ (void)_setCurrentManager:(id)arg1;
- (void).cxx_destruct;
- (void)didReceiveUpdatesResponse:(id)arg1;
- (id)_generateNewEntryForFeatureSetting:(id)arg1 withValue:(id)arg2;
- (void)_removeFromNeedToSyncSettings:(id)arg1;
- (void)_addToNeedToSyncSettings:(id)arg1;
- (void)_didSyncToServer:(id)arg1;
- (void)_syncToServer:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_syncToServer;
- (id)_featureSettingForKey:(id)arg1;
- (id)_keyForFeatureSetting:(id)arg1;
- (void)_setFeatureSetting:(id)arg1 entry:(id)arg2 needToSync:(_Bool)arg3 synchronously:(_Bool)arg4;
- (id)parametersToSync;
- (id)needToSyncSettings;
- (id)serverValueFromClientValue:(id)arg1 forServerParam:(id)arg2;
- (id)clientValueFromServerValue:(id)arg1 forServerParam:(id)arg2;
- (id)entryForFeatureSetting:(id)arg1;
- (void)setFeatureSetting:(id)arg1 value:(id)arg2;
- (void)synchronize;
- (void)applyFeatureSettingsFromLoginResponse:(id)arg1;
- (void)performChangesToServer:(CDUnknownBlockType)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)performChanges:(CDUnknownBlockType)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)observeKeys:(id)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;
- (void)_setFeatureSetting:(id)arg1 stringValue:(id)arg2;
- (void)_setFeatureSetting:(id)arg1 unsignedLongValue:(unsigned long long)arg2;
- (void)_setFeatureSetting:(id)arg1 longValue:(long long)arg2;
- (void)_setFeatureSetting:(id)arg1 doubleValue:(double)arg2;
- (void)_setFeatureSetting:(id)arg1 boolValue:(_Bool)arg2;
- (_Bool)_hasFeatureSettingAvailable:(id)arg1;
- (double)_doubleForFeatureSetting:(id)arg1 defaultValue:(double)arg2;
- (unsigned long long)_uintegerForFeatureSetting:(id)arg1 defaultValue:(long long)arg2;
- (long long)_integerForFeatureSetting:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)_boolForFeatureSetting:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_stringForFeatureSetting:(id)arg1 defaultValue:(id)arg2;
- (long long)handsFreeSeenCount;
- (id)hands_free_seen_count_server_value:(id)arg1;
- (id)hands_free_seen_count_client_value:(id)arg1;
- (void)setHandsFreeSeenCount:(long long)arg1;
- (id)handsFreeSeenCountServerParam;
- (_Bool)isHandsFreeSeenCountAvailable;
- (long long)handsFreeEnabledCount;
- (id)hands_free_enabled_count_server_value:(id)arg1;
- (id)hands_free_enabled_count_client_value:(id)arg1;
- (void)setHandsFreeEnabledCount:(long long)arg1;
- (id)handsFreeEnabledCountServerParam;
- (_Bool)isHandsFreeEnabledCountAvailable;
- (long long)storyPostDelay;
- (id)story_post_delay_server_value:(id)arg1;
- (id)story_post_delay_client_value:(id)arg1;
- (void)setStoryPostDelay:(long long)arg1;
- (id)storyPostDelayServerParam;
- (_Bool)isStoryPostDelayAvailable;
- (long long)sideFadingLensButtonClickCount;
- (id)side_fading_lens_button_click_count_server_value:(id)arg1;
- (id)side_fading_lens_button_click_count_client_value:(id)arg1;
- (void)setSideFadingLensButtonClickCount:(long long)arg1;
- (id)sideFadingLensButtonClickCountServerParam;
- (_Bool)isSideFadingLensButtonClickCountAvailable;
- (id)defaultEmojiSkinTone;
- (id)default_emoji_skin_tone_server_value:(id)arg1;
- (id)default_emoji_skin_tone_client_value:(id)arg1;
- (void)setDefaultEmojiSkinTone:(id)arg1;
- (id)defaultEmojiSkinToneServerParam;
- (_Bool)isDefaultEmojiSkinToneAvailable;
- (id)ratingInAppPromptRecords;
- (id)rating_inapp_prompt_records_server_value:(id)arg1;
- (id)rating_inapp_prompt_records_client_value:(id)arg1;
- (void)setRatingInAppPromptRecords:(id)arg1;
- (id)ratingInAppPromptRecordsServerParam;
- (_Bool)isRatingInAppPromptRecordsAvailable;
- (_Bool)notificationUserTagging;
- (id)notification_user_tagging_server_value:(id)arg1;
- (id)notification_user_tagging_client_value:(id)arg1;
- (void)setNotificationUserTagging:(_Bool)arg1;
- (id)notificationUserTaggingServerParam;
- (_Bool)isNotificationUserTaggingAvailable;
- (_Bool)notificationAvailableFriendSuggestions;
- (id)notification_available_friend_suggestions_server_value:(id)arg1;
- (id)notification_available_friend_suggestions_client_value:(id)arg1;
- (void)setNotificationAvailableFriendSuggestions:(_Bool)arg1;
- (id)notificationAvailableFriendSuggestionsServerParam;
- (_Bool)isNotificationAvailableFriendSuggestionsAvailable;
- (_Bool)notificationAvailableStories;
- (id)notification_available_stories_server_value:(id)arg1;
- (id)notification_available_stories_client_value:(id)arg1;
- (void)setNotificationAvailableStories:(_Bool)arg1;
- (id)notificationAvailableStoriesServerParam;
- (_Bool)isNotificationAvailableStoriesAvailable;
- (long long)emailVerificationPromptGracePeriodSecs;
- (id)email_verification_prompt_grace_period_secs_server_value:(id)arg1;
- (id)email_verification_prompt_grace_period_secs_client_value:(id)arg1;
- (void)setEmailVerificationPromptGracePeriodSecs:(long long)arg1;
- (id)emailVerificationPromptGracePeriodSecsServerParam;
- (_Bool)isEmailVerificationPromptGracePeriodSecsAvailable;
- (long long)emailVerificationPromptToShowAtSecs;
- (id)email_verification_prompt_to_show_at_secs_server_value:(id)arg1;
- (id)email_verification_prompt_to_show_at_secs_client_value:(id)arg1;
- (void)setEmailVerificationPromptToShowAtSecs:(long long)arg1;
- (id)emailVerificationPromptToShowAtSecsServerParam;
- (_Bool)isEmailVerificationPromptToShowAtSecsAvailable;
- (_Bool)suicidePreventionDebug;
- (id)suicide_prevention_debug_server_value:(id)arg1;
- (id)suicide_prevention_debug_client_value:(id)arg1;
- (id)suicidePreventionDebugServerParam;
- (_Bool)isSuicidePreventionDebugAvailable;
- (long long)suicidePreventionVanishAfterSeenSecs;
- (id)suicide_prevention_vanish_after_seen_secs_server_value:(id)arg1;
- (id)suicide_prevention_vanish_after_seen_secs_client_value:(id)arg1;
- (id)suicidePreventionVanishAfterSeenSecsServerParam;
- (_Bool)isSuicidePreventionVanishAfterSeenSecsAvailable;
- (long long)suicidePreventionFirstSeenAtSecs;
- (id)suicide_prevention_first_seen_at_secs_server_value:(id)arg1;
- (id)suicide_prevention_first_seen_at_secs_client_value:(id)arg1;
- (void)setSuicidePreventionFirstSeenAtSecs:(long long)arg1;
- (id)suicidePreventionFirstSeenAtSecsServerParam;
- (_Bool)isSuicidePreventionFirstSeenAtSecsAvailable;
- (long long)suicidePreventionFlaggedAtSecs;
- (id)suicide_prevention_flagged_at_secs_server_value:(id)arg1;
- (id)suicide_prevention_flagged_at_secs_client_value:(id)arg1;
- (void)setSuicidePreventionFlaggedAtSecs:(long long)arg1;
- (id)suicidePreventionFlaggedAtSecsServerParam;
- (_Bool)isSuicidePreventionFlaggedAtSecsAvailable;
- (long long)sendToRankingVersion;
- (id)send_to_ranking_version_server_value:(id)arg1;
- (id)send_to_ranking_version_client_value:(id)arg1;
- (id)sendToRankingVersionServerParam;
- (_Bool)sendToRankingVersionNumber;
- (id)snapStoreCellDeeplinkURL;
- (id)snap_store_cell_deeplink_server_value:(id)arg1;
- (id)snap_store_cell_deeplink_client_value:(id)arg1;
- (id)snapStoreCellDeeplinkURLServerParam;
- (_Bool)isSnapStoreCellDeeplinkURLAvailable;
- (_Bool)snapStoreCellEnabled;
- (id)snap_store_cell_enabled_server_value:(id)arg1;
- (id)snap_store_cell_enabled_client_value:(id)arg1;
- (id)snapStoreCellEnabledServerParam;
- (_Bool)isSnapStoreCellEnabledAvailable;
- (id)paymentsSettingsMinVersion;
- (id)payments_min_version_server_value:(id)arg1;
- (id)payments_min_version_client_value:(id)arg1;
- (id)paymentsSettingsMinVersionServerParam;
- (_Bool)isPaymentsSettingsMinVersionAvailable;
- (_Bool)paymentsSettingsEnabled;
- (id)payments_settings_enabled_server_value:(id)arg1;
- (id)payments_settings_enabled_client_value:(id)arg1;
- (id)paymentsSettingsEnabledServerParam;
- (_Bool)isPaymentsSettingsAvailable;
- (_Bool)commerceEnabled;
- (id)commerce_enabled_server_value:(id)arg1;
- (id)commerce_enabled_client_value:(id)arg1;
- (id)commerceEnabledServerParam;
- (_Bool)isCommerceAvailable;
- (id)spectaclesBuyNativeDeeplinkData;
- (id)spectacles_buy_native_deeplink_data_server_value:(id)arg1;
- (id)spectacles_buy_native_deeplink_data_client_value:(id)arg1;
- (id)spectaclesBuyNativeDeeplinkDataServerParam;
- (_Bool)spectaclesBuyDeeplinkData;
- (_Bool)spectaclesBuyNativeEnabled;
- (id)spectacles_buy_native_enabled_server_value:(id)arg1;
- (id)spectacles_buy_native_enabled_client_value:(id)arg1;
- (id)spectaclesBuyNativeEnabledServerParam;
- (_Bool)isSpectaclesBuyNativeAvailable;
- (_Bool)postBlockPrivacyPromptDebug;
- (id)post_block_privacy_prompt_debug_server_value:(id)arg1;
- (id)post_block_privacy_prompt_debug_client_value:(id)arg1;
- (id)postBlockPrivacyPromptDebugServerParam;
- (_Bool)isPostBlockPrivacyPromptDebugAvailable;
- (_Bool)postBlockPrivacyPromptEnabled;
- (id)post_block_privacy_prompt_enabled_server_value:(id)arg1;
- (id)post_block_privacy_prompt_enabled_client_value:(id)arg1;
- (id)postBlockPrivacyPromptEnabledServerParam;
- (_Bool)isPostBlockPrivacyPromptEnabledAvailable;
- (long long)postBlockPrivacyPromptGracePeriodSecs;
- (id)post_block_privacy_prompt_grace_period_secs_server_value:(id)arg1;
- (id)post_block_privacy_prompt_grace_period_secs_client_value:(id)arg1;
- (id)postBlockPrivacyPromptGracePeriodSecsServerParam;
- (_Bool)isPostBlockPrivacyPromptGracePeriodSecsAvailable;
- (long long)postBlockPrivacyPromptLastSeenAtSecs;
- (id)post_block_privacy_prompt_last_seen_at_secs_server_value:(id)arg1;
- (id)post_block_privacy_prompt_last_seen_at_secs_client_value:(id)arg1;
- (void)setPostBlockPrivacyPromptLastSeenAtSecs:(long long)arg1;
- (id)postBlockPrivacyPromptLastSeenAtSecsServerParam;
- (_Bool)isPostBlockPrivacyPromptLastSeenAtSecsAvailable;
- (_Bool)mapUsageDataSharingEnabled;
- (id)map_usage_data_sharing_enabled_server_value:(id)arg1;
- (id)map_usage_data_sharing_enabled_client_value:(id)arg1;
- (void)setMapUsageDataSharingEnabled:(_Bool)arg1;
- (id)mapUsageDataSharingEnabledServerParam;
- (_Bool)isMapUsageDataSharingEnabledAvailable;
- (_Bool)galleryStoryAutoSaving;
- (id)gallery_story_auto_saving_server_value:(id)arg1;
- (id)gallery_story_auto_saving_client_value:(id)arg1;
- (void)setGalleryStoryAutoSaving:(_Bool)arg1;
- (id)galleryStoryAutoSavingServerParam;
- (_Bool)isGalleryStoryAutoSavingAvailable;
@property(nonatomic) _Bool galleryForcedResyncRequired;
- (id)gallery_forced_resync_required_server_value:(id)arg1;
- (id)gallery_forced_resync_required_client_value:(id)arg1;
- (id)galleryForcedResyncRequiredServerParam;
- (_Bool)isGalleryForcedResyncRequiredAvailable;
- (id)gallerySnapSaveOption;
- (id)gallery_snap_save_option_server_value:(id)arg1;
- (id)gallery_snap_save_option_client_value:(id)arg1;
- (void)setGallerySnapSaveOption:(id)arg1;
- (id)gallerySnapSaveOptionServerParam;
- (_Bool)isGallerySnapSaveOptionAvailable;
- (_Bool)gallerySaveToPrivateGalleryByDefault;
- (id)gallery_save_to_private_gallery_by_default_server_value:(id)arg1;
- (id)gallery_save_to_private_gallery_by_default_client_value:(id)arg1;
- (void)setGallerySaveToPrivateGalleryByDefault:(_Bool)arg1;
- (id)gallerySaveToPrivateGalleryByDefaultServerParam;
- (_Bool)isGallerySaveToPrivateGalleryByDefaultAvailable;
- (_Bool)galleryTopSecretPrivateGalleryEnabled;
- (id)gallery_top_secret_private_gallery_enabled_server_value:(id)arg1;
- (id)gallery_top_secret_private_gallery_enabled_client_value:(id)arg1;
- (void)setGalleryTopSecretPrivateGalleryEnabled:(_Bool)arg1;
- (id)galleryTopSecretPrivateGalleryEnabledServerParam;
- (_Bool)isGalleryTopSecretPrivateGalleryEnabledAvailable;
- (_Bool)galleryPrivateGalleryEnabled;
- (id)gallery_private_gallery_enabled_server_value:(id)arg1;
- (id)gallery_private_gallery_enabled_client_value:(id)arg1;
- (void)setGalleryPrivateGalleryEnabled:(_Bool)arg1;
- (id)galleryPrivateGalleryEnabledServerParam;
- (_Bool)isGalleryPrivateGalleryEnabledAvailable;
@property(nonatomic) _Bool gallerySyncRequired;
- (id)gallery_sync_required_server_value:(id)arg1;
- (id)gallery_sync_required_client_value:(id)arg1;
- (id)gallerySyncRequiredServerParam;
- (_Bool)isGallerySyncRequired;
- (_Bool)galleryCollectionsSyncRequired;
- (id)gallery_collections_sync_required_server_value:(id)arg1;
- (id)gallery_collections_sync_required_client_value:(id)arg1;
- (void)setGalleryCollectionsSyncRequired:(_Bool)arg1;
- (id)galleryCollectionsSyncRequiredServerParam;
- (_Bool)isGalleryCollectionsSyncRequiredAvailable;
- (_Bool)galleryBackupOnCellular;
- (id)gallery_back_up_on_cellular_server_value:(id)arg1;
- (id)gallery_back_up_on_cellular_client_value:(id)arg1;
- (void)setGalleryBackupOnCellular:(_Bool)arg1;
- (id)galleryBackupOnCellularServerParam;
- (_Bool)isGalleryBackupOnCellularAvailable;
- (_Bool)showTravelModeAtTopInSettings;
- (id)show_travel_mode_at_top_in_settings_server_value:(id)arg1;
- (id)show_travel_mode_at_top_in_settings_client_value:(id)arg1;
- (id)showTravelModeAtTopInSettingsServerParam;
- (_Bool)isShowTravelModeAtTopInSettingsAvailable;
- (_Bool)isSnapAdsPortalContributor;
- (id)is_snap_ads_portal_contributor_server_value:(id)arg1;
- (id)is_snap_ads_portal_contributor_client_value:(id)arg1;
- (id)isSnapAdsPortalContributorServerParam;
- (_Bool)isIsSnapAdsPortalContributorAvailable;
- (_Bool)isAdvertiser;
- (id)is_advertiser_server_value:(id)arg1;
- (id)is_advertiser_client_value:(id)arg1;
- (id)isAdvertiserServerParam;
- (_Bool)isIsAdvertiserAvailable;
- (_Bool)galleryEnabled;
- (id)gallery_enabled_server_value:(id)arg1;
- (id)gallery_enabled_client_value:(id)arg1;
- (void)setGalleryEnabled:(_Bool)arg1;
- (id)galleryEnabledServerParam;
- (_Bool)isGalleryEnabledAvailable;
- (_Bool)visualFiltersEnabled;
- (id)visual_filters_server_value:(id)arg1;
- (id)visual_filters_client_value:(id)arg1;
- (void)setVisualFiltersEnabled:(_Bool)arg1;
- (id)visualFiltersEnabledServerParam;
- (_Bool)isvVisualFiltersEnabledAvailable;
- (_Bool)smartFiltersEnabled;
- (id)smart_filters_server_value:(id)arg1;
- (id)smart_filters_client_value:(id)arg1;
- (void)setSmartFiltersEnabled:(_Bool)arg1;
- (id)smartFiltersEnabledServerParam;
- (_Bool)isSmartFiltersEnabledAvailable;
- (_Bool)qrCodeScanEnabled;
- (id)qrcode_enabled_server_value:(id)arg1;
- (id)qrcode_enabled_client_value:(id)arg1;
- (id)qrCodeScanEnabledServerParam;
- (_Bool)isQrCodeScanEnabledAvailable;
- (_Bool)barCodeScanEnabled;
- (id)barcode_enabled_server_value:(id)arg1;
- (id)barcode_enabled_client_value:(id)arg1;
- (id)barCodeScanEnabledServerParam;
- (_Bool)isBarCodeScanEnabledAvailable;
- (_Bool)birthdayPartyEnabled;
- (id)is_birthday_party_enabled_server_value:(id)arg1;
- (id)is_birthday_party_enabled_client_value:(id)arg1;
- (void)setBirthdayPartyEnabled:(_Bool)arg1;
- (id)birthdayPartyEnabledServerParam;
- (_Bool)isBirthdayPartyEnabledAvailable;
- (_Bool)travelModeEnabled;
- (id)travel_mode_server_value:(id)arg1;
- (id)travel_mode_client_value:(id)arg1;
- (void)setTravelModeEnabled:(_Bool)arg1;
- (id)travelModeEnabledServerParam;
- (_Bool)isTravelModeEnabledAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

