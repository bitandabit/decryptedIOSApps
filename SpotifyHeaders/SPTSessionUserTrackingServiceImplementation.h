//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTService.h"

@class NSString, SPTAllocationContext, SPTCrashReporterUserTracker;

@interface SPTSessionUserTrackingServiceImplementation : NSObject <SPTService>
{
    id <SPTNetworkService> _networkService;
    id <SPTSessionService> _sessionService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTUserTrackingService> _userTrackingService;
    SPTCrashReporterUserTracker *_crashReporterUserTracker;
    id <SPTFeatureFlagSignal> _freeTierFeatureFlagSignal;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierFeatureFlagSignal; // @synthesize freeTierFeatureFlagSignal=_freeTierFeatureFlagSignal;
@property(retain, nonatomic) SPTCrashReporterUserTracker *crashReporterUserTracker; // @synthesize crashReporterUserTracker=_crashReporterUserTracker;
@property(nonatomic) __weak id <SPTUserTrackingService> userTrackingService; // @synthesize userTrackingService=_userTrackingService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

