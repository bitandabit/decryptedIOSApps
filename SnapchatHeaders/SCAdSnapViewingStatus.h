//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAdInteractionProtocol-Protocol.h"
#import "SCAdLongformInteractionProtocol-Protocol.h"
#import "SCAdSnapTrackInfo-Protocol.h"
#import "SCAdTopSnapInteractionProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCSnapAdsAdInteractionTimer;

@interface SCAdSnapViewingStatus : NSObject <SCAdInteractionProtocol, SCAdTopSnapInteractionProtocol, SCAdLongformInteractionProtocol, SCAdSnapTrackInfo>
{
    long long _snapIndex;
    long long _adType;
    NSString *_skipEvent;
    unsigned long long _swipeCount;
    _Bool _isAudioOn;
    long long _topSnapMediaDurationMillis;
    long long _topSnapMaxViewDurationMillis;
    long long _topSnapReportedMaxViewDurationMillis;
    long long _longformMediaDurationMillis;
    long long _longformReportedMaxViewDurationMillis;
    _Bool _loadedOnEntry;
    _Bool _loadedOnExit;
    double _visiblePageLoadTimeSeconds;
    long long _pageHeight;
    long long _pageHeightSeen;
    long long _pageCurrentOffset;
    _Bool _deepLinkFallBackToWebview;
    _Bool _deepLinkFromCard;
    _Bool _deepLinkFallBackToAppStore;
    _Bool _channelIsSubscribedEndState;
    SCSnapAdsAdInteractionTimer *_longformTimeSpentTimer;
    _Bool _audibleOnLastChange;
    NSMutableArray *_audioQuadrantStateForMaxViewDurationSession;
    _Bool _topSnapActive;
    double _responseReceiveTimeInMillis;
    double _adFirstRenderTimestamp;
    long long _deltaInMillis;
    double _currentTopSnapStartTimestamp;
    NSMutableArray *_audioQuadrantStateForCurrentSession;
}

@property(retain, nonatomic) NSMutableArray *audioQuadrantStateForCurrentSession; // @synthesize audioQuadrantStateForCurrentSession=_audioQuadrantStateForCurrentSession;
@property(nonatomic) double currentTopSnapStartTimestamp; // @synthesize currentTopSnapStartTimestamp=_currentTopSnapStartTimestamp;
- (void).cxx_destruct;
- (double)currentTimeInMillis;
- (long long)getTopSnapViewTimeMillis;
- (long long)getNextQuadrantIndexForTimestamp:(long long)arg1;
- (void)_stopTopSnapTimer;
- (void)_startTopSnapTimer:(_Bool)arg1;
- (void)_setDefaultValue;
- (void)setChannelIsSubscribedEndState:(_Bool)arg1;
- (void)setDeepLinkFromCard:(_Bool)arg1 deepLinkFallBackToAppStore:(_Bool)arg2 deepLinkFallBackToWebview:(_Bool)arg3;
- (void)setPageHeight:(long long)arg1 pageHeightSeen:(long long)arg2 pageCurrentOffset:(long long)arg3;
- (void)setLoadedOnEntry:(_Bool)arg1 loadedOnExit:(_Bool)arg2 visiblePageLoadTimeSeconds:(double)arg3;
- (void)setLongformMediaDurationMillis:(long long)arg1 longformMediaDurationMillis:(long long)arg2;
- (void)swipeUpToCard;
- (void)setTopSnapMediaDurationMillis:(long long)arg1 topSnapReportedViewDurationMillis:(long long)arg2;
- (void)resetForSwipeBackTracking;
- (void)adLongPressedOnTopSnap:(_Bool)arg1;
- (void)unobstructedOnTopSnap:(_Bool)arg1 audibleOn:(_Bool)arg2;
- (void)obstructedOnTopSnap:(_Bool)arg1 audibleOn:(_Bool)arg2;
- (void)onAudibilityChange:(_Bool)arg1;
- (void)swipedFromTopSnap:(_Bool)arg1 exitEvent:(id)arg2 audibleOn:(_Bool)arg3;
- (void)adSnapHideOnTopSnap:(_Bool)arg1 skipEvent:(id)arg2;
- (void)adHideWithSkipEvent:(id)arg1;
- (void)adShowOnTopSnap:(_Bool)arg1 audibleOn:(_Bool)arg2;
@property(readonly, nonatomic) _Bool channelIsSubscribedEndState;
@property(readonly, nonatomic) long long deepLinkFallBackToAppStoreCount;
@property(readonly, nonatomic) _Bool deepLinkFallBackToWebview;
@property(readonly, nonatomic) long long deepLinkFromCardCount;
@property(readonly, nonatomic) long long pageCurrentOffset;
@property(readonly, nonatomic) long long pageHeightSeen;
@property(readonly, nonatomic) long long pageHeight;
@property(readonly, nonatomic) double visiblePageLoadTimeSeconds;
@property(readonly, nonatomic) _Bool loadedOnExit;
@property(readonly, nonatomic) _Bool loadedOnEntry;
@property(readonly, nonatomic) long long longformReportedMaxViewDurationMillis;
@property(readonly, nonatomic) long long longformMediaDurationMillis;
@property(readonly, nonatomic) double longformMaxViewedDurationInMillis;
@property(readonly, nonatomic) long long topSnapReportedMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapTimeViewedMillis;
@property(readonly, nonatomic) long long topSnapMediaDurationMillis;
@property(readonly, nonatomic) NSArray *audioQuadrantStates;
@property(readonly, nonatomic) _Bool isAudioOn;
@property(readonly, nonatomic) unsigned long long swipeCount;
@property(readonly, copy, nonatomic) NSString *skipEvent;
@property(readonly, nonatomic) long long snapIndex;
@property(readonly, nonatomic) double adFirstRenderTimestamp;
@property(readonly, nonatomic) long long deltaInMillis;
- (id)initWithAdType:(long long)arg1 snapIndex:(long long)arg2 topSnapMediaDurationMillis:(long long)arg3 responseReceiveTimeInMillis:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

