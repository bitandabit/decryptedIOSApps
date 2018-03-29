//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCProgressOverlayViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, SCProgressOverlayView, SCUserSession, UIViewController;
@protocol SCProgressReporting><SCCanceling;

@interface SCGalleryPrepareMediaForSnapsOperation : NSObject <SCProgressOverlayViewDelegate>
{
    SCUserSession *_userSession;
    NSArray *_gallerySnaps;
    UIViewController *_containerViewController;
    _Bool _showsProgressOverlay;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    _Bool _longRunning;
    NSArray *_gallerySnapsToDownloadMedia;
    SCProgressOverlayView *_progressOverlayView;
    NSDictionary *_cloudFilesContainers;
    id <SCProgressReporting><SCCanceling> _downloadRequest;
    _Bool _running;
    _Bool _completed;
    _Bool _succeeded;
    _Bool _cancelled;
    NSError *_error;
    unsigned long long _totalImages;
    unsigned long long _totalVideos;
    unsigned long long _totalDownloadedImages;
    unsigned long long _totalDownloadedVideos;
    unsigned long long _totalSmartShareableImages;
    unsigned long long _totalSmartShareableVideos;
    unsigned long long _totalUnSyncedImages;
    unsigned long long _totalUnSyncedVideos;
}

- (void).cxx_destruct;
- (void)_log;
- (void)_updateDownloadedLoggingWithMediaType:(unsigned long long)arg1;
- (void)_updateSmartShareLoggingWithSnap:(id)arg1;
- (void)_complete;
- (void)_updateProgress:(float)arg1;
- (void)_prepareMediaForIndex:(unsigned long long)arg1;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)cancel;
- (void)runWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isLongRunning;
- (id)initWithGalleryEntries:(id)arg1 containerViewController:(id)arg2 showsProgressOverlay:(_Bool)arg3 userSession:(id)arg4;
- (id)initWithGallerySnaps:(id)arg1 containerViewController:(id)arg2 showsProgressOverlay:(_Bool)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
