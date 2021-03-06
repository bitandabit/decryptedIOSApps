//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCPreloadControllerProtocol-Protocol.h"
#import "SCPreloadInfoProvider-Protocol.h"

@class NSString, SCPreloadListenerAnnouncer;
@protocol SCObserving, SCPerforming;

@interface SCPreloadController : NSObject <SCPreloadControllerProtocol, SCPreloadInfoProvider>
{
    SCPreloadListenerAnnouncer *_announcer;
    long long _reachability;
    double _preloadModeCachedTime;
    CDUnknownBlockType _studySettingsProvider;
    CDUnknownBlockType _apiClientProvider;
    id <SCObserving> _travelModeObserveContext;
    _Bool _travelModeUserEnabled;
    long long _preloadMode;
    long long _bandwidthClass;
    id <SCPerforming> _queuePerformer;
}

+ (id)travelModeEnabledKey;
+ (id)sharedInstance;
@property(retain, nonatomic) id <SCPerforming> queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property _Bool travelModeUserEnabled; // @synthesize travelModeUserEnabled=_travelModeUserEnabled;
@property long long bandwidthClass; // @synthesize bandwidthClass=_bandwidthClass;
- (void).cxx_destruct;
- (void)configureWithUserSession:(id)arg1;
@property long long preloadMode; // @synthesize preloadMode=_preloadMode;
- (_Bool)travelModeEnabled;
- (void)logPreloadMode;
- (_Bool)isUnderPoorBandwidth;
- (_Bool)shouldPrefetchExpensiveContent;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)isUnderWifi;
- (void)_updatePreloadMode;
- (void)_didLogout;
- (void)updatePreloadMode;
- (void)_bandwidthClassChanged:(id)arg1;
- (void)_networkConnectivityChanged:(id)arg1;
- (void)_appWillEnterForeground;
- (void)dealloc;
- (id)initWithIsTravelModeEnabled:(_Bool)arg1 reachability:(long long)arg2 queuePerformer:(id)arg3 studySettingsProvider:(CDUnknownBlockType)arg4 apiClientProvider:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

