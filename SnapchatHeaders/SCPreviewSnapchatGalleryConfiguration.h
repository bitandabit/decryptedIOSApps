//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, PHAsset, PHContentEditingInput, SCCloudFS, SCGallerySnapCloudFileContainer, SCGalleryUserContext;
@protocol SCGalleryEntry, SCGallerySnap;

@interface SCPreviewSnapchatGalleryConfiguration : NSObject
{
    _Bool _usingRevisedEditingFlow;
    id <SCGalleryEntry> _entry;
    id <SCGallerySnap> _snap;
    SCGallerySnapCloudFileContainer *_cloudFileContainer;
    SCGalleryUserContext *_userContext;
    PHAsset *_asset;
    PHContentEditingInput *_contentEditingInput;
    SCCloudFS *_cloudFS;
    NSArray *_multiSnapSegments;
    NSIndexSet *_savedSegmentsIndexes;
    NSArray *_multiSnapTimeRanges;
}

@property(retain, nonatomic) NSArray *multiSnapTimeRanges; // @synthesize multiSnapTimeRanges=_multiSnapTimeRanges;
@property(retain, nonatomic) NSIndexSet *savedSegmentsIndexes; // @synthesize savedSegmentsIndexes=_savedSegmentsIndexes;
@property(retain, nonatomic) NSArray *multiSnapSegments; // @synthesize multiSnapSegments=_multiSnapSegments;
@property(retain, nonatomic) SCCloudFS *cloudFS; // @synthesize cloudFS=_cloudFS;
@property(nonatomic) _Bool usingRevisedEditingFlow; // @synthesize usingRevisedEditingFlow=_usingRevisedEditingFlow;
@property(retain, nonatomic) PHContentEditingInput *contentEditingInput; // @synthesize contentEditingInput=_contentEditingInput;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) SCGalleryUserContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) SCGallerySnapCloudFileContainer *cloudFileContainer; // @synthesize cloudFileContainer=_cloudFileContainer;
@property(retain, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
@property(retain, nonatomic) id <SCGalleryEntry> entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (_Bool)isVideoAsset;
- (_Bool)isImageAsset;
- (_Bool)shouldDrawBlackMask;
- (double)scaleFactor;
- (_Bool)shouldScaleSnap;
- (_Bool)isHD;
- (_Bool)isSpectaclesVideoSnap;
- (_Bool)isMalibuVideoSnap;
- (_Bool)isLagunaVideoSnap;
- (_Bool)isSpectaclesPhotoSnap;
- (_Bool)isScreamingmantisSnap;
- (_Bool)isPsychomantisSnap;
- (_Bool)isSpectaclesSnap;
- (_Bool)isVideoSnap;
- (_Bool)isPhotoSnap;
- (_Bool)isMultiSnap;
- (_Bool)isStoryEntry;
- (_Bool)isSnapEntry;
- (_Bool)isFromiOSPhoto;
- (_Bool)isFromGallerySnap;

@end

