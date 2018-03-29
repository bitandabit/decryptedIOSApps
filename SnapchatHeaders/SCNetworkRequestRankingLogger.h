//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SCNetworkRequestRankingLogger : NSObject
{
    NSMutableDictionary *_requestTrackingIdToRankingInfoMap;
    NSMutableDictionary *_contextToRankingInfoMap;
    NSMutableArray *_requestRankingScreenshotInfos;
    NSString *_appSessionId;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_logDownloadRequestRankingEventWithEventName:(id)arg1 parameters:(id)arg2;
- (void)_logDownloadRequestRankingGroundTrueWithDataList:(id)arg1;
- (void)_logDownloadRequestRankingRawDataWithDataList:(id)arg1;
- (id)_groundTruthDataWithRankingIndex:(id)arg1 screenshotInfo:(id)arg2 trackingInfo:(id)arg3 actualRank:(long long)arg4 requestType:(unsigned long long)arg5;
- (id)_featureDataParamsWithRankingIndex:(id)arg1 screenshotInfo:(id)arg2 trackingInfo:(id)arg3 requestType:(unsigned long long)arg4;
- (void)_logDownloadRequestRankingWithRankingInfoList:(id)arg1 trackingInfo:(id)arg2 logRequestType:(unsigned long long)arg3;
- (id)_rankingIndexListForTask:(id)arg1 requestType:(unsigned long long)arg2;
- (void)logDownloadUIAssetRequestRankingWithCurrentContexts:(id)arg1;
- (void)logDownloadMediaRequestRankingWithTrackingInfo:(id)arg1;
- (void)recordDownloadRequestRankingWithOrderedTasks:(id)arg1 recordRequestType:(unsigned long long)arg2;
- (id)init;

@end

