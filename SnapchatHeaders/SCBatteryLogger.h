//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCNetworkActivityListener-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCBatteryHistory, SCBatteryLoggerTimerItem;
@protocol OS_dispatch_queue, OS_dispatch_source, SCPerforming;

@interface SCBatteryLogger : NSObject <SCNetworkActivityListener>
{
    NSMutableDictionary *_viewTimers;
    NSDictionary *_networkTimers;
    SCBatteryLoggerTimerItem *_cameraOnTimer;
    NSMutableDictionary *_pageViewSessionTimers;
    NSMutableDictionary *_allTimers;
    NSObject<OS_dispatch_source> *_batteryLevelTimer;
    NSObject<OS_dispatch_queue> *_batteryLoggerQueue;
    _Bool _inBackground;
    _Bool _viewChangedDuringBatteryDrop;
    _Bool _isLoggingTrueDrop;
    float _batteryLevel;
    id <SCPerforming> _queuePerformer;
    long long _batteryState;
    NSMutableArray *_performanceEvents;
    NSMutableArray *_blizzardEvents;
    NSMutableDictionary *_levelEventTrackers;
    SCBatteryHistory *_batteryHistory;
    SCBatteryLoggerTimerItem *_currentViewTimer;
}

+ (id)shared;
@property(nonatomic) _Bool isLoggingTrueDrop; // @synthesize isLoggingTrueDrop=_isLoggingTrueDrop;
@property(nonatomic) _Bool viewChangedDuringBatteryDrop; // @synthesize viewChangedDuringBatteryDrop=_viewChangedDuringBatteryDrop;
@property(retain, nonatomic) SCBatteryLoggerTimerItem *currentViewTimer; // @synthesize currentViewTimer=_currentViewTimer;
@property(retain, nonatomic) SCBatteryHistory *batteryHistory; // @synthesize batteryHistory=_batteryHistory;
@property(retain, nonatomic) NSMutableDictionary *levelEventTrackers; // @synthesize levelEventTrackers=_levelEventTrackers;
@property(retain, nonatomic) NSMutableArray *blizzardEvents; // @synthesize blizzardEvents=_blizzardEvents;
@property(retain, nonatomic) NSMutableArray *performanceEvents; // @synthesize performanceEvents=_performanceEvents;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) id <SCPerforming> queuePerformer; // @synthesize queuePerformer=_queuePerformer;
- (void).cxx_destruct;
- (void)setCpuUsageListener:(CDUnknownBlockType)arg1;
- (void)didReceiveBytes:(unsigned long long)arg1;
- (void)didSendBytes:(unsigned long long)arg1;
- (void)endTrackingViewItem:(id)arg1 timeStamp:(double)arg2;
- (void)startTrackingViewItem:(id)arg1 timeStamp:(double)arg2;
- (id)getViewItemFromPageViewName:(id)arg1;
- (void)logManagedCapturerDidStopRunning;
- (void)logManagedCapturerDidStartRunning;
- (void)networkConnectivityChanged:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (id)sessionNameFromPageName:(id)arg1;
- (id)formatBatteryLevel:(float)arg1;
- (void)pause;
- (void)resume;
- (id)levelsForTracker:(id)arg1;
- (id)baseParametersWithBatteryStartLevel:(float)arg1 batteryChanged:(float)arg2 levels:(id)arg3;
- (id)buildLoggingParamsWithStartBatteryLevel:(float)arg1 endBatteryLevel:(float)arg2 timestamp:(double)arg3;
- (void)batteryLevelChanged;
- (id)_batteryStateString;
- (void)logBatteryLevelAndState;
- (void)logBatteryLevelAndUpdateAppIsBackgrounded:(_Bool)arg1;
- (void)batteryStateChanged;
- (id)_createBatteryLevelObservingTimer;
- (void)logPageViewWithName:(id)arg1 withPageViewParameters:(id)arg2;
- (void)addBlizzardEvent:(id)arg1 props:(id)arg2;
- (void)addPerformanceEvent:(id)arg1;
- (void)addLevelEventWithName:(id)arg1 withLevel:(unsigned long long)arg2;
- (void)pageViewSessionDidEndWithName:(id)arg1 withPreviousSessionName:(id)arg2 withPageViewStartTime:(double)arg3 withPageViewEndTime:(double)arg4;
- (void)pageViewSessionDidStartWithName:(id)arg1 withPageViewStartTime:(double)arg2;
- (void)viewDidDisappearWithPageName:(id)arg1;
- (void)viewDidAppearWithPageName:(id)arg1;
- (void)startLoggingSessionIfNeeded;
- (_Bool)shouldLogThisSession;
- (id)createTimerItemWithName:(id)arg1;
- (void)dealloc;
- (void)_tearDownNetworkAndStateObservations;
- (void)_setUpNetworkAndStateObservations;
- (void)_tearDownBatteryObservations;
- (void)_setUpBatteryObservations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

