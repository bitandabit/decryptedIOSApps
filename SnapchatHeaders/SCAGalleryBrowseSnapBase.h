//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCAGalleryBrowseSnapBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *animatedStickerCount;
    NSNumber *animatedFilterCount;
    NSNumber *withAnimated;
    NSNumber *captionTracking;
    NSNumber *captionHasStyling;
    NSNumber *drawing;
    NSNumber *filterReverse;
    NSNumber *flash;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    NSNumber *viewTimeSec;
    NSNumber *camera;
    NSNumber *caption;
    NSNumber *captionDeletionCount;
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
    NSNumber *stickerCustomCreateCount;
    NSNumber *stickerCustomDeleteCount;
    NSNumber *swipeCount;
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
    NSNumber *withSearch;
    NSNumber *rollMaxDegree;
    NSNumber *rollMinDegree;
    NSNumber *withCropping;
    long long filterInfo;
    long long filterMotion;
    long long filterVisual;
    long long galleryContextMenuSource;
    long long mediaType;
    long long source;
    long long playerVersion;
    long long mediaFormat;
    NSString *stickerEmojiList;
    NSString *stickerSnapchatList;
    NSString *stickerBitmojiList;
    NSString *lagunaUserAgent;
    NSString *lagunaDeviceId;
    NSString *snapEditingAngleList;
    NSString *brushStroke;
    NSString *purikuraResourceId;
    NSString *audioToolName;
    NSString *contextFilterId;
    NSString *contextFilterSkyType;
    NSString *filterSponsor;
    NSString *snapcraftStyleId;
    NSString *facecraftStyleId;
    NSString *snapId;
    NSString *entryId;
    NSString *specsContentId;
    NSDate *snapCreateTs;
    NSDate *snapSaveTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getSnapSaveTs;
- (void)setSnapSaveTs:(id)arg1;
- (id)getSnapCreateTs;
- (void)setSnapCreateTs:(id)arg1;
- (id)getSpecsContentId;
- (void)setSpecsContentId:(id)arg1;
- (id)getEntryId;
- (void)setEntryId:(id)arg1;
- (id)getSnapId;
- (void)setSnapId:(id)arg1;
- (id)getFacecraftStyleId;
- (void)setFacecraftStyleId:(id)arg1;
- (id)getSnapcraftStyleId;
- (void)setSnapcraftStyleId:(id)arg1;
- (id)getFilterSponsor;
- (void)setFilterSponsor:(id)arg1;
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
- (id)getSnapEditingAngleList;
- (void)setSnapEditingAngleList:(id)arg1;
- (id)getLagunaDeviceId;
- (void)setLagunaDeviceId:(id)arg1;
- (id)getLagunaUserAgent;
- (void)setLagunaUserAgent:(id)arg1;
- (id)getStickerBitmojiList;
- (void)setStickerBitmojiList:(id)arg1;
- (id)getStickerSnapchatList;
- (void)setStickerSnapchatList:(id)arg1;
- (id)getStickerEmojiList;
- (void)setStickerEmojiList:(id)arg1;
- (long long)getMediaFormat;
- (void)setMediaFormat:(long long)arg1;
- (long long)getPlayerVersion;
- (void)setPlayerVersion:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getGalleryContextMenuSource;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getFilterMotion;
- (void)setFilterMotion:(long long)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (_Bool)getWithCropping;
- (void)setWithCropping:(_Bool)arg1;
- (double)getRollMinDegree;
- (void)setRollMinDegree:(double)arg1;
- (double)getRollMaxDegree;
- (void)setRollMaxDegree:(double)arg1;
- (_Bool)getWithSearch;
- (void)setWithSearch:(_Bool)arg1;
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
- (long long)getSwipeCount;
- (void)setSwipeCount:(long long)arg1;
- (long long)getStickerCustomDeleteCount;
- (void)setStickerCustomDeleteCount:(long long)arg1;
- (long long)getStickerCustomCreateCount;
- (void)setStickerCustomCreateCount:(long long)arg1;
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
- (long long)getCaptionDeletionCount;
- (void)setCaptionDeletionCount:(long long)arg1;
- (long long)getCaption;
- (void)setCaption:(long long)arg1;
- (long long)getCamera;
- (void)setCamera:(long long)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (_Bool)getSnapTimeIsLoop;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (_Bool)getFlash;
- (void)setFlash:(_Bool)arg1;
- (_Bool)getFilterReverse;
- (void)setFilterReverse:(_Bool)arg1;
- (_Bool)getDrawing;
- (void)setDrawing:(_Bool)arg1;
- (_Bool)getCaptionHasStyling;
- (void)setCaptionHasStyling:(_Bool)arg1;
- (_Bool)getCaptionTracking;
- (void)setCaptionTracking:(_Bool)arg1;
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

