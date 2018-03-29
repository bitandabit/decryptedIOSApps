//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGtqUnlockablesDataSourceListener-Protocol.h"
#import "SCLocationObserver-Protocol.h"
#import "SCUnlockablesLoader-Protocol.h"

@class CLLocation, NSString, SCGtqDataSource, SCQueuePerformer, SCUnlockableSensitivityController, SCUserSession;

@interface SCGtqUnlockablesController : NSObject <SCLocationObserver, SCUnlockablesLoader, SCGtqUnlockablesDataSourceListener>
{
    SCUserSession *_userSession;
    SCGtqDataSource *_dataSource;
    SCQueuePerformer *_performer;
    SCUnlockableSensitivityController *_sensitivityController;
    double _cancellation;
    double _lastIPLocationRequestTime;
    CLLocation *_lastLocation;
}

- (void).cxx_destruct;
- (void)_fetchUnlockablesAtLocation:(id)arg1;
- (_Bool)_isControllerEnabled;
- (void)didFetchUnlockables:(id)arg1 withContext:(id)arg2 forRequest:(id)arg3;
- (id)locationObserverIdentifier;
- (void)onLocationUpdate:(id)arg1;
- (id)locationObserverDispatchQueue;
- (double)locationObserverDesiredAccuracy;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (void)_fetchIPLocationRequestIfNecessary;
- (void)triggerWithLocationSubscriptionDuration:(double)arg1;
- (void)_subscribeForDuration:(double)arg1;
- (void)onSnapPreviewVisible;
- (void)onLensesActivated;
- (void)onCameraVisible;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

