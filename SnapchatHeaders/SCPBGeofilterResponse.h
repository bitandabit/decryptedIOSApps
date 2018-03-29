//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCPBDynamicContentSetting, SCPBGeofence, SCPBGeofilterImageMetadata, SCPBGeofilterPrompt, SCPBLensData, SCPBLensPlacementInfo, SCPBSponsoredSlugPosAndText, SCPBSponsoredSlugStyle, SCPBStickerPack, SCPBUnlockableTrackInfo, SCPBUnlockablesArSegmentationFilter, SCPBUnlockablesAttachment, SCPBUnlockablesAutoStacking, SCPBUnlockablesCarouselGroup, SCPBUnlockablesDebugInfo, SCPBUnlockablesDynamicContextProperties, SCPBUnlockablesScannableData, SCPBUnlockablesSchedule, SCPBUnlockablesUnlockableContext;

@interface SCPBGeofilterResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *URLParams; // @dynamic URLParams;
@property(readonly, nonatomic) unsigned long long URLParams_Count; // @dynamic URLParams_Count;
@property(copy, nonatomic) NSString *appstoreIapId; // @dynamic appstoreIapId;
@property(retain, nonatomic) SCPBUnlockablesArSegmentationFilter *arSegmentation; // @dynamic arSegmentation;
@property(retain, nonatomic) SCPBUnlockablesAttachment *attachment; // @dynamic attachment;
@property(retain, nonatomic) SCPBUnlockablesAutoStacking *autoStacking; // @dynamic autoStacking;
@property(nonatomic) _Bool belowDrawingLayer; // @dynamic belowDrawingLayer;
@property(retain, nonatomic) SCPBUnlockablesCarouselGroup *carouselGroup; // @dynamic carouselGroup;
@property(nonatomic) long long clientCacheExpirationDateTime; // @dynamic clientCacheExpirationDateTime;
@property(nonatomic) long long clientCacheTtlMinutes; // @dynamic clientCacheTtlMinutes;
@property(retain, nonatomic) SCPBUnlockablesDebugInfo *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) NSMutableArray *dynamicContentArray; // @dynamic dynamicContentArray;
@property(readonly, nonatomic) unsigned long long dynamicContentArray_Count; // @dynamic dynamicContentArray_Count;
@property(retain, nonatomic) SCPBDynamicContentSetting *dynamicContentSetting; // @dynamic dynamicContentSetting;
@property(retain, nonatomic) SCPBUnlockablesDynamicContextProperties *dynamicContextProperties; // @dynamic dynamicContextProperties;
@property(nonatomic) _Bool eligibleForNotification; // @dynamic eligibleForNotification;
@property(copy, nonatomic) NSString *encGeoData; // @dynamic encGeoData;
@property(retain, nonatomic) NSMutableArray *excludedByTagsArray; // @dynamic excludedByTagsArray;
@property(readonly, nonatomic) unsigned long long excludedByTagsArray_Count; // @dynamic excludedByTagsArray_Count;
@property(retain, nonatomic) NSMutableArray *exclusionTagsArray; // @dynamic exclusionTagsArray;
@property(readonly, nonatomic) unsigned long long exclusionTagsArray_Count; // @dynamic exclusionTagsArray_Count;
@property(nonatomic) long long expiresCountdown; // @dynamic expiresCountdown;
@property(retain, nonatomic) SCPBGeofilterImageMetadata *extraImageMetadata; // @dynamic extraImageMetadata;
@property(copy, nonatomic) NSString *filterId; // @dynamic filterId;
@property(nonatomic) double filterScore; // @dynamic filterScore;
@property(retain, nonatomic) SCPBGeofence *geofence; // @dynamic geofence;
@property(retain, nonatomic) SCPBGeofilterPrompt *geofilterPrompt; // @dynamic geofilterPrompt;
@property(copy, nonatomic) NSString *gplayIapId; // @dynamic gplayIapId;
@property(nonatomic) _Bool guaranteeDelivery; // @dynamic guaranteeDelivery;
@property(nonatomic) _Bool hasArSegmentation; // @dynamic hasArSegmentation;
@property(nonatomic) _Bool hasAttachment; // @dynamic hasAttachment;
@property(nonatomic) _Bool hasAutoStacking; // @dynamic hasAutoStacking;
@property(nonatomic) _Bool hasCarouselGroup; // @dynamic hasCarouselGroup;
@property(nonatomic) _Bool hasContextCard; // @dynamic hasContextCard;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasDynamicContentSetting; // @dynamic hasDynamicContentSetting;
@property(nonatomic) _Bool hasDynamicContextProperties; // @dynamic hasDynamicContextProperties;
@property(nonatomic) _Bool hasExtraImageMetadata; // @dynamic hasExtraImageMetadata;
@property(nonatomic) _Bool hasGeofence; // @dynamic hasGeofence;
@property(nonatomic) _Bool hasGeofilterPrompt; // @dynamic hasGeofilterPrompt;
@property(nonatomic) _Bool hasLensData; // @dynamic hasLensData;
@property(nonatomic) _Bool hasLensPlacementInfo; // @dynamic hasLensPlacementInfo;
@property(nonatomic) _Bool hasScannableData; // @dynamic hasScannableData;
@property(nonatomic) _Bool hasSchedule; // @dynamic hasSchedule;
@property(nonatomic) _Bool hasSponsoredSlug; // @dynamic hasSponsoredSlug;
@property(nonatomic) _Bool hasSponsoredSlugStyle; // @dynamic hasSponsoredSlugStyle;
@property(nonatomic) _Bool hasStickerPackData; // @dynamic hasStickerPackData;
@property(nonatomic) _Bool hasUnlockableContext; // @dynamic hasUnlockableContext;
@property(nonatomic) _Bool hasUnlockableTrackInfo; // @dynamic hasUnlockableTrackInfo;
@property(copy, nonatomic) NSString *image; // @dynamic image;
@property(copy, nonatomic) NSString *imageCroppedToVisible; // @dynamic imageCroppedToVisible;
@property(nonatomic) _Bool isAnimated; // @dynamic isAnimated;
@property(nonatomic) _Bool isDynamicGeofilter; // @dynamic isDynamicGeofilter;
@property(nonatomic) _Bool isFeatured; // @dynamic isFeatured;
@property(nonatomic) _Bool isFrameFilter; // @dynamic isFrameFilter;
@property(nonatomic) _Bool isLens; // @dynamic isLens;
@property(nonatomic) _Bool isMenuFilter; // @dynamic isMenuFilter;
@property(nonatomic) _Bool isSponsored; // @dynamic isSponsored;
@property(nonatomic) int lensCarouselIndex; // @dynamic lensCarouselIndex;
@property(retain, nonatomic) NSMutableArray *lensCategoriesArray; // @dynamic lensCategoriesArray;
@property(readonly, nonatomic) unsigned long long lensCategoriesArray_Count; // @dynamic lensCategoriesArray_Count;
@property(retain, nonatomic) NSMutableArray *lensCategoriesDataArray; // @dynamic lensCategoriesDataArray;
@property(readonly, nonatomic) unsigned long long lensCategoriesDataArray_Count; // @dynamic lensCategoriesDataArray_Count;
@property(retain, nonatomic) SCPBLensData *lensData; // @dynamic lensData;
@property(retain, nonatomic) SCPBLensPlacementInfo *lensPlacementInfo; // @dynamic lensPlacementInfo;
@property(retain, nonatomic) NSMutableArray *metaTagsArray; // @dynamic metaTagsArray;
@property(readonly, nonatomic) unsigned long long metaTagsArray_Count; // @dynamic metaTagsArray_Count;
@property(retain, nonatomic) NSMutableArray *populatedUnlockableContextTypesArray; // @dynamic populatedUnlockableContextTypesArray;
@property(readonly, nonatomic) unsigned long long populatedUnlockableContextTypesArray_Count; // @dynamic populatedUnlockableContextTypesArray_Count;
@property(retain, nonatomic) NSMutableArray *positionArray; // @dynamic positionArray;
@property(readonly, nonatomic) unsigned long long positionArray_Count; // @dynamic positionArray_Count;
@property(nonatomic) int priority; // @dynamic priority;
@property(retain, nonatomic) SCPBUnlockablesScannableData *scannableData; // @dynamic scannableData;
@property(retain, nonatomic) SCPBUnlockablesSchedule *schedule; // @dynamic schedule;
@property(copy, nonatomic) NSString *section; // @dynamic section;
@property(nonatomic) long long serverTimestamp; // @dynamic serverTimestamp;
@property(nonatomic) _Bool shouldSubsampleImage; // @dynamic shouldSubsampleImage;
@property(retain, nonatomic) SCPBSponsoredSlugPosAndText *sponsoredSlug; // @dynamic sponsoredSlug;
@property(copy, nonatomic) NSString *sponsoredSlugImgLink; // @dynamic sponsoredSlugImgLink;
@property(copy, nonatomic) NSString *sponsoredSlugPosition; // @dynamic sponsoredSlugPosition;
@property(retain, nonatomic) SCPBSponsoredSlugStyle *sponsoredSlugStyle; // @dynamic sponsoredSlugStyle;
@property(retain, nonatomic) SCPBStickerPack *stickerPackData; // @dynamic stickerPackData;
@property(copy, nonatomic) NSString *syncSensitivity; // @dynamic syncSensitivity;
@property(copy, nonatomic) NSString *targetingType; // @dynamic targetingType;
@property(copy, nonatomic) NSString *unlockDurationMessage; // @dynamic unlockDurationMessage;
@property(retain, nonatomic) NSMutableArray *unlockableAttributesArray; // @dynamic unlockableAttributesArray;
@property(readonly, nonatomic) unsigned long long unlockableAttributesArray_Count; // @dynamic unlockableAttributesArray_Count;
@property(copy, nonatomic) NSString *unlockableCategory; // @dynamic unlockableCategory;
@property(copy, nonatomic) NSString *unlockableContentId; // @dynamic unlockableContentId;
@property(copy, nonatomic) NSString *unlockableContentType; // @dynamic unlockableContentType;
@property(retain, nonatomic) SCPBUnlockablesUnlockableContext *unlockableContext; // @dynamic unlockableContext;
@property(retain, nonatomic) SCPBUnlockableTrackInfo *unlockableTrackInfo; // @dynamic unlockableTrackInfo;

@end

