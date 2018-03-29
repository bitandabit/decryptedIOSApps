//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCPBAdAdPreferences, SCPBAdAdProductsConfig, SCPBAdSourcesConfig, SCPBAdTrackInfo, SCPBBlizzardClientConfig, SCPBFeatureSettings, SCPBIdentityLagunaGetLagunaDevicesResponse, SCPBPromptMessage, SCPBResetDisabledTranscodingState, SCPBUnlockablesUnlockablesDirectAuthInfo, SCPBVideoRecordingTranscodingConfig;

@interface SCPBUpdatesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBAdAdPreferences *adPreferences; // @dynamic adPreferences;
@property(retain, nonatomic) SCPBAdAdProductsConfig *adProducts; // @dynamic adProducts;
@property(retain, nonatomic) SCPBAdSourcesConfig *adSources; // @dynamic adSources;
@property(retain, nonatomic) SCPBAdTrackInfo *adTrackInfo; // @dynamic adTrackInfo;
@property(retain, nonatomic) NSMutableArray *addedFriendsArray; // @dynamic addedFriendsArray;
@property(readonly, nonatomic) unsigned long long addedFriendsArray_Count; // @dynamic addedFriendsArray_Count;
@property(nonatomic) long long addedFriendsTimestamp; // @dynamic addedFriendsTimestamp;
@property(copy, nonatomic) NSString *allowedToUseCash; // @dynamic allowedToUseCash;
@property(nonatomic) _Bool amrCodecEnabledAndroid; // @dynamic amrCodecEnabledAndroid;
@property(nonatomic) _Bool androidMediaRecorderSurfaceRecordingEnabled; // @dynamic androidMediaRecorderSurfaceRecordingEnabled;
@property(nonatomic) _Bool audioNoteEnabledAndroid; // @dynamic audioNoteEnabledAndroid;
@property(copy, nonatomic) NSString *authToken; // @dynamic authToken;
@property(retain, nonatomic) NSMutableArray *bestsArray; // @dynamic bestsArray;
@property(readonly, nonatomic) unsigned long long bestsArray_Count; // @dynamic bestsArray_Count;
@property(copy, nonatomic) NSString *birthday; // @dynamic birthday;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(nonatomic) _Bool bitmojiHideDownloadPrompt; // @dynamic bitmojiHideDownloadPrompt;
@property(copy, nonatomic) NSString *bitmojiSelfieId; // @dynamic bitmojiSelfieId;
@property(copy, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @dynamic bitmojiSnapcodeSelfieId;
@property(retain, nonatomic) SCPBBlizzardClientConfig *blizzardConfig; // @dynamic blizzardConfig;
@property(copy, nonatomic) NSString *blizzardToken; // @dynamic blizzardToken;
@property(nonatomic) _Bool blurAfterDownscaleEnabledAndroid; // @dynamic blurAfterDownscaleEnabledAndroid;
@property(copy, nonatomic) NSString *businessAccountId; // @dynamic businessAccountId;
@property(nonatomic) _Bool camera1TakePhotoApiBlacklistedAndroid; // @dynamic camera1TakePhotoApiBlacklistedAndroid;
@property(nonatomic) _Bool camera1TakePhotoApiWhitelistedAndroid; // @dynamic camera1TakePhotoApiWhitelistedAndroid;
@property(nonatomic) _Bool camera2EnabledAndroid; // @dynamic camera2EnabledAndroid;
@property(nonatomic) _Bool camera2LimitedLevelHighResolutionPhotoEnabledAndroid; // @dynamic camera2LimitedLevelHighResolutionPhotoEnabledAndroid;
@property(nonatomic) _Bool camera2TakePhotoApiAndroid; // @dynamic camera2TakePhotoApiAndroid;
@property(copy, nonatomic) NSString *cashCustomerId; // @dynamic cashCustomerId;
@property(copy, nonatomic) NSString *cashProvider; // @dynamic cashProvider;
@property(nonatomic) _Bool chatVideoEnabledAndroid; // @dynamic chatVideoEnabledAndroid;
@property(retain, nonatomic) SCPBPromptMessage *clientPrompt; // @dynamic clientPrompt;
@property(retain, nonatomic) NSMutableArray *clientPromptsArray; // @dynamic clientPromptsArray;
@property(readonly, nonatomic) unsigned long long clientPromptsArray_Count; // @dynamic clientPromptsArray_Count;
@property(retain, nonatomic) NSMutableDictionary *clientProperties; // @dynamic clientProperties;
@property(retain, nonatomic) NSMutableArray *clientPropertiesV2Array; // @dynamic clientPropertiesV2Array;
@property(readonly, nonatomic) unsigned long long clientPropertiesV2Array_Count; // @dynamic clientPropertiesV2Array_Count;
@property(readonly, nonatomic) unsigned long long clientProperties_Count; // @dynamic clientProperties_Count;
@property(nonatomic) int contactsResyncRequest; // @dynamic contactsResyncRequest;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) long long created; // @dynamic created;
@property(nonatomic) int credits; // @dynamic credits;
@property(nonatomic) long long currentTimestamp; // @dynamic currentTimestamp;
@property(nonatomic) _Bool d2SMediaDownloadEnabled; // @dynamic d2SMediaDownloadEnabled;
@property(copy, nonatomic) NSString *deviceToken; // @dynamic deviceToken;
@property(nonatomic) _Bool dirtyVideoRenderingEnabledAndroid; // @dynamic dirtyVideoRenderingEnabledAndroid;
@property(nonatomic) _Bool discoverContentDisabled; // @dynamic discoverContentDisabled;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool eSnapMedia; // @dynamic eSnapMedia;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(nonatomic) _Bool enableArCoreAndroid; // @dynamic enableArCoreAndroid;
@property(nonatomic) _Bool enableFastFrameRateCameraInitializationAndroid; // @dynamic enableFastFrameRateCameraInitializationAndroid;
@property(nonatomic) _Bool enableImageTranscoding; // @dynamic enableImageTranscoding;
@property(nonatomic) _Bool enableLensesAndroid; // @dynamic enableLensesAndroid;
@property(nonatomic) _Bool enableLocationMediacards; // @dynamic enableLocationMediacards;
@property(nonatomic) _Bool enableRecordingHintAndroid; // @dynamic enableRecordingHintAndroid;
@property(nonatomic) _Bool enableSaveStoryToGallery; // @dynamic enableSaveStoryToGallery;
@property(nonatomic) _Bool enableSeparateLensListForBackCamera; // @dynamic enableSeparateLensListForBackCamera;
@property(nonatomic) _Bool enableVideoTranscodingAndroid; // @dynamic enableVideoTranscodingAndroid;
@property(nonatomic) _Bool enableWorldLensGrid; // @dynamic enableWorldLensGrid;
@property(retain, nonatomic) NSMutableArray *enabledIapCurrenciesArray; // @dynamic enabledIapCurrenciesArray;
@property(readonly, nonatomic) unsigned long long enabledIapCurrenciesArray_Count; // @dynamic enabledIapCurrenciesArray_Count;
@property(retain, nonatomic) NSMutableArray *enabledLensStoreCurrenciesArray; // @dynamic enabledLensStoreCurrenciesArray;
@property(readonly, nonatomic) unsigned long long enabledLensStoreCurrenciesArray_Count; // @dynamic enabledLensStoreCurrenciesArray_Count;
@property(nonatomic) _Bool enabledPushNotifications; // @dynamic enabledPushNotifications;
@property(retain, nonatomic) NSMutableDictionary *extraFriendmojiMutableDict; // @dynamic extraFriendmojiMutableDict;
@property(readonly, nonatomic) unsigned long long extraFriendmojiMutableDict_Count; // @dynamic extraFriendmojiMutableDict_Count;
@property(retain, nonatomic) NSMutableDictionary *extraFriendmojiReadOnlyDict; // @dynamic extraFriendmojiReadOnlyDict;
@property(readonly, nonatomic) unsigned long long extraFriendmojiReadOnlyDict_Count; // @dynamic extraFriendmojiReadOnlyDict_Count;
@property(retain, nonatomic) NSMutableArray *favoriteStickersArray; // @dynamic favoriteStickersArray;
@property(readonly, nonatomic) unsigned long long favoriteStickersArray_Count; // @dynamic favoriteStickersArray_Count;
@property(retain, nonatomic) SCPBFeatureSettings *featureSettings; // @dynamic featureSettings;
@property(retain, nonatomic) NSMutableArray *featureSettingsResponseArray; // @dynamic featureSettingsResponseArray;
@property(readonly, nonatomic) unsigned long long featureSettingsResponseArray_Count; // @dynamic featureSettingsResponseArray_Count;
@property(copy, nonatomic) NSString *fideliusLatestBeta; // @dynamic fideliusLatestBeta;
@property(retain, nonatomic) NSMutableArray *friendmojiBlockedKeysArray; // @dynamic friendmojiBlockedKeysArray;
@property(readonly, nonatomic) unsigned long long friendmojiBlockedKeysArray_Count; // @dynamic friendmojiBlockedKeysArray_Count;
@property(retain, nonatomic) NSMutableDictionary *friendmojiMutableDict; // @dynamic friendmojiMutableDict;
@property(readonly, nonatomic) unsigned long long friendmojiMutableDict_Count; // @dynamic friendmojiMutableDict_Count;
@property(retain, nonatomic) NSMutableDictionary *friendmojiReadOnlyDict; // @dynamic friendmojiReadOnlyDict;
@property(readonly, nonatomic) unsigned long long friendmojiReadOnlyDict_Count; // @dynamic friendmojiReadOnlyDict_Count;
@property(retain, nonatomic) NSMutableArray *friendsArray; // @dynamic friendsArray;
@property(readonly, nonatomic) unsigned long long friendsArray_Count; // @dynamic friendsArray_Count;
@property(copy, nonatomic) NSString *friendsSyncToken; // @dynamic friendsSyncToken;
@property(copy, nonatomic) NSString *friendsSyncType; // @dynamic friendsSyncType;
@property(nonatomic) _Bool frontCameraZoomEnabledAndroid; // @dynamic frontCameraZoomEnabledAndroid;
@property(nonatomic) int gaussianBlurLevelAndroid; // @dynamic gaussianBlurLevelAndroid;
@property(nonatomic) int gcsSampling; // @dynamic gcsSampling;
@property(nonatomic) _Bool gles3AllowedAndroid; // @dynamic gles3AllowedAndroid;
@property(nonatomic) _Bool hasAdPreferences; // @dynamic hasAdPreferences;
@property(nonatomic) _Bool hasAdProducts; // @dynamic hasAdProducts;
@property(nonatomic) _Bool hasAdSources; // @dynamic hasAdSources;
@property(nonatomic) _Bool hasAdTrackInfo; // @dynamic hasAdTrackInfo;
@property(nonatomic) _Bool hasBlizzardConfig; // @dynamic hasBlizzardConfig;
@property(nonatomic) _Bool hasClientPrompt; // @dynamic hasClientPrompt;
@property(nonatomic) _Bool hasFeatureSettings; // @dynamic hasFeatureSettings;
@property(nonatomic) _Bool hasLagunaResponse; // @dynamic hasLagunaResponse;
@property(nonatomic) _Bool hasResetDisabledImagePlayerState; // @dynamic hasResetDisabledImagePlayerState;
@property(nonatomic) _Bool hasResetDisabledTranscodingState; // @dynamic hasResetDisabledTranscodingState;
@property(nonatomic) _Bool hasUnlockablesDirectAuthInfo; // @dynamic hasUnlockablesDirectAuthInfo;
@property(nonatomic) _Bool hasUsedLaguna; // @dynamic hasUsedLaguna;
@property(nonatomic) _Bool hasVideoRecordingTranscodingConfiguration; // @dynamic hasVideoRecordingTranscodingConfiguration;
@property(nonatomic) _Bool imagePlayerEnabledAndroid; // @dynamic imagePlayerEnabledAndroid;
@property(retain, nonatomic) NSMutableArray *industriesArray; // @dynamic industriesArray;
@property(readonly, nonatomic) unsigned long long industriesArray_Count; // @dynamic industriesArray_Count;
@property(nonatomic) _Bool isCashActive; // @dynamic isCashActive;
@property(nonatomic) _Bool isOtpTwoFaEnabled; // @dynamic isOtpTwoFaEnabled;
@property(nonatomic) _Bool isPopular; // @dynamic isPopular;
@property(nonatomic) _Bool isSmsTwoFaEnabled; // @dynamic isSmsTwoFaEnabled;
@property(nonatomic) _Bool isTwoFaEnabled; // @dynamic isTwoFaEnabled;
@property(nonatomic) _Bool isVerifiedUser; // @dynamic isVerifiedUser;
@property(copy, nonatomic) NSString *iso3166Alpha2CountryCode; // @dynamic iso3166Alpha2CountryCode;
@property(copy, nonatomic) NSString *lagunaId; // @dynamic lagunaId;
@property(retain, nonatomic) SCPBIdentityLagunaGetLagunaDevicesResponse *lagunaResponse; // @dynamic lagunaResponse;
@property(nonatomic) long long lastAddressBookUpdatedDate; // @dynamic lastAddressBookUpdatedDate;
@property(nonatomic) long long lastReplayedSnapTimestamp; // @dynamic lastReplayedSnapTimestamp;
@property(nonatomic) long long lastUpdated; // @dynamic lastUpdated;
@property(nonatomic) _Bool logged; // @dynamic logged;
@property(copy, nonatomic) NSString *mobStoriesEnabled; // @dynamic mobStoriesEnabled;
@property(copy, nonatomic) NSString *mobile; // @dynamic mobile;
@property(copy, nonatomic) NSString *mobileVerificationKey; // @dynamic mobileVerificationKey;
@property(nonatomic) float nftHiTimeout; // @dynamic nftHiTimeout;
@property(nonatomic) float nftLoTimeout; // @dynamic nftLoTimeout;
@property(nonatomic) int notificationPrivacy; // @dynamic notificationPrivacy;
@property(copy, nonatomic) NSString *notificationSoundSetting; // @dynamic notificationSoundSetting;
@property(nonatomic) int numberOfBestFriends; // @dynamic numberOfBestFriends;
@property(retain, nonatomic) NSMutableArray *ourStoryAuthsArray; // @dynamic ourStoryAuthsArray;
@property(readonly, nonatomic) unsigned long long ourStoryAuthsArray_Count; // @dynamic ourStoryAuthsArray_Count;
@property(nonatomic) _Bool pinnableStickersEnabledAndroid; // @dynamic pinnableStickersEnabledAndroid;
@property(copy, nonatomic) NSString *prestartHostname; // @dynamic prestartHostname;
@property(copy, nonatomic) NSString *prestartPort; // @dynamic prestartPort;
@property(copy, nonatomic) NSString *prestartPrefix; // @dynamic prestartPrefix;
@property(copy, nonatomic) NSString *prestartToken; // @dynamic prestartToken;
@property(copy, nonatomic) NSString *qrPath; // @dynamic qrPath;
@property(copy, nonatomic) NSString *quickAddPrivacy; // @dynamic quickAddPrivacy;
@property(nonatomic) _Bool rawThumbnailUploadEnabled; // @dynamic rawThumbnailUploadEnabled;
@property(nonatomic) int received; // @dynamic received;
@property(retain, nonatomic) NSMutableArray *recentsArray; // @dynamic recentsArray;
@property(readonly, nonatomic) unsigned long long recentsArray_Count; // @dynamic recentsArray_Count;
@property(nonatomic) _Bool requireRefreshingProfileMedia; // @dynamic requireRefreshingProfileMedia;
@property(retain, nonatomic) SCPBResetDisabledTranscodingState *resetDisabledImagePlayerState; // @dynamic resetDisabledImagePlayerState;
@property(retain, nonatomic) SCPBResetDisabledTranscodingState *resetDisabledTranscodingState; // @dynamic resetDisabledTranscodingState;
@property(nonatomic) _Bool reverseFilterEnabledAndroid; // @dynamic reverseFilterEnabledAndroid;
@property(copy, nonatomic) NSString *ringingSound; // @dynamic ringingSound;
@property(nonatomic) _Bool samsungAacEncEnabledAndroid; // @dynamic samsungAacEncEnabledAndroid;
@property(nonatomic) _Bool scMediaRecorderEnabledAndroid; // @dynamic scMediaRecorderEnabledAndroid;
@property(nonatomic) _Bool scMediaRecorderRecommendedAndroid; // @dynamic scMediaRecorderRecommendedAndroid;
@property(nonatomic) int score; // @dynamic score;
@property(nonatomic) _Bool searchableByPhoneNumber; // @dynamic searchableByPhoneNumber;
@property(retain, nonatomic) NSMutableArray *seenTooltipsArray; // @dynamic seenTooltipsArray;
@property(readonly, nonatomic) unsigned long long seenTooltipsArray_Count; // @dynamic seenTooltipsArray_Count;
@property(nonatomic) int sent; // @dynamic sent;
@property(nonatomic) _Bool shouldCallToVerifyNumber; // @dynamic shouldCallToVerifyNumber;
@property(nonatomic) _Bool shouldShowSuggestionPrompt; // @dynamic shouldShowSuggestionPrompt;
@property(nonatomic) _Bool shouldTextToVerifyNumber; // @dynamic shouldTextToVerifyNumber;
@property(copy, nonatomic) NSString *sicInit; // @dynamic sicInit;
@property(nonatomic) _Bool smoothingFilterEnabledAndroid; // @dynamic smoothingFilterEnabledAndroid;
@property(nonatomic) int snapMediaUploadConnectionTimeout; // @dynamic snapMediaUploadConnectionTimeout;
@property(nonatomic) int snapMediaUploadSoTimeout; // @dynamic snapMediaUploadSoTimeout;
@property(nonatomic) int snapP; // @dynamic snapP;
@property(copy, nonatomic) NSString *snapchatPhoneNumber; // @dynamic snapchatPhoneNumber;
@property(retain, nonatomic) NSMutableArray *snapsArray; // @dynamic snapsArray;
@property(readonly, nonatomic) unsigned long long snapsArray_Count; // @dynamic snapsArray_Count;
@property(nonatomic) _Bool speedFiltersEnabledAndroid; // @dynamic speedFiltersEnabledAndroid;
@property(nonatomic) _Bool stickerVisualRecommendationEnabledAndroid; // @dynamic stickerVisualRecommendationEnabledAndroid;
@property(nonatomic) int storyCount; // @dynamic storyCount;
@property(copy, nonatomic) NSString *storyPrivacy; // @dynamic storyPrivacy;
@property(copy, nonatomic) NSString *studioSerialNumber; // @dynamic studioSerialNumber;
@property(retain, nonatomic) NSMutableDictionary *studySettings; // @dynamic studySettings;
@property(retain, nonatomic) NSMutableDictionary *studySettingsV2; // @dynamic studySettingsV2;
@property(readonly, nonatomic) unsigned long long studySettingsV2_Count; // @dynamic studySettingsV2_Count;
@property(readonly, nonatomic) unsigned long long studySettings_Count; // @dynamic studySettings_Count;
@property(copy, nonatomic) NSString *suggestionPromptButtonText; // @dynamic suggestionPromptButtonText;
@property(nonatomic) long long suggestionPromptDurationInMillis; // @dynamic suggestionPromptDurationInMillis;
@property(copy, nonatomic) NSString *suggestionPromptLink; // @dynamic suggestionPromptLink;
@property(copy, nonatomic) NSString *suggestionPromptText; // @dynamic suggestionPromptText;
@property(retain, nonatomic) NSMutableDictionary *targeting; // @dynamic targeting;
@property(readonly, nonatomic) unsigned long long targeting_Count; // @dynamic targeting_Count;
@property(copy, nonatomic) NSString *thirdPartyTrackingAppId; // @dynamic thirdPartyTrackingAppId;
@property(copy, nonatomic) NSString *thirdPartyTrackingBaseURL; // @dynamic thirdPartyTrackingBaseURL;
@property(nonatomic) int timeSinceLastTravelModelChange; // @dynamic timeSinceLastTravelModelChange;
@property(nonatomic) _Bool transcodingProfileLevelConfigurationAndroid; // @dynamic transcodingProfileLevelConfigurationAndroid;
@property(nonatomic) int twoFaVerifiedDeviceNum; // @dynamic twoFaVerifiedDeviceNum;
@property(retain, nonatomic) NSMutableArray *twoFaVerifiedDevicesArray; // @dynamic twoFaVerifiedDevicesArray;
@property(readonly, nonatomic) unsigned long long twoFaVerifiedDevicesArray_Count; // @dynamic twoFaVerifiedDevicesArray_Count;
@property(retain, nonatomic) SCPBUnlockablesUnlockablesDirectAuthInfo *unlockablesDirectAuthInfo; // @dynamic unlockablesDirectAuthInfo;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSMutableArray *verifiedSharedPublicationsArray; // @dynamic verifiedSharedPublicationsArray;
@property(readonly, nonatomic) unsigned long long verifiedSharedPublicationsArray_Count; // @dynamic verifiedSharedPublicationsArray_Count;
@property(nonatomic) _Bool videoDecoderTexcoordTransformationEnabledAndroid; // @dynamic videoDecoderTexcoordTransformationEnabledAndroid;
@property(nonatomic) _Bool videoFiltersEnabled; // @dynamic videoFiltersEnabled;
@property(nonatomic) _Bool videoNoteApiFallbackAndroid; // @dynamic videoNoteApiFallbackAndroid;
@property(nonatomic) _Bool videoNoteEnabledAndroid; // @dynamic videoNoteEnabledAndroid;
@property(retain, nonatomic) SCPBVideoRecordingTranscodingConfig *videoRecordingTranscodingConfiguration; // @dynamic videoRecordingTranscodingConfiguration;
@property(nonatomic) _Bool videoThumbnailEnabledAndroid; // @dynamic videoThumbnailEnabledAndroid;
@property(copy, nonatomic) NSString *voipDeviceToken; // @dynamic voipDeviceToken;

@end

