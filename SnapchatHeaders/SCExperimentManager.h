//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCStudySettingsListener-Protocol.h"

@class NSMutableDictionary, NSString, SCDiscoverFeedSessionAdExperimentContext;

@interface SCExperimentManager : NSObject <SCStudySettingsListener>
{
    NSString *_userId;
    NSMutableDictionary *_experimentContextCache;
}

+ (id)userless;
+ (_Bool)isLocaleJPN;
- (void).cxx_destruct;
- (void)studySettingsDidChange:(id)arg1 synchronize:(_Bool)arg2;
- (void)dealloc;
- (id)prettyDescription;
- (id)contextForExperiment:(Class)arg1 exposure:(unsigned long long)arg2;
- (id)initWithUserId:(id)arg1;
@property(readonly, nonatomic) _Bool useNewRequestManagerStreamingAPI;
- (_Bool)shouldUseWebP;
- (long long)webpQualityValue;
- (id)createExperimentContent;
- (_Bool)shouldMoveSponsoredGeoLensesToBackSection;
- (_Bool)shouldEnableIndexUserAttribution;
- (double)searchSuggestRequestDelayPerCharInSeconds;
- (double)searchPostTypeShimmeringDelayInSeconds;
- (double)searchRequestWhenSpacingInSeconds;
- (double)searchRequestWhenBackspacingInSeconds;
- (double)searchTypingDelayPerChatInSeconds;
- (double)searchTravelModeLTEPostTypeDelayInSeconds;
- (double)searchRequestDelayPerCharInSeconds;
- (_Bool)searchShouldShowPopularQueriesWhenNoResult;
- (_Bool)shouldEnableSearchPivotStoriesV2;
- (_Bool)shouldEnablePublicUserStoryStreaming;
- (double)sendToCellCacheLengthSeconds;
- (_Bool)shouldEnableSendToCell;
- (_Bool)shouldEnableSearchSharing;
- (_Bool)shouldEnableSnapDomo;
- (_Bool)shouldEnableStoriesEverywhereOperaActionMenu;
- (unsigned long long)numberOfSearchVideoThumbnails;
- (_Bool)shouldEnableSearchVideoThumbnailSmartLoading;
- (_Bool)shouldEnableSearchVideoThumbnail;
- (id)shareUrlLocalizationKey;
- (id)_1On1DeltaSyncExperimentContext;
- (long long)messageCapPerConversation;
- (_Bool)shouldDisableVisibilityPolicy;
- (_Bool)shouldDoDeltaSync;
- (id)animatablePreviewContext;
- (unsigned long long)effect;
- (_Bool)enableContextPortraitFilter;
- (_Bool)instantPrivateEntriesDeletion;
- (_Bool)useOutOfOrderDeletion;
- (_Bool)cloudFSShouldInitialSyncBasedOnLastFullSyncTime:(id)arg1;
- (_Bool)stickerSearchAnimatedTooltipEnabled;
- (_Bool)shouldUseGiphyMetadataProxy;
- (_Bool)enableGiphySticker;
@property(readonly, nonatomic) _Bool enableAttachmentSharing;
- (long long)adCTAUITreatmentType;
@property(readonly, nonatomic) long long delayMillis;
- (_Bool)allowIncludePreloadHeader;
@property(readonly, nonatomic) _Bool enableSnapAdsStreaming;
@property(readonly, nonatomic) _Bool enableSwipeUpToLens;
- (_Bool)useTrackAndGet;
- (_Bool)enableAutoDetectZipCodeAutofillWithItemEnableAutofill:(_Bool)arg1;
- (_Bool)enableAutoDetectAutofillWithItemEnableAutofill:(_Bool)arg1;
- (_Bool)enableAutoDetectZipCodeAutofill;
- (_Bool)enableAutoDetectAutofill;
@property(readonly, nonatomic) long long timeoutMillis;
@property(readonly, nonatomic) _Bool alwaysShowURLBar;
@property(readonly, nonatomic) _Bool useWebviewCard;
@property(readonly, nonatomic) _Bool enableAdWebviewStandardization;
@property(readonly, nonatomic) _Bool canShowAdsInFriendStory;
@property(readonly, nonatomic) _Bool canShowAds;
- (_Bool)_forceToEnableDFSessionByTweak;
@property(readonly, nonatomic) long long minSnapsBetweenAnyAdForDFSessionAd;
@property(readonly, nonatomic) long long minTimeBetweenAdsInSecForDFSessionAd;
@property(readonly, nonatomic) long long minTimeFromStartInSecForDFSessionAd;
@property(readonly, nonatomic) long long minStoriesFromEndForDFSessionAd;
@property(readonly, nonatomic) long long minStoriesBetweenAdsForDFSessionAd;
@property(readonly, nonatomic) long long minStoriesFromStartForDFSessionAd;
@property(readonly, nonatomic) _Bool shouldEnableDiscoverFeedSessionAd;
@property(readonly, nonatomic) SCDiscoverFeedSessionAdExperimentContext *experimentContext;
- (id)blacklistedAppIds;
- (double)peekingAppInstallBounceUpDistance;
- (_Bool)enablePeekingAppInstall:(id)arg1;
- (_Bool)enableBlockImagePreloadingForPreloadingOptIn;
- (_Bool)enablePrefetchingWithoutJSForPreloadingOptIn;
- (_Bool)enableBlockImagePreloadingForPreloadingOptOut;
- (_Bool)enablePrefetchingWithoutJSForPreloadingOptOut;
- (_Bool)shouldEnableSnapMetrics;
@property(readonly, nonatomic) _Bool enablePromotedStoriesStreaming;
- (id)_publisherNameSet:(id)arg1;
- (id)_posterNameForFriendStories:(id)arg1;
- (_Bool)_isInOurStory:(id)arg1;
- (_Bool)disableSkipForAdStory:(id)arg1 friendStories:(id)arg2;
- (_Bool)disableSkipForAdChunk:(id)arg1;
@property(readonly, nonatomic) NSString *publisherNames;
@property(readonly, nonatomic) _Bool restrictPoster;
@property(readonly, nonatomic) _Bool restrictPublisher;
@property(readonly, nonatomic) _Bool progressLabelEnabled;
@property(readonly, nonatomic) _Bool allAdUnSkippable;
@property(readonly, nonatomic) _Bool enableUnSkippableAd;
- (long long)operaViewModelsPreloadStoriesBackwardNumber;
- (long long)operaViewModelsPreloadStoriesForwardNumber;
- (long long)operaViewModelsPreloadSnapsBackwardNumber;
- (long long)operaViewModelsPreloadSnapsForwardNumber;
- (long long)numTopResultsToShuffle;
- (_Bool)enableBitmojiSmartReply;
@property(readonly, nonatomic) _Bool enableBypassRetrySnapEndpoint;
- (long long)getNumberOfWordsInInput:(id)arg1;
- (_Bool)shouldHideStickerMiniViewHelper:(id)arg1 shouldUseCutoff:(_Bool)arg2 withNumWordsCutoff:(long long)arg3;
- (_Bool)shouldHideStickerMiniView:(id)arg1;
- (id)safeTypingExperimentContext;
@property(readonly, nonatomic) NSString *directUploadGroup;
- (_Bool)isNewVideoAdaptationEnabled;
- (_Bool)shouldEnableFeedCellAnimation;
- (_Bool)shouldDisableSwipingFromFeedToChat;
- (_Bool)stabilizationEnabled;
- (double)timeoutValueInSecs;
- (long long)stabilizationType;
- (_Bool)shouldShowColoredDoubleTapToReplySubtext;
- (_Bool)shouldShowSimplifiedSubtext;
- (_Bool)shouldShowFriendmojiOnRight;
- (_Bool)shouldForcePresentingStory;
- (_Bool)shouldRequestPartialStoriesResponse;
- (id)nonFSNEndpointForLogging;
- (long long)maxRetriesForRankingPipeline;
- (long long)minThresholdScoreForInstantLogging;
- (long long)destinationForCheetahStoriesEvent:(id)arg1;
- (_Bool)shouldUseProtobufForFriendFeed;
- (_Bool)shouldShowStoryInsights;
- (id)nonFSNBaseURL;
- (_Bool)shouldBypassFSN;
- (_Bool)shouldEnableDiscoverFeedUpNext;
- (_Bool)shouldRankStorySurferByStoryScore;
- (_Bool)shouldEnableStorySurfer;
- (_Bool)shouldRankUpNextByStoryScore;
- (double)prefetchDiscoverFeedStoriesOnScrollSlowdownVelocityThreshold;
- (double)prefetchDiscoverFeedStoriesMinumumPercentVisible;
- (_Bool)shouldPrefetchDiscoverFeedStoriesOnScrollSlowdown;
- (_Bool)shouldPrefetchDiscoverFeedStoriesWithUserSession:(id)arg1;
- (_Bool)directSnapReplyEnabled;
- (_Bool)shouldShowNearbyVenues;
- (_Bool)areCardsEnabled;
- (_Bool)isRichChatEnabled;
- (long long)contextV1Mode;
@property(readonly, nonatomic) _Bool enabledEligibility;
@property(readonly, nonatomic) _Bool isV2Eligibility;
- (id)_shakeToReportV2_experimentContext;
- (_Bool)discoverTopSnapSubtitlesEnabled;
- (_Bool)useTTLForImageCache;
- (_Bool)useTTLForCloudFS;
- (_Bool)onlySaveOriginalImages;
- (id)imageCacheStudyParams;
- (_Bool)migrateToSCCache;
- (_Bool)onlyRequestLowResForThumbnail;
- (long long)imageCacheMaxUsageMiB;
- (long long)lagunaMaxUsageMiB;
- (long long)cloudFileMaxUsageMiB;
- (_Bool)shouldIndexMemoriesForFaces;
@property(readonly, nonatomic) _Bool memoriesEnableFeaturedStoryBadge;
@property(readonly, nonatomic) _Bool memoriesEnableFeaturedStory;
- (_Bool)shouldShowSendButtonInOperaFromMemories;
- (_Bool)shouldShowEditButtonInOperaFromMemories;
@property(readonly, nonatomic) _Bool memoriesEnableCriticalMode;
- (_Bool)shouldRemoveTooltipsInOperaFromMemories;
- (_Bool)memoriesEnableFastViewSnap;
@property(readonly, nonatomic) _Bool memoriesEnableRevisedEditing;
- (_Bool)enableSaveAndReplace;
- (_Bool)enableGeoParsing;
- (unsigned long long)minVisitMemoriesCountForMemoriesSearchTooltip;
- (unsigned long long)minEntriesCountForMemoriesSearchTooltip;
- (_Bool)enableMemoriesSearchTooltip;
- (_Bool)shouldSendMemoriesAsSnap;
- (_Bool)shouldUseSmartSharing;
- (_Bool)shouldUseSmartSharingToChat;
- (_Bool)uploadTagsPeriodically;
- (_Bool)memoriesShouldEnablePreviewGallerySavePreparer;
- (_Bool)memoriesShouldApplyFastStartOnVideo;
@property(readonly, nonatomic, getter=isCreateYourOwnLensCarouselButtonPresent) _Bool createYourOwnLensCarouselButtonPresent;
@property(readonly, nonatomic) unsigned long long createYourOwnLensCarouselButtonType;
- (_Bool)enableLensInGallery;
- (_Bool)enableFirstLensInPreview;
- (_Bool)showLensInPreviewTooltip;
- (_Bool)lensInPreviewRequireFace;
- (_Bool)enableLensInPreviewVideo;
- (_Bool)enableLensInPreviewPhoto;
- (id)lensTrackingResourcesChecksum;
- (id)lensTrackingResourcesTag;
- (_Bool)enablePinnedLensesBehavior;
- (id)geoFilterAssetCacheExperimentContext;
- (id)geoFilterAssetCacheTtl;
- (long long)mapExploreConfiguration;
- (_Bool)isMapExploreEnabled;
- (_Bool)enableLocationShareButton;
- (_Bool)shouldSkipFsnForUpdates;
- (_Bool)shouldEnableWebMapURL;
- (_Bool)shouldEnableLongPressToShare;
- (_Bool)shouldEnableMapPOIStoryShareURL;
- (_Bool)shouldEnableMapPOIStoryShare;
- (_Bool)enableLogoutInterceptor;
- (_Bool)shouldEnableMultiCaptionWithMultiStyle;
- (_Bool)shouldEnableCaptionV2AndLocaleSupport;
- (_Bool)shouldEnableCaptionV2LocaleSupport;
- (_Bool)shouldEnableCoreMLForSkyFiter;
- (_Bool)enableJPNPinnedLensesBehavior;
- (_Bool)enableJPNFiltersBehavior;
- (_Bool)enableJPNToolsOrderBehavior;
- (_Bool)shouldEnableRatingStickerInFilter;
- (_Bool)shouldEnableRatingStickerInHometab;
- (_Bool)shouldEnableTaggingButton;
- (_Bool)shouldEnableUserTagging;
- (_Bool)isVisualContextTargetingModelFilenameExperimentActive;
@property(readonly, nonatomic) _Bool isVisualContextTargetingEnabled;
@property(readonly, nonatomic) NSString *visualContextTargetingModelFilename;
- (id)_visualContextTargetingModelFilename_experimentContext;
- (long long)stickerPickerUiType;
- (long long)slugFontSize;
- (long long)filterMenuColumnCount;
- (_Bool)showFiltersInStickerPickerHomeTab;
- (_Bool)showFilterMenuButtonInToolbar;
- (_Bool)showFiltersTabInStickerPicker;
- (_Bool)filterMenuEnabled;
- (long long)filterMenuMaxCountPerCategory;
- (_Bool)useLightSlugShadow;
- (_Bool)filterStackingUIEnabled;
@property(readonly, nonatomic) _Bool enableCrop;
- (_Bool)isFideliusCleartextEnabled;
@property(readonly, nonatomic) _Bool shouldPreloadWebview;
- (_Bool)showOfficialStoryAnalyticsButton;
- (_Bool)enableReportBullyingInUK;
- (id)callingTooltipForExistingUsersExperimentContext;
- (id)talkV3OnboardHintsExperimentContext;
@property(readonly, nonatomic) _Bool enableMultiPointEligibility;
@property(readonly, nonatomic) _Bool enableStickyEligibility;
- (id)_geofencingV2_experimentContext;
@property(readonly, nonatomic) unsigned long long gtqMigrationSetting;
- (id)_experimentContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

