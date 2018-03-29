//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SCPreviewLogger : NSObject
{
    long long _pickerClosedWithButtonCount;
    long long _pickerClosedWithBackCount;
    long long _stickerAddedCount;
    long long _stickerDeletedCount;
    long long _stickerTrackingNumberTotal;
    long long _stickersFromSearch;
    long long _stickerUserEnterSearchCount;
    long long _pretypeStickerTagSelectCount;
    long long _prefixMatchStickerTagSelectCount;
    NSMutableDictionary *_stickersByType;
    NSMutableDictionary *_stickersFromRecentsByType;
    double _pickerOpenDuration;
    double _pickerOpenedStart;
    NSMutableDictionary *_stickerFrequency;
    double _viewingTime;
    double _viewingStartTimeInterval;
    _Bool _viewingStarted;
    double _dependencyLoadingStartTime;
    _Bool _dependencyLoadingLogged;
    long long _customStickerCreated;
    long long _customStickerDeleted;
    long long _stickerAutoGeneratedUsageCount;
    long long _brushResizeCount;
    NSMutableDictionary *_brushStrokeCountBySize;
    long long _captionAddedCount;
    long long _captionDeletedCount;
    NSString *_context;
    long long _pickerOpenedCount;
}

+ (void)logAttemptToSaveSnapEvent:(id)arg1 savingSessionId:(id)arg2 saveToGallery:(_Bool)arg3 saveToCameraRoll:(_Bool)arg4;
+ (void)logSnapSaveEvents:(id)arg1 snapIdInSnapchatGallery:(id)arg2 mediaIdInSnapchatGallery:(id)arg3 entryIdInSnapchatGallery:(id)arg4 savingSessionId:(id)arg5 saveToCameraRoll:(_Bool)arg6;
@property(readonly, nonatomic) long long pickerOpenedCount; // @synthesize pickerOpenedCount=_pickerOpenedCount;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)logDependencyLoadingEnded:(_Bool)arg1;
- (void)dependencyLoadingStarted;
- (void)_setupDirectSnapPreviewBaseEventEvent:(id)arg1 loggingParameters:(id)arg2 ephemeralMedia:(id)arg3 geofilterLogger:(id)arg4;
- (unsigned long long)_stickerCountFromRecentsOfType:(unsigned long long)arg1 capability:(long long)arg2;
- (unsigned long long)_stickerCountFromRecentsOfType:(unsigned long long)arg1;
- (unsigned long long)_stickerCountOfType:(unsigned long long)arg1 capability:(long long)arg2;
- (unsigned long long)_stickerCountOfType:(unsigned long long)arg1;
- (void)updateStickerMetricsInSnapCommonLoggingParameters:(id)arg1;
- (void)updateCaptionMetricsInSnapCommonLoggingParameters:(id)arg1;
- (void)closedStickerPickerWithSearchCount:(long long)arg1 pretypeStickerTagSelectCount:(long long)arg2 prefixMatchStickerTagSelectCount:(long long)arg3;
- (void)closedStickerPicker:(long long)arg1;
- (void)openedStickerPicker;
- (void)logCaptionRemoved;
- (void)logCaptionAdded;
- (void)logStickerRemoved:(id)arg1 isFromRecents:(_Bool)arg2 isCreatedCustomSticker:(_Bool)arg3;
- (void)logStickerTracked:(id)arg1;
- (void)logStickerAdded:(id)arg1 isFromRecents:(_Bool)arg2 isFromSearch:(_Bool)arg3 isCreatedCustomSticker:(_Bool)arg4 isAutoGeneratedSticker:(_Bool)arg5;
- (void)updateTappedInfoSticker:(id)arg1 newSticker:(id)arg2;
- (void)logStickerPickerEvent:(id)arg1;
- (id)stickerPickerLoggingParameters:(id)arg1;
- (void)updateDrawingMetricsInSnapCommonLoggingParameters:(id)arg1;
- (void)logDrawingMetricStrokeSize:(double)arg1 isResized:(_Bool)arg2;
- (double)viewingTime;
- (void)viewingEnded;
- (void)viewingStarted;
- (void)logTimerButtonDidTap;
- (void)logPreviewScreenshot:(id)arg1;
- (void)logSnapPreviewAction:(id)arg1 ephemeralMedia:(id)arg2 geofilterLogger:(id)arg3;
- (id)blizzardEventsForSendingSharedMessage:(id)arg1 isFromSnapchatGallery:(_Bool)arg2 playerVersion:(long long)arg3;
- (void)logDirectSnapEdit:(id)arg1;
- (void)logDirectSnapCreate:(id)arg1 cellViewPosition:(long long)arg2;
- (id)init;

@end
