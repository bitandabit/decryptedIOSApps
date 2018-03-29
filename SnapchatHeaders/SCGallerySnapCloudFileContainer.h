//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCCloudFS, SCCloudFSFile;
@protocol SCGallerySnap;

@interface SCGallerySnapCloudFileContainer : NSObject
{
    SCCloudFS *_cloudFS;
    id <SCGallerySnap> _gallerySnap;
    SCCloudFSFile *_cloudFile;
    SCCloudFSFile *_hdCloudFile;
}

+ (id)mediaUrlForFile:(id)arg1;
+ (id)mediaRepresentationForFile:(id)arg1;
+ (id)containerWithSnap:(id)arg1 cloudFS:(id)arg2;
@property(readonly, nonatomic) SCCloudFSFile *hdCloudFile; // @synthesize hdCloudFile=_hdCloudFile;
@property(readonly, nonatomic) SCCloudFSFile *cloudFile; // @synthesize cloudFile=_cloudFile;
- (void).cxx_destruct;
- (_Bool)duplicateCloudFilesToSnap:(id)arg1 mediaOverlayURL:(id)arg2;
- (_Bool)duplicateCloudFilesToSnap:(id)arg1;
- (void)invalidateCloudFiles;
- (void)markCloudFilesAsSynced;
- (id)bestMediaCloudFile;
- (id)smallestAvailableMediaCloudFile;
- (id)bestAvailableMediaCloudFile;
- (id)initWithSnap:(id)arg1 cloudFS:(id)arg2;

@end

