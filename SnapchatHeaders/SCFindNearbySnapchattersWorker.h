//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLocationControllerDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class CLLocation, NSConditionLock, NSString, SCLocationController;
@protocol FindNearbySnapchattersWorkerDelegate;

@interface SCFindNearbySnapchattersWorker : NSObject <SCTimeProfilable, SCLocationControllerDelegate>
{
    _Bool _quitEvent;
    _Bool _checkpointReached;
    int _consecutiveFailures;
    id <FindNearbySnapchattersWorkerDelegate> _delegate;
    SCLocationController *_locationController;
    CLLocation *_currentLocation;
    long long _startTime;
    NSConditionLock *_pollingLock;
    double _bestAccuracy;
    long long _timeToBestAccuracy;
}

+ (int)context;
+ (id)stringForInterruptReason:(long long)arg1;
@property(nonatomic) long long timeToBestAccuracy; // @synthesize timeToBestAccuracy=_timeToBestAccuracy;
@property(nonatomic) double bestAccuracy; // @synthesize bestAccuracy=_bestAccuracy;
@property(retain, nonatomic) NSConditionLock *pollingLock; // @synthesize pollingLock=_pollingLock;
@property(nonatomic) int consecutiveFailures; // @synthesize consecutiveFailures=_consecutiveFailures;
@property(nonatomic) _Bool checkpointReached; // @synthesize checkpointReached=_checkpointReached;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool quitEvent; // @synthesize quitEvent=_quitEvent;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) SCLocationController *locationController; // @synthesize locationController=_locationController;
@property(nonatomic) __weak id <FindNearbySnapchattersWorkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestLocationPermissionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelPolling;
- (void)pollingWorker;
- (_Bool)hasValidLocation;
- (_Bool)isFinding;
- (void)stop:(long long)arg1;
- (void)start;
- (void)locationController:(id)arg1 didFailWithError:(id)arg2 context:(long long)arg3;
- (void)locationController:(id)arg1 didUpdateLocation:(id)arg2 context:(long long)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
