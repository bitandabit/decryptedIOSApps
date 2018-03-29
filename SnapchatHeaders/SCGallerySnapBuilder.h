//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSURL, SOJUStoryFrame;

@interface SCGallerySnapBuilder : NSObject
{
    NSString *_objectID;
    NSArray *_attribution;
    _Bool _cameraFrontFacing;
    NSString *_cameraRollId;
    NSDate *_captureTimeUtc;
    int _cloudMediaState;
    NSDate *_createTimeUtc;
    NSString *_deviceFirmwareInfo;
    NSString *_deviceId;
    NSString *_duplicatedFromSnapId;
    float _duration;
    NSString *_externalId;
    SOJUStoryFrame *_framing;
    _Bool _hasInterestingnessScore;
    _Bool _hasLocation;
    _Bool _hasOverlayImage;
    _Bool _hasSynced;
    _Bool _hasThumbnail;
    NSString *_hdMediaRedirectURI;
    int _hdMediaState;
    NSURL *_hdMediaURI;
    int _height;
    _Bool _infiniteDuration;
    float _interestingnessScore;
    _Bool _isTemporary;
    int _mediaFormat;
    NSString *_mediaId;
    NSString *_mediaRedirectURI;
    int _mediaType;
    NSURL *_mediaURI;
    int _orientation;
    NSURL *_overlayImageURI;
    NSString *_overlayRedirectURI;
    _Bool _pendingOptionalMediaSync;
    NSDate *_placeholderCreateTime;
    NSString *_retryFromSnapId;
    NSString *_snapId;
    int _source;
    NSString *_thumbnailRedirectURI;
    int _thumbnailUploadState;
    NSURL *_thumbnailURI;
    NSString *_timeZoneName;
    NSString *_transferBatchId;
    int _width;
}

+ (id)withGallerySnap:(id)arg1;
- (void).cxx_destruct;
- (id)setWidth:(int)arg1;
- (id)setTransferBatchId:(id)arg1;
- (id)setTimeZoneName:(id)arg1;
- (id)setThumbnailURI:(id)arg1;
- (id)setThumbnailUploadState:(int)arg1;
- (id)setThumbnailRedirectURI:(id)arg1;
- (id)setSource:(int)arg1;
- (id)setSnapId:(id)arg1;
- (id)setRetryFromSnapId:(id)arg1;
- (id)setPlaceholderCreateTime:(id)arg1;
- (id)setPendingOptionalMediaSync:(_Bool)arg1;
- (id)setOverlayRedirectURI:(id)arg1;
- (id)setOverlayImageURI:(id)arg1;
- (id)setOrientation:(int)arg1;
- (id)setMediaURI:(id)arg1;
- (id)setMediaType:(int)arg1;
- (id)setMediaRedirectURI:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)setMediaFormat:(int)arg1;
- (id)setIsTemporary:(_Bool)arg1;
- (id)setInterestingnessScore:(float)arg1;
- (id)setInfiniteDuration:(_Bool)arg1;
- (id)setHeight:(int)arg1;
- (id)setHdMediaURI:(id)arg1;
- (id)setHdMediaState:(int)arg1;
- (id)setHdMediaRedirectURI:(id)arg1;
- (id)setHasThumbnail:(_Bool)arg1;
- (id)setHasSynced:(_Bool)arg1;
- (id)setHasOverlayImage:(_Bool)arg1;
- (id)setHasLocation:(_Bool)arg1;
- (id)setHasInterestingnessScore:(_Bool)arg1;
- (id)setFraming:(id)arg1;
- (id)setExternalId:(id)arg1;
- (id)setDuration:(float)arg1;
- (id)setDuplicatedFromSnapId:(id)arg1;
- (id)setDeviceId:(id)arg1;
- (id)setDeviceFirmwareInfo:(id)arg1;
- (id)setCreateTimeUtc:(id)arg1;
- (id)setCloudMediaState:(int)arg1;
- (id)setCaptureTimeUtc:(id)arg1;
- (id)setCameraRollId:(id)arg1;
- (id)setCameraFrontFacing:(_Bool)arg1;
- (id)setAttribution:(id)arg1;
- (id)setObjectID:(id)arg1;
- (id)build;

@end
