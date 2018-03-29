//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCRefreshableDebugViewDelegate-Protocol.h"

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCExperimentManager, SCGalleryLogger, SCQueuePerformer, SCRefreshableDebugView;

@interface SCGalleryThumbnailDelayDebugManager : NSObject <SCRefreshableDebugViewDelegate>
{
    SCExperimentManager *_experimentManager;
    NSString *_userId;
    NSString *_username;
    SCQueuePerformer *_performer;
    SCRefreshableDebugView *_debugView;
    NSMutableArray *_infoQueue;
    SCGalleryLogger *_galleryLogger;
    NSMapTable *_entryIdToLoadingCell;
    NSMutableDictionary *_entryIdToLogArray;
    NSMutableDictionary *_thumbnailDelayDetails;
    NSMutableSet *_loggingGeneration;
}

+ (id)_timeString;
- (void).cxx_destruct;
- (void)_trimInfoQueueToSize:(unsigned long long)arg1;
- (void)_logThumbnailDelay:(id)arg1;
- (void)_logStringWithShouldClearInfoQueue:(_Bool)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)debugViewDidTapRefresh:(id)arg1;
- (void)thumbnailLongLatencyWarning;
- (id)thumbnailLoadingProgressSummary;
- (void)cell:(id)arg1 withEntry:(id)arg2 didReceiveProgress:(CDUnknownBlockType)arg3 fromReporterIdentifier:(id)arg4;
- (void)cellDidLoadThumbnail:(id)arg1;
- (void)cellDidPrepareForReuse:(id)arg1;
- (void)updateThumbnailGeneration:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)thumbnailGenerationStart:(id)arg1;
- (void)cellDidStartLoadThumbnail:(id)arg1 withEntry:(id)arg2;
- (id)thunmbnailGenerationId:(id)arg1;
- (void)greyThumbnailStartingAt:(double)arg1 endingAt:(double)arg2 generationId:(id)arg3 didShowUp:(_Bool)arg4 forSnap:(id)arg5;
- (void)show;
- (id)initWithUserId:(id)arg1 username:(id)arg2 experimentManager:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

