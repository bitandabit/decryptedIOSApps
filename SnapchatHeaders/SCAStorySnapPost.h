//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString, SCAUserTags;

@interface SCAStorySnapPost : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *animatedStickerCount;
    NSNumber *animatedFilterCount;
    NSNumber *withAnimated;
    NSNumber *multiSnapCount;
    NSNumber *multiSnapIndex;
    NSNumber *caption;
    NSNumber *captionDeletionCount;
    NSNumber *captionAddCount;
    NSNumber *captionUseCount;
    NSNumber *captionTracking;
    NSNumber *captionHasStyling;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *altitudeMeter;
    NSNumber *snapTimeIsLoop;
    NSNumber *storySnapIndex;
    NSNumber *retryCount;
    NSNumber *deviceScore;
    NSNumber *handsFree;
    NSNumber *snapTime;
    NSNumber *withSnap;
    NSNumber *withGallery;
    NSNumber *storyPostCount;
    NSNumber *view_time_sec;
    NSNumber *friendLinkHop;
    NSNumber *withExpiredGroupStory;
    NSNumber *groupStoryPosterCount;
    NSNumber *groupStoryViewerCount;
    NSNumber *stickerCount;
    NSNumber *stickerDeletionCount;
    NSNumber *stickerTrackingCount;
    NSNumber *stickerBitmojiCount;
    NSNumber *stickerSnapchatCount;
    NSNumber *stickerEmojiCount;
    NSNumber *stickerCustomCount;
    NSNumber *stickerBitmojiFromRecentsCount;
    NSNumber *stickerSnapchatFromRecentsCount;
    NSNumber *stickerEmojiFromRecentsCount;
    NSNumber *stickerCustomFromRecentsCount;
    NSNumber *stickerUserEnterSearchCount;
    NSNumber *stickerFromSearchCount;
    NSNumber *stickerCustomCreateCount;
    NSNumber *stickerCustomDeleteCount;
    NSNumber *stickerAutoGeneratedUsageCount;
    NSNumber *stickerInfoCount;
    NSNumber *stickerInfoTapCount;
    NSNumber *stickerContextualCount;
    NSNumber *stickerUnlockedCount;
    NSNumber *stickerGiphyCount;
    NSNumber *filterReverse;
    NSNumber *swipeCount;
    NSNumber *hasLabel;
    NSNumber *brushResizeCount;
    NSNumber *pretypeStickerTagSelectCount;
    NSNumber *prefixMatchStickerTagSelectCount;
    NSNumber *magicTotalEditCount;
    NSNumber *magicFinalEditCount;
    NSNumber *magicCancelCount;
    NSNumber *magicSessionCount;
    NSNumber *magicHasMagicImage;
    NSNumber *brushTotalTintCount;
    NSNumber *brushFinalTintCount;
    NSNumber *brushCancelCount;
    NSNumber *brushSessionCount;
    NSNumber *brushHasTint;
    NSNumber *eraserTotalEraseCount;
    NSNumber *eraserLastEraseCount;
    NSNumber *eraserCancelCount;
    NSNumber *eraserSessionCount;
    NSNumber *eraserIsInpainted;
    NSNumber *purikuraTotalEditCount;
    NSNumber *purikuraLastDrawCount;
    NSNumber *purikuraCancelCount;
    NSNumber *purikuraSessionCount;
    NSNumber *withPurikura;
    NSNumber *contextFilterGeneratedCount;
    NSNumber *contextFilterIsSeen;
    NSNumber *visualFilterIsSeen;
    NSNumber *withContextFilterEnabled;
    NSNumber *latitude;
    NSNumber *longitude;
    NSNumber *horizontalAccuracyInMeters;
    NSNumber *verticalAccuracyInMeters;
    NSNumber *speed;
    NSNumber *withSearch;
    NSNumber *withFraming;
    NSNumber *galleryMediaSync;
    NSNumber *withAttachment;
    NSNumber *withCropping;
    NSNumber *faceFrontCameraCount;
    NSNumber *faceBackCameraCount;
    NSNumber *lensIndexPos;
    NSNumber *lensIndexCount;
    long long deletedSegments;
    long long filterType;
    long long source;
    long long mediaType;
    long long storyType;
    long long filterVisual;
    long long filterInfo;
    long long filterStreak;
    long long lensSource;
    long long filterMotion;
    long long storyTypeSpecific;
    long long cameraSource;
    long long galleryContextMenuSource;
    NSString *filter;
    NSString *filterWeatherTemperatureUnit;
    NSString *filterWeatherViewTypeInfo;
    NSString *storySnapId;
    NSString *geoFence;
    NSString *posterId;
    NSString *groupStoryId;
    NSString *filterGeofence;
    NSString *filterSponsor;
    NSString *filterLensId;
    NSString *lensOptionId;
    NSString *stickerEmojiList;
    NSString *stickerSnapchatList;
    NSString *stickerBitmojiList;
    NSString *stickerInfoList;
    NSString *stickerContextualList;
    NSString *stickerUnlockedList;
    NSString *stickerGiphyList;
    NSString *captionStyleList;
    NSString *snapSessionId;
    NSString *lagunaUserAgent;
    NSString *lagunaDeviceId;
    NSString *brushStroke;
    NSString *purikuraResourceId;
    NSString *audioToolName;
    NSString *contextFilterId;
    NSString *contextFilterSkyType;
    NSString *widgetValueList;
    NSString *galleryMediaId;
    NSString *snapcraftStyleId;
    NSString *facecraftStyleId;
    NSString *lensBundleUrl;
    NSString *lensInfo;
    NSString *ghost_poster_id;
    NSDate *snapCaptureTimestamp;
    NSDate *locationTimestamp;
    SCAUserTags *userTags;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getUserTags;
- (void)setUserTags:(id)arg1;
- (id)getLocationTimestamp;
- (void)setLocationTimestamp:(id)arg1;
- (id)getSnapCaptureTimestamp;
- (void)setSnapCaptureTimestamp:(id)arg1;
- (id)getGhost_poster_id;
- (void)setGhost_poster_id:(id)arg1;
- (id)getLensInfo;
- (void)setLensInfo:(id)arg1;
- (id)getLensBundleUrl;
- (void)setLensBundleUrl:(id)arg1;
- (id)getFacecraftStyleId;
- (void)setFacecraftStyleId:(id)arg1;
- (id)getSnapcraftStyleId;
- (void)setSnapcraftStyleId:(id)arg1;
- (id)getGalleryMediaId;
- (void)setGalleryMediaId:(id)arg1;
- (id)getWidgetValueList;
- (void)setWidgetValueList:(id)arg1;
- (id)getContextFilterSkyType;
- (void)setContextFilterSkyType:(id)arg1;
- (id)getContextFilterId;
- (void)setContextFilterId:(id)arg1;
- (id)getAudioToolName;
- (void)setAudioToolName:(id)arg1;
- (id)getPurikuraResourceId;
- (void)setPurikuraResourceId:(id)arg1;
- (id)getBrushStroke;
- (void)setBrushStroke:(id)arg1;
- (id)getLagunaDeviceId;
- (void)setLagunaDeviceId:(id)arg1;
- (id)getLagunaUserAgent;
- (void)setLagunaUserAgent:(id)arg1;
- (id)getSnapSessionId;
- (void)setSnapSessionId:(id)arg1;
- (id)getCaptionStyleList;
- (void)setCaptionStyleList:(id)arg1;
- (id)getStickerGiphyList;
- (void)setStickerGiphyList:(id)arg1;
- (id)getStickerUnlockedList;
- (void)setStickerUnlockedList:(id)arg1;
- (id)getStickerContextualList;
- (void)setStickerContextualList:(id)arg1;
- (id)getStickerInfoList;
- (void)setStickerInfoList:(id)arg1;
- (id)getStickerBitmojiList;
- (void)setStickerBitmojiList:(id)arg1;
- (id)getStickerSnapchatList;
- (void)setStickerSnapchatList:(id)arg1;
- (id)getStickerEmojiList;
- (void)setStickerEmojiList:(id)arg1;
- (id)getLensOptionId;
- (void)setLensOptionId:(id)arg1;
- (id)getFilterLensId;
- (void)setFilterLensId:(id)arg1;
- (id)getFilterSponsor;
- (void)setFilterSponsor:(id)arg1;
- (id)getFilterGeofence;
- (void)setFilterGeofence:(id)arg1;
- (id)getGroupStoryId;
- (void)setGroupStoryId:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (id)getStorySnapId;
- (void)setStorySnapId:(id)arg1;
- (id)getFilterWeatherViewTypeInfo;
- (void)setFilterWeatherViewTypeInfo:(id)arg1;
- (id)getFilterWeatherTemperatureUnit;
- (void)setFilterWeatherTemperatureUnit:(id)arg1;
- (id)getFilter;
- (void)setFilter:(id)arg1;
- (long long)getGalleryContextMenuSource;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (long long)getCameraSource;
- (void)setCameraSource:(long long)arg1;
- (long long)getStoryTypeSpecific;
- (void)setStoryTypeSpecific:(long long)arg1;
- (long long)getFilterMotion;
- (void)setFilterMotion:(long long)arg1;
- (long long)getLensSource;
- (void)setLensSource:(long long)arg1;
- (long long)getFilterStreak;
- (void)setFilterStreak:(long long)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getFilterType;
- (void)setFilterType:(long long)arg1;
- (long long)getDeletedSegments;
- (void)setDeletedSegments:(long long)arg1;
- (long long)getLensIndexCount;
- (void)setLensIndexCount:(long long)arg1;
- (long long)getLensIndexPos;
- (void)setLensIndexPos:(long long)arg1;
- (long long)getFaceBackCameraCount;
- (void)setFaceBackCameraCount:(long long)arg1;
- (long long)getFaceFrontCameraCount;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (_Bool)getWithCropping;
- (void)setWithCropping:(_Bool)arg1;
- (_Bool)getWithAttachment;
- (void)setWithAttachment:(_Bool)arg1;
- (_Bool)getGalleryMediaSync;
- (void)setGalleryMediaSync:(_Bool)arg1;
- (_Bool)getWithFraming;
- (void)setWithFraming:(_Bool)arg1;
- (_Bool)getWithSearch;
- (void)setWithSearch:(_Bool)arg1;
- (double)getSpeed;
- (void)setSpeed:(double)arg1;
- (double)getVerticalAccuracyInMeters;
- (void)setVerticalAccuracyInMeters:(double)arg1;
- (double)getHorizontalAccuracyInMeters;
- (void)setHorizontalAccuracyInMeters:(double)arg1;
- (double)getLongitude;
- (void)setLongitude:(double)arg1;
- (double)getLatitude;
- (void)setLatitude:(double)arg1;
- (_Bool)getWithContextFilterEnabled;
- (void)setWithContextFilterEnabled:(_Bool)arg1;
- (_Bool)getVisualFilterIsSeen;
- (void)setVisualFilterIsSeen:(_Bool)arg1;
- (_Bool)getContextFilterIsSeen;
- (void)setContextFilterIsSeen:(_Bool)arg1;
- (long long)getContextFilterGeneratedCount;
- (void)setContextFilterGeneratedCount:(long long)arg1;
- (_Bool)getWithPurikura;
- (void)setWithPurikura:(_Bool)arg1;
- (long long)getPurikuraSessionCount;
- (void)setPurikuraSessionCount:(long long)arg1;
- (long long)getPurikuraCancelCount;
- (void)setPurikuraCancelCount:(long long)arg1;
- (long long)getPurikuraLastDrawCount;
- (void)setPurikuraLastDrawCount:(long long)arg1;
- (long long)getPurikuraTotalEditCount;
- (void)setPurikuraTotalEditCount:(long long)arg1;
- (_Bool)getEraserIsInpainted;
- (void)setEraserIsInpainted:(_Bool)arg1;
- (long long)getEraserSessionCount;
- (void)setEraserSessionCount:(long long)arg1;
- (long long)getEraserCancelCount;
- (void)setEraserCancelCount:(long long)arg1;
- (long long)getEraserLastEraseCount;
- (void)setEraserLastEraseCount:(long long)arg1;
- (long long)getEraserTotalEraseCount;
- (void)setEraserTotalEraseCount:(long long)arg1;
- (_Bool)getBrushHasTint;
- (void)setBrushHasTint:(_Bool)arg1;
- (long long)getBrushSessionCount;
- (void)setBrushSessionCount:(long long)arg1;
- (long long)getBrushCancelCount;
- (void)setBrushCancelCount:(long long)arg1;
- (long long)getBrushFinalTintCount;
- (void)setBrushFinalTintCount:(long long)arg1;
- (long long)getBrushTotalTintCount;
- (void)setBrushTotalTintCount:(long long)arg1;
- (_Bool)getMagicHasMagicImage;
- (void)setMagicHasMagicImage:(_Bool)arg1;
- (long long)getMagicSessionCount;
- (void)setMagicSessionCount:(long long)arg1;
- (long long)getMagicCancelCount;
- (void)setMagicCancelCount:(long long)arg1;
- (long long)getMagicFinalEditCount;
- (void)setMagicFinalEditCount:(long long)arg1;
- (long long)getMagicTotalEditCount;
- (void)setMagicTotalEditCount:(long long)arg1;
- (long long)getPrefixMatchStickerTagSelectCount;
- (void)setPrefixMatchStickerTagSelectCount:(long long)arg1;
- (long long)getPretypeStickerTagSelectCount;
- (void)setPretypeStickerTagSelectCount:(long long)arg1;
- (long long)getBrushResizeCount;
- (void)setBrushResizeCount:(long long)arg1;
- (_Bool)getHasLabel;
- (void)setHasLabel:(_Bool)arg1;
- (long long)getSwipeCount;
- (void)setSwipeCount:(long long)arg1;
- (_Bool)getFilterReverse;
- (void)setFilterReverse:(_Bool)arg1;
- (long long)getStickerGiphyCount;
- (void)setStickerGiphyCount:(long long)arg1;
- (long long)getStickerUnlockedCount;
- (void)setStickerUnlockedCount:(long long)arg1;
- (long long)getStickerContextualCount;
- (void)setStickerContextualCount:(long long)arg1;
- (long long)getStickerInfoTapCount;
- (void)setStickerInfoTapCount:(long long)arg1;
- (long long)getStickerInfoCount;
- (void)setStickerInfoCount:(long long)arg1;
- (long long)getStickerAutoGeneratedUsageCount;
- (void)setStickerAutoGeneratedUsageCount:(long long)arg1;
- (long long)getStickerCustomDeleteCount;
- (void)setStickerCustomDeleteCount:(long long)arg1;
- (long long)getStickerCustomCreateCount;
- (void)setStickerCustomCreateCount:(long long)arg1;
- (long long)getStickerFromSearchCount;
- (void)setStickerFromSearchCount:(long long)arg1;
- (long long)getStickerUserEnterSearchCount;
- (void)setStickerUserEnterSearchCount:(long long)arg1;
- (long long)getStickerCustomFromRecentsCount;
- (void)setStickerCustomFromRecentsCount:(long long)arg1;
- (long long)getStickerEmojiFromRecentsCount;
- (void)setStickerEmojiFromRecentsCount:(long long)arg1;
- (long long)getStickerSnapchatFromRecentsCount;
- (void)setStickerSnapchatFromRecentsCount:(long long)arg1;
- (long long)getStickerBitmojiFromRecentsCount;
- (void)setStickerBitmojiFromRecentsCount:(long long)arg1;
- (long long)getStickerCustomCount;
- (void)setStickerCustomCount:(long long)arg1;
- (long long)getStickerEmojiCount;
- (void)setStickerEmojiCount:(long long)arg1;
- (long long)getStickerSnapchatCount;
- (void)setStickerSnapchatCount:(long long)arg1;
- (long long)getStickerBitmojiCount;
- (void)setStickerBitmojiCount:(long long)arg1;
- (long long)getStickerTrackingCount;
- (void)setStickerTrackingCount:(long long)arg1;
- (long long)getStickerDeletionCount;
- (void)setStickerDeletionCount:(long long)arg1;
- (long long)getStickerCount;
- (void)setStickerCount:(long long)arg1;
- (long long)getGroupStoryViewerCount;
- (void)setGroupStoryViewerCount:(long long)arg1;
- (long long)getGroupStoryPosterCount;
- (void)setGroupStoryPosterCount:(long long)arg1;
- (_Bool)getWithExpiredGroupStory;
- (void)setWithExpiredGroupStory:(_Bool)arg1;
- (long long)getFriendLinkHop;
- (void)setFriendLinkHop:(long long)arg1;
- (double)getView_time_sec;
- (void)setView_time_sec:(double)arg1;
- (long long)getStoryPostCount;
- (void)setStoryPostCount:(long long)arg1;
- (_Bool)getWithGallery;
- (void)setWithGallery:(_Bool)arg1;
- (_Bool)getWithSnap;
- (void)setWithSnap:(_Bool)arg1;
- (double)getSnapTime;
- (void)setSnapTime:(double)arg1;
- (_Bool)getHandsFree;
- (void)setHandsFree:(_Bool)arg1;
- (long long)getDeviceScore;
- (void)setDeviceScore:(long long)arg1;
- (long long)getRetryCount;
- (void)setRetryCount:(long long)arg1;
- (long long)getStorySnapIndex;
- (void)setStorySnapIndex:(long long)arg1;
- (_Bool)getSnapTimeIsLoop;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (long long)getAltitudeMeter;
- (void)setAltitudeMeter:(long long)arg1;
- (_Bool)getFlash;
- (void)setFlash:(_Bool)arg1;
- (_Bool)getDrawing;
- (void)setDrawing:(_Bool)arg1;
- (long long)getCamera;
- (void)setCamera:(long long)arg1;
- (_Bool)getCaptionHasStyling;
- (void)setCaptionHasStyling:(_Bool)arg1;
- (_Bool)getCaptionTracking;
- (void)setCaptionTracking:(_Bool)arg1;
- (long long)getCaptionUseCount;
- (void)setCaptionUseCount:(long long)arg1;
- (long long)getCaptionAddCount;
- (void)setCaptionAddCount:(long long)arg1;
- (long long)getCaptionDeletionCount;
- (void)setCaptionDeletionCount:(long long)arg1;
- (long long)getCaption;
- (void)setCaption:(long long)arg1;
- (long long)getMultiSnapIndex;
- (void)setMultiSnapIndex:(long long)arg1;
- (long long)getMultiSnapCount;
- (void)setMultiSnapCount:(long long)arg1;
- (_Bool)getWithAnimated;
- (void)setWithAnimated:(_Bool)arg1;
- (long long)getAnimatedFilterCount;
- (void)setAnimatedFilterCount:(long long)arg1;
- (long long)getAnimatedStickerCount;
- (void)setAnimatedStickerCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
