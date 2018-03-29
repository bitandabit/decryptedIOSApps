//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCMediaDownloadEntity-Protocol.h"

@class NSString, SCDataObjectContext, SCQueuePerformer, SCSentinel;
@protocol SCGallerySnap, SCMediaDownloadLogger, SCNetworkResumeableDownloadRequest, SCNetworker, SCSyncFileResolver;

@interface SCMediaDownloadHDMediaEntity : NSObject <SCMediaDownloadEntity>
{
    NSString *_UUID;
    id <SCNetworkResumeableDownloadRequest> _HDMediaDownloadRequest;
    id <SCNetworkResumeableDownloadRequest> _overlayDownloadRequest;
    id <SCGallerySnap> _snap;
    SCQueuePerformer *_performer;
    id <SCNetworker> _networker;
    id <SCSyncFileResolver> _fileResolver;
    id <SCMediaDownloadLogger> _logger;
    SCDataObjectContext *_dataObjectContext;
    _Bool _renewHDMediaURL;
    _Bool _renewOverlayURL;
    SCSentinel *_sentinel;
    NSString *_getSnapsSnapId;
}

- (void).cxx_destruct;
- (_Bool)_isCancelled;
- (void)_processSnapsMetadataWithResponse:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_fetchOverlayMetadataWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_resumeOverlayWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_resumeMediaWithResultHandler:(CDUnknownBlockType)arg1;
- (void)resumeWithResultHandler:(CDUnknownBlockType)arg1;
- (void)cancelByProducingResumeData;
- (id)UUID;
- (id)initWithSnap:(id)arg1 performer:(id)arg2 networker:(id)arg3 fileResolver:(id)arg4 dataObjectContext:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

