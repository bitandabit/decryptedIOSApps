//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLocationObserver-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SCMapBeaconController : NSObject <SCLocationObserver>
{
    NSArray *_beaconRegions;
    NSDictionary *_nearbyBeaconsMap;
}

@property(copy) NSDictionary *nearbyBeaconsMap; // @synthesize nearbyBeaconsMap=_nearbyBeaconsMap;
- (void).cxx_destruct;
- (void)onLocationMonitoredBeaconRegionsUpdated;
- (id)locationObserverWantsToMonitorBeaconRegions;
- (id)locationObserverIdentifier;
- (double)locationObserverDesiredAccuracy;
- (id)locationObserverDispatchQueue;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (id)nearbyBeaconIds;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

