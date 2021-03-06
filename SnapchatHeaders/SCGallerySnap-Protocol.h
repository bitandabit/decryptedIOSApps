//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSString, NSURL, SOJUStoryFrame;

@protocol SCGallerySnap <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) int width;
@property(readonly, copy, nonatomic) NSString *transferBatchId;
@property(readonly, copy, nonatomic) NSString *timeZoneName;
@property(readonly, copy, nonatomic) NSURL *thumbnailURI;
@property(readonly, nonatomic) int thumbnailUploadState;
@property(readonly, copy, nonatomic) NSString *thumbnailRedirectURI;
@property(readonly, nonatomic) int source;
@property(readonly, copy, nonatomic) NSString *snapId;
@property(readonly, copy, nonatomic) NSString *retryFromSnapId;
@property(readonly, copy, nonatomic) NSDate *placeholderCreateTime;
@property(readonly, nonatomic) _Bool pendingOptionalMediaSync;
@property(readonly, copy, nonatomic) NSString *overlayRedirectURI;
@property(readonly, copy, nonatomic) NSURL *overlayImageURI;
@property(readonly, nonatomic) int orientation;
@property(readonly, copy, nonatomic) NSURL *mediaURI;
@property(readonly, nonatomic) int mediaType;
@property(readonly, copy, nonatomic) NSString *mediaRedirectURI;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, nonatomic) int mediaFormat;
@property(readonly, nonatomic) _Bool isTemporary;
@property(readonly, nonatomic) float interestingnessScore;
@property(readonly, nonatomic) _Bool infiniteDuration;
@property(readonly, nonatomic) int height;
@property(readonly, copy, nonatomic) NSURL *hdMediaURI;
@property(readonly, nonatomic) int hdMediaState;
@property(readonly, copy, nonatomic) NSString *hdMediaRedirectURI;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) _Bool hasSynced;
@property(readonly, nonatomic) _Bool hasOverlayImage;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasInterestingnessScore;
@property(readonly, copy, nonatomic) SOJUStoryFrame *framing;
@property(readonly, copy, nonatomic) NSString *externalId;
@property(readonly, nonatomic) float duration;
@property(readonly, copy, nonatomic) NSString *duplicatedFromSnapId;
@property(readonly, copy, nonatomic) NSString *deviceId;
@property(readonly, copy, nonatomic) NSString *deviceFirmwareInfo;
@property(readonly, copy, nonatomic) NSDate *createTimeUtc;
@property(readonly, nonatomic) int cloudMediaState;
@property(readonly, copy, nonatomic) NSDate *captureTimeUtc;
@property(readonly, copy, nonatomic) NSString *cameraRollId;
@property(readonly, nonatomic) _Bool cameraFrontFacing;
@property(readonly, copy, nonatomic) NSArray *attribution;
@property(readonly, copy, nonatomic) NSString *objectID;
@end

