//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCStoryAdTrackInfo-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SCSnapAdsAdInteractionTimer;

@interface SCSnapAdsAdInteraction : NSObject <SCStoryAdTrackInfo>
{
    NSMutableArray *_aggregatedSnapInteractionList;
    NSMutableArray *_viewingStatusList;
    double _responseReceiveTimestampInMillis;
    long long _totalTopSnapsMediaDurationMillis;
    SCSnapAdsAdInteractionTimer *_totalViewDurationTimer;
    _Bool _adFlagged;
    _Bool _wasShown;
    long long _adType;
    NSString *_adKey;
    unsigned long long _adProductType;
    long long _maxViewedSnapIndex;
    long long _maxViewedSnapIndexSinceReset;
    NSDictionary *_viewContext;
    NSString *_adFlaggedReason;
    NSString *_adFlaggedNote;
}

@property(nonatomic) _Bool wasShown; // @synthesize wasShown=_wasShown;
@property(readonly, copy, nonatomic) NSString *adFlaggedNote; // @synthesize adFlaggedNote=_adFlaggedNote;
@property(readonly, copy, nonatomic) NSString *adFlaggedReason; // @synthesize adFlaggedReason=_adFlaggedReason;
@property(readonly, nonatomic) _Bool adFlagged; // @synthesize adFlagged=_adFlagged;
@property(readonly, copy, nonatomic) NSDictionary *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) long long maxViewedSnapIndexSinceReset; // @synthesize maxViewedSnapIndexSinceReset=_maxViewedSnapIndexSinceReset;
@property(readonly, nonatomic) long long maxViewedSnapIndex; // @synthesize maxViewedSnapIndex=_maxViewedSnapIndex;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
@property(readonly, copy, nonatomic) NSString *adKey; // @synthesize adKey=_adKey;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
- (void).cxx_destruct;
- (void)addAdSnapViewingStatus:(id)arg1;
- (void)_setViewedSnapIndex:(long long)arg1;
- (void)_setDefaultValue;
- (void)setChannelIsSubscribedEndState:(_Bool)arg1 index:(long long)arg2;
- (void)setDeepLinkFromCard:(_Bool)arg1 deepLinkFallBackToAppStore:(_Bool)arg2 deepLinkFallBackToWebview:(_Bool)arg3 index:(long long)arg4;
- (void)setPageHeight:(long long)arg1 pageHeightSeen:(long long)arg2 pageCurrentOffset:(long long)arg3 index:(long long)arg4;
- (void)setLoadedOnEntry:(_Bool)arg1 loadedOnExit:(_Bool)arg2 visiblePageLoadTimeSeconds:(double)arg3 index:(long long)arg4;
- (void)setLongformMediaDurationMillis:(long long)arg1 longformMediaDurationMillis:(long long)arg2 index:(long long)arg3;
- (void)setTopSnapMediaDurationMillis:(long long)arg1 topSnapReportedViewDurationMillis:(long long)arg2 index:(long long)arg3;
- (void)resetForSwipeBackTracking;
- (void)adFlagged:(_Bool)arg1 adFlaggedReason:(id)arg2 adFlaggedNote:(id)arg3;
- (void)adLongPressedAtIndex:(long long)arg1 onTopSnap:(_Bool)arg2;
- (void)swipeUpToCardAtIndex:(long long)arg1;
- (void)swipedFromTopSnap:(_Bool)arg1 index:(long long)arg2 viewContext:(id)arg3 audibleOn:(_Bool)arg4;
- (void)adSnapHideAtIndex:(long long)arg1 onTopSnap:(_Bool)arg2 skipEvent:(id)arg3;
- (void)adHideAtIndex:(long long)arg1 viewContext:(id)arg2 skipEvent:(id)arg3;
- (void)adShowAtIndex:(long long)arg1 onTopSnap:(_Bool)arg2 audibleOn:(_Bool)arg3;
- (id)currentViewingInteractionForSnapIndex:(long long)arg1;
- (id)adViewingTrackInfoAtIndex:(long long)arg1;
- (id)adSnapInteractionAtIndex:(long long)arg1;
- (void)addAdSnapInteraction:(id)arg1;
@property(readonly, copy, nonatomic) NSString *exitEvent;
@property(readonly, nonatomic) double timeViewedInMillis;
@property(readonly, nonatomic) _Bool isAudioOn;
@property(readonly, nonatomic) unsigned long long uniqueSwipeUps;
@property(readonly, nonatomic) unsigned long long totalSwipeUps;
@property(readonly, nonatomic) long long totalTopSnapsMediaDurationMillis;
@property(readonly, nonatomic) long long snapCount;
@property(readonly, nonatomic) long long viewingStatusCount;
- (id)initWithAdType:(long long)arg1 adKey:(id)arg2 responseReceiveTimestampInMillis:(double)arg3 adProductType:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

