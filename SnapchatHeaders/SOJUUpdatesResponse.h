//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUUpdatesResponse-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdAdPreferences, SOJUAdAdProductsConfig, SOJUAdSourcesConfig, SOJUAdTrackInfo, SOJUBlizzardClientConfig, SOJUFeatureSettings, SOJUIdentityLagunaGetLagunaDevicesResponse, SOJUPromptMessage, SOJUResetDisabledTranscodingState, SOJUUnlockablesUnlockablesDirectAuthInfo, SOJUVideoRecordingTranscodingConfig;

@interface SOJUUpdatesResponse : NSObject <SOJUUpdatesResponse>
{
    NSArray *_friends;
    NSString *_friendsSyncToken;
    NSString *_friendsSyncType;
    NSArray *_addedFriends;
    NSArray *_bests;
    NSDictionary *_extraFriendmojiMutableDict;
    NSDictionary *_extraFriendmojiReadOnlyDict;
    NSNumber *_logged;
    NSString *_username;
    NSString *_userId;
    NSString *_bitmojiAvatarId;
    NSNumber *_bitmojiHideDownloadPrompt;
    NSNumber *_isVerifiedUser;
    NSString *_authToken;
    NSString *_deviceToken;
    NSString *_blizzardToken;
    NSString *_email;
    NSString *_mobile;
    NSString *_mobileVerificationKey;
    NSNumber *_enableVideoTranscodingAndroid;
    SOJUResetDisabledTranscodingState *_resetDisabledTranscodingState;
    NSNumber *_enableImageTranscoding;
    NSNumber *_transcodingProfileLevelConfigurationAndroid;
    NSNumber *_enableLensesAndroid;
    NSNumber *_enableRecordingHintAndroid;
    NSNumber *_enableFastFrameRateCameraInitializationAndroid;
    NSNumber *_gaussianBlurLevelAndroid;
    NSNumber *_enableSaveStoryToGallery;
    NSString *_birthday;
    NSNumber *_snapP;
    NSNumber *_notificationPrivacy;
    NSString *_storyPrivacy;
    NSString *_quickAddPrivacy;
    NSNumber *_sent;
    NSNumber *_received;
    NSNumber *_score;
    NSNumber *_credits;
    NSArray *_snaps;
    NSArray *_recents;
    NSNumber *_lastUpdated;
    NSNumber *_addedFriendsTimestamp;
    NSNumber *_currentTimestamp;
    NSNumber *_lastReplayedSnapTimestamp;
    NSString *_snapchatPhoneNumber;
    NSNumber *_searchableByPhoneNumber;
    NSNumber *_shouldCallToVerifyNumber;
    NSNumber *_shouldTextToVerifyNumber;
    NSArray *_seenTooltips;
    NSDictionary *_clientProperties;
    NSArray *_clientPropertiesV2;
    SOJUFeatureSettings *_featureSettings;
    SOJUAdAdPreferences *_adPreferences;
    NSNumber *_numberOfBestFriends;
    NSDictionary *_studySettings;
    NSNumber *_isCashActive;
    NSString *_cashProvider;
    NSString *_cashCustomerId;
    NSString *_allowedToUseCash;
    NSString *_thirdPartyTrackingBaseUrl;
    NSString *_thirdPartyTrackingAppId;
    NSNumber *_lastAddressBookUpdatedDate;
    NSString *_qrPath;
    NSNumber *_enableLocationMediacards;
    NSNumber *_requireRefreshingProfileMedia;
    NSNumber *_shouldShowSuggestionPrompt;
    NSString *_suggestionPromptLink;
    NSString *_suggestionPromptText;
    NSString *_suggestionPromptButtonText;
    NSNumber *_suggestionPromptDurationInMillis;
    NSNumber *_videoFiltersEnabled;
    NSNumber *_imagePlayerEnabledAndroid;
    NSNumber *_speedFiltersEnabledAndroid;
    NSNumber *_reverseFilterEnabledAndroid;
    NSNumber *_smoothingFilterEnabledAndroid;
    NSNumber *_dirtyVideoRenderingEnabledAndroid;
    NSNumber *_videoDecoderTexcoordTransformationEnabledAndroid;
    NSNumber *_pinnableStickersEnabledAndroid;
    NSNumber *_camera2LimitedLevelHighResolutionPhotoEnabledAndroid;
    NSNumber *_scMediaRecorderEnabledAndroid;
    NSNumber *_scMediaRecorderRecommendedAndroid;
    NSNumber *_androidMediaRecorderSurfaceRecordingEnabled;
    NSNumber *_camera1TakePhotoApiBlacklistedAndroid;
    NSNumber *_camera1TakePhotoApiWhitelistedAndroid;
    NSNumber *_camera2EnabledAndroid;
    NSNumber *_gles3AllowedAndroid;
    NSNumber *_blurAfterDownscaleEnabledAndroid;
    NSNumber *_amrCodecEnabledAndroid;
    NSNumber *_samsungAacEncEnabledAndroid;
    NSNumber *_audioNoteEnabledAndroid;
    NSNumber *_videoNoteEnabledAndroid;
    NSNumber *_videoNoteApiFallbackAndroid;
    NSNumber *_chatVideoEnabledAndroid;
    NSNumber *_videoThumbnailEnabledAndroid;
    NSArray *_ourStoryAuths;
    NSDictionary *_targeting;
    SOJUAdSourcesConfig *_adSources;
    SOJUAdTrackInfo *_adTrackInfo;
    SOJUAdAdProductsConfig *_adProducts;
    NSArray *_industries;
    NSNumber *_rawThumbnailUploadEnabled;
    NSNumber *_isSmsTwoFaEnabled;
    NSNumber *_isOtpTwoFaEnabled;
    NSNumber *_isTwoFaEnabled;
    NSNumber *_twoFaVerifiedDeviceNum;
    NSArray *_twoFaVerifiedDevices;
    NSDictionary *_friendmojiMutableDict;
    NSDictionary *_friendmojiReadOnlyDict;
    NSArray *_favoriteStickers;
    NSArray *_verifiedSharedPublications;
    NSArray *_enabledIapCurrencies;
    NSArray *_enabledLensStoreCurrencies;
    SOJUPromptMessage *_clientPromptDeprecated;
    NSString *_notificationSoundSetting;
    NSString *_ringingSound;
    NSNumber *_contactsResyncRequest;
    NSNumber *_gcsSampling;
    NSNumber *_snapMediaUploadConnectionTimeout;
    NSNumber *_snapMediaUploadSoTimeout;
    NSString *_lagunaId;
    SOJUIdentityLagunaGetLagunaDevicesResponse *_lagunaResponse;
    NSNumber *_hasUsedLaguna;
    NSNumber *_eSnapMedia;
    SOJUVideoRecordingTranscodingConfig *_videoRecordingTranscodingConfiguration;
    NSNumber *_storyCount;
    NSNumber *_frontCameraZoomEnabledAndroid;
    NSString *_displayName;
    NSNumber *_camera2TakePhotoApiAndroid;
    NSNumber *_enableWorldLensGrid;
    NSNumber *_nftLoTimeout;
    NSNumber *_nftHiTimeout;
    NSString *_countryCode;
    NSString *_voipDeviceToken;
    NSString *_sicInit;
    NSNumber *_enabledPushNotifications;
    NSNumber *_stickerVisualRecommendationEnabledAndroid;
    NSString *_prestartToken;
    NSString *_prestartPrefix;
    NSString *_prestartPort;
    NSString *_prestartHostname;
    NSArray *_featureSettingsResponse;
    NSString *_mobStoriesEnabled;
    SOJUBlizzardClientConfig *_blizzardConfig;
    NSArray *_friendmojiBlockedKeys;
    NSArray *_clientPrompts;
    NSNumber *_timeSinceLastTravelModelChange;
    SOJUResetDisabledTranscodingState *_resetDisabledImagePlayerState;
    NSNumber *_discoverContentDisabled;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiSnapcodeSelfieId;
    NSNumber *_d2sMediaDownloadEnabled;
    NSString *_fideliusLatestBeta;
    NSString *_studioSerialNumber;
    NSNumber *_enableSeparateLensListForBackCamera;
    NSString *_iso3166Alpha2CountryCode;
    NSNumber *_created;
    SOJUUnlockablesUnlockablesDirectAuthInfo *_unlockablesDirectAuthInfo;
    NSNumber *_isPopular;
    NSString *_businessAccountId;
    NSDictionary *_studySettingsV2;
    NSNumber *_enableArCoreAndroid;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *enableArCoreAndroid; // @synthesize enableArCoreAndroid=_enableArCoreAndroid;
@property(readonly, copy, nonatomic) NSDictionary *studySettingsV2; // @synthesize studySettingsV2=_studySettingsV2;
@property(readonly, copy, nonatomic) NSString *businessAccountId; // @synthesize businessAccountId=_businessAccountId;
@property(readonly, copy, nonatomic) NSNumber *isPopular; // @synthesize isPopular=_isPopular;
@property(readonly, copy, nonatomic) SOJUUnlockablesUnlockablesDirectAuthInfo *unlockablesDirectAuthInfo; // @synthesize unlockablesDirectAuthInfo=_unlockablesDirectAuthInfo;
@property(readonly, copy, nonatomic) NSNumber *created; // @synthesize created=_created;
@property(readonly, copy, nonatomic) NSString *iso3166Alpha2CountryCode; // @synthesize iso3166Alpha2CountryCode=_iso3166Alpha2CountryCode;
@property(readonly, copy, nonatomic) NSNumber *enableSeparateLensListForBackCamera; // @synthesize enableSeparateLensListForBackCamera=_enableSeparateLensListForBackCamera;
@property(readonly, copy, nonatomic) NSString *studioSerialNumber; // @synthesize studioSerialNumber=_studioSerialNumber;
@property(readonly, copy, nonatomic) NSString *fideliusLatestBeta; // @synthesize fideliusLatestBeta=_fideliusLatestBeta;
@property(readonly, copy, nonatomic) NSNumber *d2sMediaDownloadEnabled; // @synthesize d2sMediaDownloadEnabled=_d2sMediaDownloadEnabled;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @synthesize bitmojiSnapcodeSelfieId=_bitmojiSnapcodeSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSNumber *discoverContentDisabled; // @synthesize discoverContentDisabled=_discoverContentDisabled;
@property(readonly, copy, nonatomic) SOJUResetDisabledTranscodingState *resetDisabledImagePlayerState; // @synthesize resetDisabledImagePlayerState=_resetDisabledImagePlayerState;
@property(readonly, copy, nonatomic) NSNumber *timeSinceLastTravelModelChange; // @synthesize timeSinceLastTravelModelChange=_timeSinceLastTravelModelChange;
@property(readonly, copy, nonatomic) NSArray *clientPrompts; // @synthesize clientPrompts=_clientPrompts;
@property(readonly, copy, nonatomic) NSArray *friendmojiBlockedKeys; // @synthesize friendmojiBlockedKeys=_friendmojiBlockedKeys;
@property(readonly, copy, nonatomic) SOJUBlizzardClientConfig *blizzardConfig; // @synthesize blizzardConfig=_blizzardConfig;
@property(readonly, copy, nonatomic) NSString *mobStoriesEnabled; // @synthesize mobStoriesEnabled=_mobStoriesEnabled;
@property(readonly, copy, nonatomic) NSArray *featureSettingsResponse; // @synthesize featureSettingsResponse=_featureSettingsResponse;
@property(readonly, copy, nonatomic) NSString *prestartHostname; // @synthesize prestartHostname=_prestartHostname;
@property(readonly, copy, nonatomic) NSString *prestartPort; // @synthesize prestartPort=_prestartPort;
@property(readonly, copy, nonatomic) NSString *prestartPrefix; // @synthesize prestartPrefix=_prestartPrefix;
@property(readonly, copy, nonatomic) NSString *prestartToken; // @synthesize prestartToken=_prestartToken;
@property(readonly, copy, nonatomic) NSNumber *stickerVisualRecommendationEnabledAndroid; // @synthesize stickerVisualRecommendationEnabledAndroid=_stickerVisualRecommendationEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *enabledPushNotifications; // @synthesize enabledPushNotifications=_enabledPushNotifications;
@property(readonly, copy, nonatomic) NSString *sicInit; // @synthesize sicInit=_sicInit;
@property(readonly, copy, nonatomic) NSString *voipDeviceToken; // @synthesize voipDeviceToken=_voipDeviceToken;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSNumber *nftHiTimeout; // @synthesize nftHiTimeout=_nftHiTimeout;
@property(readonly, copy, nonatomic) NSNumber *nftLoTimeout; // @synthesize nftLoTimeout=_nftLoTimeout;
@property(readonly, copy, nonatomic) NSNumber *enableWorldLensGrid; // @synthesize enableWorldLensGrid=_enableWorldLensGrid;
@property(readonly, copy, nonatomic) NSNumber *camera2TakePhotoApiAndroid; // @synthesize camera2TakePhotoApiAndroid=_camera2TakePhotoApiAndroid;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSNumber *frontCameraZoomEnabledAndroid; // @synthesize frontCameraZoomEnabledAndroid=_frontCameraZoomEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *storyCount; // @synthesize storyCount=_storyCount;
@property(readonly, copy, nonatomic) SOJUVideoRecordingTranscodingConfig *videoRecordingTranscodingConfiguration; // @synthesize videoRecordingTranscodingConfiguration=_videoRecordingTranscodingConfiguration;
@property(readonly, copy, nonatomic) NSNumber *eSnapMedia; // @synthesize eSnapMedia=_eSnapMedia;
@property(readonly, copy, nonatomic) NSNumber *hasUsedLaguna; // @synthesize hasUsedLaguna=_hasUsedLaguna;
@property(readonly, copy, nonatomic) SOJUIdentityLagunaGetLagunaDevicesResponse *lagunaResponse; // @synthesize lagunaResponse=_lagunaResponse;
@property(readonly, copy, nonatomic) NSString *lagunaId; // @synthesize lagunaId=_lagunaId;
@property(readonly, copy, nonatomic) NSNumber *snapMediaUploadSoTimeout; // @synthesize snapMediaUploadSoTimeout=_snapMediaUploadSoTimeout;
@property(readonly, copy, nonatomic) NSNumber *snapMediaUploadConnectionTimeout; // @synthesize snapMediaUploadConnectionTimeout=_snapMediaUploadConnectionTimeout;
@property(readonly, copy, nonatomic) NSNumber *gcsSampling; // @synthesize gcsSampling=_gcsSampling;
@property(readonly, copy, nonatomic) NSNumber *contactsResyncRequest; // @synthesize contactsResyncRequest=_contactsResyncRequest;
@property(readonly, copy, nonatomic) NSString *ringingSound; // @synthesize ringingSound=_ringingSound;
@property(readonly, copy, nonatomic) NSString *notificationSoundSetting; // @synthesize notificationSoundSetting=_notificationSoundSetting;
@property(readonly, copy, nonatomic) SOJUPromptMessage *clientPromptDeprecated; // @synthesize clientPromptDeprecated=_clientPromptDeprecated;
@property(readonly, copy, nonatomic) NSArray *enabledLensStoreCurrencies; // @synthesize enabledLensStoreCurrencies=_enabledLensStoreCurrencies;
@property(readonly, copy, nonatomic) NSArray *enabledIapCurrencies; // @synthesize enabledIapCurrencies=_enabledIapCurrencies;
@property(readonly, copy, nonatomic) NSArray *verifiedSharedPublications; // @synthesize verifiedSharedPublications=_verifiedSharedPublications;
@property(readonly, copy, nonatomic) NSArray *favoriteStickers; // @synthesize favoriteStickers=_favoriteStickers;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiReadOnlyDict; // @synthesize friendmojiReadOnlyDict=_friendmojiReadOnlyDict;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiMutableDict; // @synthesize friendmojiMutableDict=_friendmojiMutableDict;
@property(readonly, copy, nonatomic) NSArray *twoFaVerifiedDevices; // @synthesize twoFaVerifiedDevices=_twoFaVerifiedDevices;
@property(readonly, copy, nonatomic) NSNumber *twoFaVerifiedDeviceNum; // @synthesize twoFaVerifiedDeviceNum=_twoFaVerifiedDeviceNum;
@property(readonly, copy, nonatomic) NSNumber *isTwoFaEnabled; // @synthesize isTwoFaEnabled=_isTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isOtpTwoFaEnabled; // @synthesize isOtpTwoFaEnabled=_isOtpTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isSmsTwoFaEnabled; // @synthesize isSmsTwoFaEnabled=_isSmsTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *rawThumbnailUploadEnabled; // @synthesize rawThumbnailUploadEnabled=_rawThumbnailUploadEnabled;
@property(readonly, copy, nonatomic) NSArray *industries; // @synthesize industries=_industries;
@property(readonly, copy, nonatomic) SOJUAdAdProductsConfig *adProducts; // @synthesize adProducts=_adProducts;
@property(readonly, copy, nonatomic) SOJUAdTrackInfo *adTrackInfo; // @synthesize adTrackInfo=_adTrackInfo;
@property(readonly, copy, nonatomic) SOJUAdSourcesConfig *adSources; // @synthesize adSources=_adSources;
@property(readonly, copy, nonatomic) NSDictionary *targeting; // @synthesize targeting=_targeting;
@property(readonly, copy, nonatomic) NSArray *ourStoryAuths; // @synthesize ourStoryAuths=_ourStoryAuths;
@property(readonly, copy, nonatomic) NSNumber *videoThumbnailEnabledAndroid; // @synthesize videoThumbnailEnabledAndroid=_videoThumbnailEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *chatVideoEnabledAndroid; // @synthesize chatVideoEnabledAndroid=_chatVideoEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoNoteApiFallbackAndroid; // @synthesize videoNoteApiFallbackAndroid=_videoNoteApiFallbackAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoNoteEnabledAndroid; // @synthesize videoNoteEnabledAndroid=_videoNoteEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *audioNoteEnabledAndroid; // @synthesize audioNoteEnabledAndroid=_audioNoteEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *samsungAacEncEnabledAndroid; // @synthesize samsungAacEncEnabledAndroid=_samsungAacEncEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *amrCodecEnabledAndroid; // @synthesize amrCodecEnabledAndroid=_amrCodecEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *blurAfterDownscaleEnabledAndroid; // @synthesize blurAfterDownscaleEnabledAndroid=_blurAfterDownscaleEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *gles3AllowedAndroid; // @synthesize gles3AllowedAndroid=_gles3AllowedAndroid;
@property(readonly, copy, nonatomic) NSNumber *camera2EnabledAndroid; // @synthesize camera2EnabledAndroid=_camera2EnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *camera1TakePhotoApiWhitelistedAndroid; // @synthesize camera1TakePhotoApiWhitelistedAndroid=_camera1TakePhotoApiWhitelistedAndroid;
@property(readonly, copy, nonatomic) NSNumber *camera1TakePhotoApiBlacklistedAndroid; // @synthesize camera1TakePhotoApiBlacklistedAndroid=_camera1TakePhotoApiBlacklistedAndroid;
@property(readonly, copy, nonatomic) NSNumber *androidMediaRecorderSurfaceRecordingEnabled; // @synthesize androidMediaRecorderSurfaceRecordingEnabled=_androidMediaRecorderSurfaceRecordingEnabled;
@property(readonly, copy, nonatomic) NSNumber *scMediaRecorderRecommendedAndroid; // @synthesize scMediaRecorderRecommendedAndroid=_scMediaRecorderRecommendedAndroid;
@property(readonly, copy, nonatomic) NSNumber *scMediaRecorderEnabledAndroid; // @synthesize scMediaRecorderEnabledAndroid=_scMediaRecorderEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *camera2LimitedLevelHighResolutionPhotoEnabledAndroid; // @synthesize camera2LimitedLevelHighResolutionPhotoEnabledAndroid=_camera2LimitedLevelHighResolutionPhotoEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *pinnableStickersEnabledAndroid; // @synthesize pinnableStickersEnabledAndroid=_pinnableStickersEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoDecoderTexcoordTransformationEnabledAndroid; // @synthesize videoDecoderTexcoordTransformationEnabledAndroid=_videoDecoderTexcoordTransformationEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *dirtyVideoRenderingEnabledAndroid; // @synthesize dirtyVideoRenderingEnabledAndroid=_dirtyVideoRenderingEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *smoothingFilterEnabledAndroid; // @synthesize smoothingFilterEnabledAndroid=_smoothingFilterEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *reverseFilterEnabledAndroid; // @synthesize reverseFilterEnabledAndroid=_reverseFilterEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *speedFiltersEnabledAndroid; // @synthesize speedFiltersEnabledAndroid=_speedFiltersEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *imagePlayerEnabledAndroid; // @synthesize imagePlayerEnabledAndroid=_imagePlayerEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoFiltersEnabled; // @synthesize videoFiltersEnabled=_videoFiltersEnabled;
@property(readonly, copy, nonatomic) NSNumber *suggestionPromptDurationInMillis; // @synthesize suggestionPromptDurationInMillis=_suggestionPromptDurationInMillis;
@property(readonly, copy, nonatomic) NSString *suggestionPromptButtonText; // @synthesize suggestionPromptButtonText=_suggestionPromptButtonText;
@property(readonly, copy, nonatomic) NSString *suggestionPromptText; // @synthesize suggestionPromptText=_suggestionPromptText;
@property(readonly, copy, nonatomic) NSString *suggestionPromptLink; // @synthesize suggestionPromptLink=_suggestionPromptLink;
@property(readonly, copy, nonatomic) NSNumber *shouldShowSuggestionPrompt; // @synthesize shouldShowSuggestionPrompt=_shouldShowSuggestionPrompt;
@property(readonly, copy, nonatomic) NSNumber *requireRefreshingProfileMedia; // @synthesize requireRefreshingProfileMedia=_requireRefreshingProfileMedia;
@property(readonly, copy, nonatomic) NSNumber *enableLocationMediacards; // @synthesize enableLocationMediacards=_enableLocationMediacards;
@property(readonly, copy, nonatomic) NSString *qrPath; // @synthesize qrPath=_qrPath;
@property(readonly, copy, nonatomic) NSNumber *lastAddressBookUpdatedDate; // @synthesize lastAddressBookUpdatedDate=_lastAddressBookUpdatedDate;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackingAppId; // @synthesize thirdPartyTrackingAppId=_thirdPartyTrackingAppId;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackingBaseUrl; // @synthesize thirdPartyTrackingBaseUrl=_thirdPartyTrackingBaseUrl;
@property(readonly, copy, nonatomic) NSString *allowedToUseCash; // @synthesize allowedToUseCash=_allowedToUseCash;
@property(readonly, copy, nonatomic) NSString *cashCustomerId; // @synthesize cashCustomerId=_cashCustomerId;
@property(readonly, copy, nonatomic) NSString *cashProvider; // @synthesize cashProvider=_cashProvider;
@property(readonly, copy, nonatomic) NSNumber *isCashActive; // @synthesize isCashActive=_isCashActive;
@property(readonly, copy, nonatomic) NSDictionary *studySettings; // @synthesize studySettings=_studySettings;
@property(readonly, copy, nonatomic) NSNumber *numberOfBestFriends; // @synthesize numberOfBestFriends=_numberOfBestFriends;
@property(readonly, copy, nonatomic) SOJUAdAdPreferences *adPreferences; // @synthesize adPreferences=_adPreferences;
@property(readonly, copy, nonatomic) SOJUFeatureSettings *featureSettings; // @synthesize featureSettings=_featureSettings;
@property(readonly, copy, nonatomic) NSArray *clientPropertiesV2; // @synthesize clientPropertiesV2=_clientPropertiesV2;
@property(readonly, copy, nonatomic) NSDictionary *clientProperties; // @synthesize clientProperties=_clientProperties;
@property(readonly, copy, nonatomic) NSArray *seenTooltips; // @synthesize seenTooltips=_seenTooltips;
@property(readonly, copy, nonatomic) NSNumber *shouldTextToVerifyNumber; // @synthesize shouldTextToVerifyNumber=_shouldTextToVerifyNumber;
@property(readonly, copy, nonatomic) NSNumber *shouldCallToVerifyNumber; // @synthesize shouldCallToVerifyNumber=_shouldCallToVerifyNumber;
@property(readonly, copy, nonatomic) NSNumber *searchableByPhoneNumber; // @synthesize searchableByPhoneNumber=_searchableByPhoneNumber;
@property(readonly, copy, nonatomic) NSString *snapchatPhoneNumber; // @synthesize snapchatPhoneNumber=_snapchatPhoneNumber;
@property(readonly, copy, nonatomic) NSNumber *lastReplayedSnapTimestamp; // @synthesize lastReplayedSnapTimestamp=_lastReplayedSnapTimestamp;
@property(readonly, copy, nonatomic) NSNumber *currentTimestamp; // @synthesize currentTimestamp=_currentTimestamp;
@property(readonly, copy, nonatomic) NSNumber *addedFriendsTimestamp; // @synthesize addedFriendsTimestamp=_addedFriendsTimestamp;
@property(readonly, copy, nonatomic) NSNumber *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, copy, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSNumber *credits; // @synthesize credits=_credits;
@property(readonly, copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) NSNumber *received; // @synthesize received=_received;
@property(readonly, copy, nonatomic) NSNumber *sent; // @synthesize sent=_sent;
@property(readonly, copy, nonatomic) NSString *quickAddPrivacy; // @synthesize quickAddPrivacy=_quickAddPrivacy;
@property(readonly, copy, nonatomic) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(readonly, copy, nonatomic) NSNumber *notificationPrivacy; // @synthesize notificationPrivacy=_notificationPrivacy;
@property(readonly, copy, nonatomic) NSNumber *snapP; // @synthesize snapP=_snapP;
@property(readonly, copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(readonly, copy, nonatomic) NSNumber *enableSaveStoryToGallery; // @synthesize enableSaveStoryToGallery=_enableSaveStoryToGallery;
@property(readonly, copy, nonatomic) NSNumber *gaussianBlurLevelAndroid; // @synthesize gaussianBlurLevelAndroid=_gaussianBlurLevelAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableFastFrameRateCameraInitializationAndroid; // @synthesize enableFastFrameRateCameraInitializationAndroid=_enableFastFrameRateCameraInitializationAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableRecordingHintAndroid; // @synthesize enableRecordingHintAndroid=_enableRecordingHintAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableLensesAndroid; // @synthesize enableLensesAndroid=_enableLensesAndroid;
@property(readonly, copy, nonatomic) NSNumber *transcodingProfileLevelConfigurationAndroid; // @synthesize transcodingProfileLevelConfigurationAndroid=_transcodingProfileLevelConfigurationAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableImageTranscoding; // @synthesize enableImageTranscoding=_enableImageTranscoding;
@property(readonly, copy, nonatomic) SOJUResetDisabledTranscodingState *resetDisabledTranscodingState; // @synthesize resetDisabledTranscodingState=_resetDisabledTranscodingState;
@property(readonly, copy, nonatomic) NSNumber *enableVideoTranscodingAndroid; // @synthesize enableVideoTranscodingAndroid=_enableVideoTranscodingAndroid;
@property(readonly, copy, nonatomic) NSString *mobileVerificationKey; // @synthesize mobileVerificationKey=_mobileVerificationKey;
@property(readonly, copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *blizzardToken; // @synthesize blizzardToken=_blizzardToken;
@property(readonly, copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(readonly, copy, nonatomic) NSNumber *isVerifiedUser; // @synthesize isVerifiedUser=_isVerifiedUser;
@property(readonly, copy, nonatomic) NSNumber *bitmojiHideDownloadPrompt; // @synthesize bitmojiHideDownloadPrompt=_bitmojiHideDownloadPrompt;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSNumber *logged; // @synthesize logged=_logged;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiReadOnlyDict; // @synthesize extraFriendmojiReadOnlyDict=_extraFriendmojiReadOnlyDict;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiMutableDict; // @synthesize extraFriendmojiMutableDict=_extraFriendmojiMutableDict;
@property(readonly, copy, nonatomic) NSArray *bests; // @synthesize bests=_bests;
@property(readonly, copy, nonatomic) NSArray *addedFriends; // @synthesize addedFriends=_addedFriends;
@property(readonly, copy, nonatomic) NSString *friendsSyncType; // @synthesize friendsSyncType=_friendsSyncType;
@property(readonly, copy, nonatomic) NSString *friendsSyncToken; // @synthesize friendsSyncToken=_friendsSyncToken;
@property(readonly, copy, nonatomic) NSArray *friends; // @synthesize friends=_friends;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFriends:(id)arg1 friendsSyncToken:(id)arg2 friendsSyncType:(id)arg3 addedFriends:(id)arg4 bests:(id)arg5 extraFriendmojiMutableDict:(id)arg6 extraFriendmojiReadOnlyDict:(id)arg7 logged:(id)arg8 username:(id)arg9 userId:(id)arg10 bitmojiAvatarId:(id)arg11 bitmojiHideDownloadPrompt:(id)arg12 isVerifiedUser:(id)arg13 authToken:(id)arg14 deviceToken:(id)arg15 blizzardToken:(id)arg16 email:(id)arg17 mobile:(id)arg18 mobileVerificationKey:(id)arg19 enableVideoTranscodingAndroid:(id)arg20 resetDisabledTranscodingState:(id)arg21 enableImageTranscoding:(id)arg22 transcodingProfileLevelConfigurationAndroid:(id)arg23 enableLensesAndroid:(id)arg24 enableRecordingHintAndroid:(id)arg25 enableFastFrameRateCameraInitializationAndroid:(id)arg26 gaussianBlurLevelAndroid:(id)arg27 enableSaveStoryToGallery:(id)arg28 birthday:(id)arg29 snapP:(id)arg30 notificationPrivacy:(id)arg31 storyPrivacy:(id)arg32 quickAddPrivacy:(id)arg33 sent:(id)arg34 received:(id)arg35 score:(id)arg36 credits:(id)arg37 snaps:(id)arg38 recents:(id)arg39 lastUpdated:(id)arg40 addedFriendsTimestamp:(id)arg41 currentTimestamp:(id)arg42 lastReplayedSnapTimestamp:(id)arg43 snapchatPhoneNumber:(id)arg44 searchableByPhoneNumber:(id)arg45 shouldCallToVerifyNumber:(id)arg46 shouldTextToVerifyNumber:(id)arg47 seenTooltips:(id)arg48 clientProperties:(id)arg49 clientPropertiesV2:(id)arg50 featureSettings:(id)arg51 adPreferences:(id)arg52 numberOfBestFriends:(id)arg53 studySettings:(id)arg54 isCashActive:(id)arg55 cashProvider:(id)arg56 cashCustomerId:(id)arg57 allowedToUseCash:(id)arg58 thirdPartyTrackingBaseUrl:(id)arg59 thirdPartyTrackingAppId:(id)arg60 lastAddressBookUpdatedDate:(id)arg61 qrPath:(id)arg62 enableLocationMediacards:(id)arg63 requireRefreshingProfileMedia:(id)arg64 shouldShowSuggestionPrompt:(id)arg65 suggestionPromptLink:(id)arg66 suggestionPromptText:(id)arg67 suggestionPromptButtonText:(id)arg68 suggestionPromptDurationInMillis:(id)arg69 videoFiltersEnabled:(id)arg70 imagePlayerEnabledAndroid:(id)arg71 speedFiltersEnabledAndroid:(id)arg72 reverseFilterEnabledAndroid:(id)arg73 smoothingFilterEnabledAndroid:(id)arg74 dirtyVideoRenderingEnabledAndroid:(id)arg75 videoDecoderTexcoordTransformationEnabledAndroid:(id)arg76 pinnableStickersEnabledAndroid:(id)arg77 camera2LimitedLevelHighResolutionPhotoEnabledAndroid:(id)arg78 scMediaRecorderEnabledAndroid:(id)arg79 scMediaRecorderRecommendedAndroid:(id)arg80 androidMediaRecorderSurfaceRecordingEnabled:(id)arg81 camera1TakePhotoApiBlacklistedAndroid:(id)arg82 camera1TakePhotoApiWhitelistedAndroid:(id)arg83 camera2EnabledAndroid:(id)arg84 gles3AllowedAndroid:(id)arg85 blurAfterDownscaleEnabledAndroid:(id)arg86 amrCodecEnabledAndroid:(id)arg87 samsungAacEncEnabledAndroid:(id)arg88 audioNoteEnabledAndroid:(id)arg89 videoNoteEnabledAndroid:(id)arg90 videoNoteApiFallbackAndroid:(id)arg91 chatVideoEnabledAndroid:(id)arg92 videoThumbnailEnabledAndroid:(id)arg93 ourStoryAuths:(id)arg94 targeting:(id)arg95 adSources:(id)arg96 adTrackInfo:(id)arg97 adProducts:(id)arg98 industries:(id)arg99 rawThumbnailUploadEnabled:(id)arg100 isSmsTwoFaEnabled:(id)arg101 isOtpTwoFaEnabled:(id)arg102 isTwoFaEnabled:(id)arg103 twoFaVerifiedDeviceNum:(id)arg104 twoFaVerifiedDevices:(id)arg105 friendmojiMutableDict:(id)arg106 friendmojiReadOnlyDict:(id)arg107 favoriteStickers:(id)arg108 verifiedSharedPublications:(id)arg109 enabledIapCurrencies:(id)arg110 enabledLensStoreCurrencies:(id)arg111 clientPromptDeprecated:(id)arg112 notificationSoundSetting:(id)arg113 ringingSound:(id)arg114 contactsResyncRequest:(id)arg115 gcsSampling:(id)arg116 snapMediaUploadConnectionTimeout:(id)arg117 snapMediaUploadSoTimeout:(id)arg118 lagunaId:(id)arg119 lagunaResponse:(id)arg120 hasUsedLaguna:(id)arg121 eSnapMedia:(id)arg122 videoRecordingTranscodingConfiguration:(id)arg123 storyCount:(id)arg124 frontCameraZoomEnabledAndroid:(id)arg125 displayName:(id)arg126 camera2TakePhotoApiAndroid:(id)arg127 enableWorldLensGrid:(id)arg128 nftLoTimeout:(id)arg129 nftHiTimeout:(id)arg130 countryCode:(id)arg131 voipDeviceToken:(id)arg132 sicInit:(id)arg133 enabledPushNotifications:(id)arg134 stickerVisualRecommendationEnabledAndroid:(id)arg135 prestartToken:(id)arg136 prestartPrefix:(id)arg137 prestartPort:(id)arg138 prestartHostname:(id)arg139 featureSettingsResponse:(id)arg140 mobStoriesEnabled:(id)arg141 blizzardConfig:(id)arg142 friendmojiBlockedKeys:(id)arg143 clientPrompts:(id)arg144 timeSinceLastTravelModelChange:(id)arg145 resetDisabledImagePlayerState:(id)arg146 discoverContentDisabled:(id)arg147 bitmojiSelfieId:(id)arg148 bitmojiSnapcodeSelfieId:(id)arg149 d2sMediaDownloadEnabled:(id)arg150 fideliusLatestBeta:(id)arg151 studioSerialNumber:(id)arg152 enableSeparateLensListForBackCamera:(id)arg153 iso3166Alpha2CountryCode:(id)arg154 created:(id)arg155 unlockablesDirectAuthInfo:(id)arg156 isPopular:(id)arg157 businessAccountId:(id)arg158 studySettingsV2:(id)arg159 enableArCoreAndroid:(id)arg160;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)enableArCoreAndroidValue;
- (_Bool)isPopularValue;
- (long long)createdValue;
- (_Bool)enableSeparateLensListForBackCameraValue;
- (_Bool)d2sMediaDownloadEnabledValue;
- (_Bool)discoverContentDisabledValue;
- (int)timeSinceLastTravelModelChangeValue;
- (long long)mobStoriesEnabledEnum;
- (_Bool)stickerVisualRecommendationEnabledAndroidValue;
- (_Bool)enabledPushNotificationsValue;
- (float)nftHiTimeoutValue;
- (float)nftLoTimeoutValue;
- (_Bool)enableWorldLensGridValue;
- (_Bool)camera2TakePhotoApiAndroidValue;
- (_Bool)frontCameraZoomEnabledAndroidValue;
- (int)storyCountValue;
- (_Bool)eSnapMediaValue;
- (_Bool)hasUsedLagunaValue;
- (int)snapMediaUploadSoTimeoutValue;
- (int)snapMediaUploadConnectionTimeoutValue;
- (int)gcsSamplingValue;
- (int)contactsResyncRequestValue;
- (int)twoFaVerifiedDeviceNumValue;
- (_Bool)isTwoFaEnabledValue;
- (_Bool)isOtpTwoFaEnabledValue;
- (_Bool)isSmsTwoFaEnabledValue;
- (_Bool)rawThumbnailUploadEnabledValue;
- (_Bool)videoThumbnailEnabledAndroidValue;
- (_Bool)chatVideoEnabledAndroidValue;
- (_Bool)videoNoteApiFallbackAndroidValue;
- (_Bool)videoNoteEnabledAndroidValue;
- (_Bool)audioNoteEnabledAndroidValue;
- (_Bool)samsungAacEncEnabledAndroidValue;
- (_Bool)amrCodecEnabledAndroidValue;
- (_Bool)blurAfterDownscaleEnabledAndroidValue;
- (_Bool)gles3AllowedAndroidValue;
- (_Bool)camera2EnabledAndroidValue;
- (_Bool)camera1TakePhotoApiWhitelistedAndroidValue;
- (_Bool)camera1TakePhotoApiBlacklistedAndroidValue;
- (_Bool)androidMediaRecorderSurfaceRecordingEnabledValue;
- (_Bool)scMediaRecorderRecommendedAndroidValue;
- (_Bool)scMediaRecorderEnabledAndroidValue;
- (_Bool)camera2LimitedLevelHighResolutionPhotoEnabledAndroidValue;
- (_Bool)pinnableStickersEnabledAndroidValue;
- (_Bool)videoDecoderTexcoordTransformationEnabledAndroidValue;
- (_Bool)dirtyVideoRenderingEnabledAndroidValue;
- (_Bool)smoothingFilterEnabledAndroidValue;
- (_Bool)reverseFilterEnabledAndroidValue;
- (_Bool)speedFiltersEnabledAndroidValue;
- (_Bool)imagePlayerEnabledAndroidValue;
- (_Bool)videoFiltersEnabledValue;
- (long long)suggestionPromptDurationInMillisValue;
- (_Bool)shouldShowSuggestionPromptValue;
- (_Bool)requireRefreshingProfileMediaValue;
- (_Bool)enableLocationMediacardsValue;
- (long long)lastAddressBookUpdatedDateValue;
- (_Bool)isCashActiveValue;
- (int)numberOfBestFriendsValue;
- (_Bool)shouldTextToVerifyNumberValue;
- (_Bool)shouldCallToVerifyNumberValue;
- (_Bool)searchableByPhoneNumberValue;
- (long long)lastReplayedSnapTimestampValue;
- (long long)currentTimestampValue;
- (long long)addedFriendsTimestampValue;
- (long long)lastUpdatedValue;
- (int)creditsValue;
- (int)scoreValue;
- (int)receivedValue;
- (int)sentValue;
- (long long)quickAddPrivacyEnum;
- (int)notificationPrivacyValue;
- (int)snapPValue;
- (_Bool)enableSaveStoryToGalleryValue;
- (int)gaussianBlurLevelAndroidValue;
- (_Bool)enableFastFrameRateCameraInitializationAndroidValue;
- (_Bool)enableRecordingHintAndroidValue;
- (_Bool)enableLensesAndroidValue;
- (_Bool)transcodingProfileLevelConfigurationAndroidValue;
- (_Bool)enableImageTranscodingValue;
- (_Bool)enableVideoTranscodingAndroidValue;
- (_Bool)isVerifiedUserValue;
- (_Bool)bitmojiHideDownloadPromptValue;
- (_Bool)loggedValue;
- (long long)friendsSyncTypeEnum;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

