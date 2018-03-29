//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SCGallerySavingLoggerListenerAnnouncer, SCUserSession;

@interface SCGallerySavingLogger : NSObject
{
    SCUserSession *_userSession;
    NSMutableDictionary *_currentSavingSessionIdToStatusMap;
    SCGallerySavingLoggerListenerAnnouncer *_listenerAnnouncer;
}

@property(readonly, nonatomic) SCGallerySavingLoggerListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
- (void).cxx_destruct;
- (void)_updateSessionStatusWithSessionId:(id)arg1;
- (void)didFinishRequestAVAssetWithEventUuid:(id)arg1;
- (void)didFinishExportMultiSnapsWithEventUuid:(id)arg1;
- (void)didFinishAppendingOperationWithEventUuid:(id)arg1;
- (void)didStartAppendingOperationWithEventUuid:(id)arg1;
- (void)didFinishPackingMiniThumbNailWithEventUuid:(id)arg1;
- (void)didFinishPackingSnapDetailWithEventUuid:(id)arg1;
- (void)didFinishPackingGallerySnapWithEventUuid:(id)arg1;
- (void)didFinishGeneratePreviewBlobWithEventUuid:(id)arg1;
- (id)savingToGallerySessionIdBasedOnSessionId:(id)arg1;
- (void)didCompleteSavingToCameraRollFromPreviewWithSessionId:(id)arg1 success:(_Bool)arg2 error:(id)arg3 appearanceState:(unsigned long long)arg4;
- (void)didCompleteSavingToGalleryFromPreviewWithSessionId:(id)arg1 success:(_Bool)arg2 error:(id)arg3 gallerySnaps:(id)arg4 entryId:(id)arg5 segment:(long long)arg6 appearanceState:(unsigned long long)arg7;
- (id)attemptToSaveSnapFromPreview:(id)arg1 saveToGallery:(_Bool)arg2 saveToCameraRoll:(_Bool)arg3 edited:(_Bool)arg4 savingSource:(long long)arg5 gallerySnapCount:(long long)arg6;
- (void)didCompleteSavingToCameraRollFromStoryWithSessionId:(id)arg1 success:(_Bool)arg2 error:(id)arg3 savingSegment:(long long)arg4;
- (void)didCompleteSavingToGalleryFromStoryWithSessionId:(id)arg1 success:(_Bool)arg2 error:(id)arg3 savingSegment:(long long)arg4;
- (id)attemptToSaveStories:(id)arg1 saveToGallery:(_Bool)arg2 saveToCameraRoll:(_Bool)arg3 isFromGroupStory:(_Bool)arg4;
- (id)initWithUserSession:(id)arg1;

@end

