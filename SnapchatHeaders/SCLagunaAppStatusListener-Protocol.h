//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLagunaAppStatusCoordinator, SCLagunaDevice;

@protocol SCLagunaAppStatusListener <NSObject>

@optional
- (void)statusCoordinatorNeedsToPair:(SCLagunaAppStatusCoordinator *)arg1;
- (void)statusCoordinatorPressedLearnMoreForBluetoothOverloadError:(SCLagunaAppStatusCoordinator *)arg1;
- (void)statusCoordinator:(SCLagunaAppStatusCoordinator *)arg1 needsToUpdateStateForDevice:(SCLagunaDevice *)arg2;
- (void)statusCoordinatorNumberOfDevicesUpdated:(SCLagunaAppStatusCoordinator *)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(SCLagunaAppStatusCoordinator *)arg1;
- (void)statusCoordinatorBluetoothTurnedOff:(SCLagunaAppStatusCoordinator *)arg1;
@end
