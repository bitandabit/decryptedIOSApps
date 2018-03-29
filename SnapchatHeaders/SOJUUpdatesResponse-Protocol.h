//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUFriendsResponse-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdAdPreferences, SOJUAdAdProductsConfig, SOJUAdSourcesConfig, SOJUAdTrackInfo, SOJUBlizzardClientConfig, SOJUFeatureSettings, SOJUIdentityLagunaGetLagunaDevicesResponse, SOJUPromptMessage, SOJUResetDisabledTranscodingState, SOJUUnlockablesUnlockablesDirectAuthInfo, SOJUVideoRecordingTranscodingConfig;

@protocol SOJUUpdatesResponse <NSObject, NSCoding, NSCopying, SOJUFriendsResponse>
@property(readonly, copy, nonatomic) NSNumber *enableArCoreAndroid;
@property(readonly, copy, nonatomic) NSDictionary *studySettingsV2;
@property(readonly, copy, nonatomic) NSString *businessAccountId;
@property(readonly, copy, nonatomic) NSNumber *isPopular;
@property(readonly, copy, nonatomic) SOJUUnlockablesUnlockablesDirectAuthInfo *unlockablesDirectAuthInfo;
@property(readonly, copy, nonatomic) NSNumber *created;
@property(readonly, copy, nonatomic) NSString *iso3166Alpha2CountryCode;
@property(readonly, copy, nonatomic) NSNumber *enableSeparateLensListForBackCamera;
@property(readonly, copy, nonatomic) NSString *studioSerialNumber;
@property(readonly, copy, nonatomic) NSString *fideliusLatestBeta;
@property(readonly, copy, nonatomic) NSNumber *d2sMediaDownloadEnabled;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSNumber *discoverContentDisabled;
@property(readonly, copy, nonatomic) SOJUResetDisabledTranscodingState *resetDisabledImagePlayerState;
@property(readonly, copy, nonatomic) NSNumber *timeSinceLastTravelModelChange;
@property(readonly, copy, nonatomic) NSArray *clientPrompts;
@property(readonly, copy, nonatomic) NSArray *friendmojiBlockedKeys;
@property(readonly, copy, nonatomic) SOJUBlizzardClientConfig *blizzardConfig;
@property(readonly, copy, nonatomic) NSString *mobStoriesEnabled;
@property(readonly, copy, nonatomic) NSArray *featureSettingsResponse;
@property(readonly, copy, nonatomic) NSString *prestartHostname;
@property(readonly, copy, nonatomic) NSString *prestartPort;
@property(readonly, copy, nonatomic) NSString *prestartPrefix;
@property(readonly, copy, nonatomic) NSString *prestartToken;
@property(readonly, copy, nonatomic) NSNumber *stickerVisualRecommendationEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *enabledPushNotifications;
@property(readonly, copy, nonatomic) NSString *sicInit;
@property(readonly, copy, nonatomic) NSString *voipDeviceToken;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, copy, nonatomic) NSNumber *nftHiTimeout;
@property(readonly, copy, nonatomic) NSNumber *nftLoTimeout;
@property(readonly, copy, nonatomic) NSNumber *enableWorldLensGrid;
@property(readonly, copy, nonatomic) NSNumber *camera2TakePhotoApiAndroid;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSNumber *frontCameraZoomEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *storyCount;
@property(readonly, copy, nonatomic) SOJUVideoRecordingTranscodingConfig *videoRecordingTranscodingConfiguration;
@property(readonly, copy, nonatomic) NSNumber *eSnapMedia;
@property(readonly, copy, nonatomic) NSNumber *hasUsedLaguna;
@property(readonly, copy, nonatomic) SOJUIdentityLagunaGetLagunaDevicesResponse *lagunaResponse;
@property(readonly, copy, nonatomic) NSString *lagunaId;
@property(readonly, copy, nonatomic) NSNumber *snapMediaUploadSoTimeout;
@property(readonly, copy, nonatomic) NSNumber *snapMediaUploadConnectionTimeout;
@property(readonly, copy, nonatomic) NSNumber *gcsSampling;
@property(readonly, copy, nonatomic) NSNumber *contactsResyncRequest;
@property(readonly, copy, nonatomic) NSString *ringingSound;
@property(readonly, copy, nonatomic) NSString *notificationSoundSetting;
@property(readonly, copy, nonatomic) SOJUPromptMessage *clientPromptDeprecated;
@property(readonly, copy, nonatomic) NSArray *enabledLensStoreCurrencies;
@property(readonly, copy, nonatomic) NSArray *enabledIapCurrencies;
@property(readonly, copy, nonatomic) NSArray *verifiedSharedPublications;
@property(readonly, copy, nonatomic) NSArray *favoriteStickers;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiReadOnlyDict;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiMutableDict;
@property(readonly, copy, nonatomic) NSArray *twoFaVerifiedDevices;
@property(readonly, copy, nonatomic) NSNumber *twoFaVerifiedDeviceNum;
@property(readonly, copy, nonatomic) NSNumber *isTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isOtpTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isSmsTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *rawThumbnailUploadEnabled;
@property(readonly, copy, nonatomic) NSArray *industries;
@property(readonly, copy, nonatomic) SOJUAdAdProductsConfig *adProducts;
@property(readonly, copy, nonatomic) SOJUAdTrackInfo *adTrackInfo;
@property(readonly, copy, nonatomic) SOJUAdSourcesConfig *adSources;
@property(readonly, copy, nonatomic) NSDictionary *targeting;
@property(readonly, copy, nonatomic) NSArray *ourStoryAuths;
@property(readonly, copy, nonatomic) NSNumber *videoThumbnailEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *chatVideoEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoNoteApiFallbackAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoNoteEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *audioNoteEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *samsungAacEncEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *amrCodecEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *blurAfterDownscaleEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *gles3AllowedAndroid;
@property(readonly, copy, nonatomic) NSNumber *camera2EnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *camera1TakePhotoApiWhitelistedAndroid;
@property(readonly, copy, nonatomic) NSNumber *camera1TakePhotoApiBlacklistedAndroid;
@property(readonly, copy, nonatomic) NSNumber *androidMediaRecorderSurfaceRecordingEnabled;
@property(readonly, copy, nonatomic) NSNumber *scMediaRecorderRecommendedAndroid;
@property(readonly, copy, nonatomic) NSNumber *scMediaRecorderEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *camera2LimitedLevelHighResolutionPhotoEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *pinnableStickersEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoDecoderTexcoordTransformationEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *dirtyVideoRenderingEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *smoothingFilterEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *reverseFilterEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *speedFiltersEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *imagePlayerEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoFiltersEnabled;
@property(readonly, copy, nonatomic) NSNumber *suggestionPromptDurationInMillis;
@property(readonly, copy, nonatomic) NSString *suggestionPromptButtonText;
@property(readonly, copy, nonatomic) NSString *suggestionPromptText;
@property(readonly, copy, nonatomic) NSString *suggestionPromptLink;
@property(readonly, copy, nonatomic) NSNumber *shouldShowSuggestionPrompt;
@property(readonly, copy, nonatomic) NSNumber *requireRefreshingProfileMedia;
@property(readonly, copy, nonatomic) NSNumber *enableLocationMediacards;
@property(readonly, copy, nonatomic) NSString *qrPath;
@property(readonly, copy, nonatomic) NSNumber *lastAddressBookUpdatedDate;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackingAppId;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackingBaseUrl;
@property(readonly, copy, nonatomic) NSString *allowedToUseCash;
@property(readonly, copy, nonatomic) NSString *cashCustomerId;
@property(readonly, copy, nonatomic) NSString *cashProvider;
@property(readonly, copy, nonatomic) NSNumber *isCashActive;
@property(readonly, copy, nonatomic) NSDictionary *studySettings;
@property(readonly, copy, nonatomic) NSNumber *numberOfBestFriends;
@property(readonly, copy, nonatomic) SOJUAdAdPreferences *adPreferences;
@property(readonly, copy, nonatomic) SOJUFeatureSettings *featureSettings;
@property(readonly, copy, nonatomic) NSArray *clientPropertiesV2;
@property(readonly, copy, nonatomic) NSDictionary *clientProperties;
@property(readonly, copy, nonatomic) NSArray *seenTooltips;
@property(readonly, copy, nonatomic) NSNumber *shouldTextToVerifyNumber;
@property(readonly, copy, nonatomic) NSNumber *shouldCallToVerifyNumber;
@property(readonly, copy, nonatomic) NSNumber *searchableByPhoneNumber;
@property(readonly, copy, nonatomic) NSString *snapchatPhoneNumber;
@property(readonly, copy, nonatomic) NSNumber *lastReplayedSnapTimestamp;
@property(readonly, copy, nonatomic) NSNumber *currentTimestamp;
@property(readonly, copy, nonatomic) NSNumber *addedFriendsTimestamp;
@property(readonly, copy, nonatomic) NSNumber *lastUpdated;
@property(readonly, copy, nonatomic) NSArray *recents;
@property(readonly, copy, nonatomic) NSArray *snaps;
@property(readonly, copy, nonatomic) NSNumber *credits;
@property(readonly, copy, nonatomic) NSNumber *score;
@property(readonly, copy, nonatomic) NSNumber *received;
@property(readonly, copy, nonatomic) NSNumber *sent;
@property(readonly, copy, nonatomic) NSString *quickAddPrivacy;
@property(readonly, copy, nonatomic) NSString *storyPrivacy;
@property(readonly, copy, nonatomic) NSNumber *notificationPrivacy;
@property(readonly, copy, nonatomic) NSNumber *snapP;
@property(readonly, copy, nonatomic) NSString *birthday;
@property(readonly, copy, nonatomic) NSNumber *enableSaveStoryToGallery;
@property(readonly, copy, nonatomic) NSNumber *gaussianBlurLevelAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableFastFrameRateCameraInitializationAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableRecordingHintAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableLensesAndroid;
@property(readonly, copy, nonatomic) NSNumber *transcodingProfileLevelConfigurationAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableImageTranscoding;
@property(readonly, copy, nonatomic) SOJUResetDisabledTranscodingState *resetDisabledTranscodingState;
@property(readonly, copy, nonatomic) NSNumber *enableVideoTranscodingAndroid;
@property(readonly, copy, nonatomic) NSString *mobileVerificationKey;
@property(readonly, copy, nonatomic) NSString *mobile;
@property(readonly, copy, nonatomic) NSString *email;
@property(readonly, copy, nonatomic) NSString *blizzardToken;
@property(readonly, copy, nonatomic) NSString *deviceToken;
@property(readonly, copy, nonatomic) NSString *authToken;
@property(readonly, copy, nonatomic) NSNumber *isVerifiedUser;
@property(readonly, copy, nonatomic) NSNumber *bitmojiHideDownloadPrompt;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSNumber *logged;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiReadOnlyDict;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiMutableDict;
@property(readonly, copy, nonatomic) NSArray *bests;
@property(readonly, copy, nonatomic) NSArray *addedFriends;
@property(readonly, copy, nonatomic) NSString *friendsSyncType;
@property(readonly, copy, nonatomic) NSString *friendsSyncToken;
@property(readonly, copy, nonatomic) NSArray *friends;
@end

