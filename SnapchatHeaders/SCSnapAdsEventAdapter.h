//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCSnapAdsEventBus;

@interface SCSnapAdsEventAdapter : NSObject
{
    SCSnapAdsEventBus *_eventBus;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)trackCheetahPromotedStories:(id)arg1 sessionId:(id)arg2;
- (void)onCheetahPromotedStoriesResolved:(id)arg1 requestId:(id)arg2 trackUrl:(id)arg3 rawAdData:(id)arg4 rawUserData:(id)arg5 thirdPartyImpressionTrackUrls:(id)arg6;
- (void)trackAndGetTrackAdIdentifier:(id)arg1 requestAdIdentifier:(id)arg2 viewContext:(id)arg3 exitEvent:(id)arg4 clientRankingFeatures:(id)arg5 clientRankingModelOutput:(id)arg6 targetingParameters:(id)arg7 timeoutMillis:(long long)arg8 adPreferences:(id)arg9 productType:(unsigned long long)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12 timeoutBlock:(CDUnknownBlockType)arg13;
- (void)subscribeAttachmentViewed:(id)arg1 channelIsSubscribedEndState:(_Bool)arg2 index:(long long)arg3;
- (void)adReported:(id)arg1 adFlagged:(_Bool)arg2 adFlaggedReason:(id)arg3 adFlaggedNote:(id)arg4;
- (void)reportTfClientRankingModelError:(id)arg1 tensorFlowModelErrorReason:(id)arg2;
- (void)adBlocked:(id)arg1 clientRankingFeatures:(id)arg2 clientRankingOutput:(id)arg3;
- (void)adStoryOpportunity:(id)arg1;
- (void)adLongPressed:(id)arg1 index:(long long)arg2 AdPanel:(long long)arg3;
- (void)deepLinkAttachmentViewed:(id)arg1 deepLinkFromCard:(_Bool)arg2 deepLinkFallBackToAppStore:(_Bool)arg3 deepLinkFallBackToWebview:(_Bool)arg4 index:(long long)arg5;
- (void)appInstallViewed:(id)arg1 index:(long long)arg2;
- (void)localWebViewViewed:(id)arg1 pageHeight:(long long)arg2 pageHeightSeen:(long long)arg3 pageCurrentOffset:(long long)arg4 index:(long long)arg5;
- (void)remoteWebViewViewed:(id)arg1 loadedOnEntry:(_Bool)arg2 loadedOnExit:(_Bool)arg3 loadErrorCount:(long long)arg4 visiblePageLoadTimeSeconds:(double)arg5 index:(long long)arg6;
- (void)adMediaDownloadComplete:(id)arg1 success:(_Bool)arg2;
- (void)trackUnlockablesRequest:(id)arg1;
- (void)adExpired:(id)arg1;
- (void)exitAdUnit:(id)arg1 productType:(unsigned long long)arg2;
- (void)enterAdUnit:(id)arg1 productType:(unsigned long long)arg2;
- (void)adVideoViewed:(id)arg1 adPanel:(long long)arg2 mediaDurationMillis:(long long)arg3 viewedDurationMillis:(long long)arg4 index:(long long)arg5;
- (void)swipeUpToCard:(id)arg1 index:(long long)arg2;
- (void)adPanelChanged:(id)arg1 fromPanel:(long long)arg2 toPanel:(long long)arg3 viewContext:(id)arg4 index:(long long)arg5 adSessionId:(id)arg6;
- (void)adSnapHidden:(id)arg1 index:(long long)arg2 exitEvent:(id)arg3;
- (void)adHidden:(id)arg1 viewContext:(id)arg2 exitEvent:(id)arg3 clientRankingFeatures:(id)arg4 clientRankingOutput:(id)arg5;
- (void)adShown:(id)arg1 adPanel:(long long)arg2 index:(long long)arg3;
- (void)trackNoFill:(id)arg1 viewContext:(id)arg2;
- (void)makeAdRequest:(id)arg1 adRequestClientId:(id)arg2 adUnitId:(id)arg3 timeoutMillis:(long long)arg4 adPreferences:(id)arg5 adProductType:(unsigned long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8 timeoutBlock:(CDUnknownBlockType)arg9;
- (void)updateSnapAdsConfig:(id)arg1;
- (void)updateWindowFocus:(_Bool)arg1;
- (void)updateDeviceAudibility;
- (id)initWithEventBus:(id)arg1;

@end

