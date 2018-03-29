//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccessoryStateManager.h"

@class AVAudioSessionRouteDescription, NSHashTable, NSSet, NSString, NSTimer;

@interface SPTAccessoryStateManagerImplementation : NSObject <SPTAccessoryStateManager>
{
    _Bool _observing;
    _Bool _audioSessionInterrupted;
    id <SPTAccessoryCategorizer> _categorizer;
    id <SPTCrashReporter> _crashReporter;
    NSSet *_accessories;
    NSHashTable *_observers;
    NSSet *_pendingAccessories;
    AVAudioSessionRouteDescription *_currentRoute;
    NSTimer *_accessoryCollectionTimer;
}

@property(retain, nonatomic) NSTimer *accessoryCollectionTimer; // @synthesize accessoryCollectionTimer=_accessoryCollectionTimer;
@property(retain, nonatomic) AVAudioSessionRouteDescription *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(nonatomic, getter=isAudioSessionInterrupted) _Bool audioSessionInterrupted; // @synthesize audioSessionInterrupted=_audioSessionInterrupted;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSSet *pendingAccessories; // @synthesize pendingAccessories=_pendingAccessories;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) id <SPTAccessoryCategorizer> categorizer; // @synthesize categorizer=_categorizer;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateWithAudioRoute:(id)arg1;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)audioRouteChanged:(id)arg1;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)accessoryDidConnect:(id)arg1;
- (_Bool)audioOutputPortIsEligibleAsAccessory:(id)arg1;
- (void)removeAccessoriesNotMatchingIdentifiers:(id)arg1;
- (void)removeAccessoryForExternalAccessory:(id)arg1;
- (void)accessoryCollectionTimerFired:(id)arg1;
- (void)collectAccessoryChangeAndCategorizeAudioPorts:(id)arg1;
- (void)removePendingAccessory:(id)arg1;
- (void)addExternalAccessoryAsPending:(id)arg1;
- (id)findRecentPendingAccessory;
- (void)attemptCategorizingAndAddingAccessory:(id)arg1 audioPort:(id)arg2;
- (void)notifyExternalAccessoryDisconnected:(id)arg1;
- (void)notifyAccessoryDisconnected:(id)arg1;
- (void)notifyExternalAccessoryConnected:(id)arg1;
- (void)notifyAccessoryConnected:(id)arg1;
- (void)notifyAudioRouteChange:(id)arg1;
- (void)notifyCrashReporterForAccessory:(id)arg1 forState:(id)arg2;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)currentAccessories;
- (void)endObservingAccessories;
- (void)manuallyUpdateCurrentState;
- (void)beginObservingAccessories;
- (id)initWithCrashReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
