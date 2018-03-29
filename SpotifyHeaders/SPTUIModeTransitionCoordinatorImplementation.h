//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTUIModeTransitionCoordinator.h"

@class NSDate, NSMutableSet, NSString, NSTimer;

@interface SPTUIModeTransitionCoordinatorImplementation : NSObject <SPTUIModeTransitionCoordinator>
{
    _Bool _transitionInProgress;
    _Bool _transitionUIVisible;
    id <SPTUIModeTransitionUIHandler> _transitionUIHandler;
    NSMutableSet *_registrations;
    NSDate *_mostDistantTimeout;
    NSTimer *_timeoutTimer;
}

@property(nonatomic) _Bool transitionUIVisible; // @synthesize transitionUIVisible=_transitionUIVisible;
@property(nonatomic) _Bool transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSDate *mostDistantTimeout; // @synthesize mostDistantTimeout=_mostDistantTimeout;
@property(readonly, nonatomic) NSMutableSet *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) id <SPTUIModeTransitionUIHandler> transitionUIHandler; // @synthesize transitionUIHandler=_transitionUIHandler;
- (void).cxx_destruct;
- (void)invalidateRegistration:(id)arg1;
- (void)invalidateTimer;
- (void)resetTimerWithMostDistantDate:(id)arg1;
- (void)transitionTimedOut;
- (void)hideTransitionUIForResult:(long long)arg1;
- (void)showTransitionUI;
- (void)completeWithResult:(long long)arg1 error:(id)arg2;
- (void)transitionFailedWithError:(id)arg1;
- (void)transitionCompleted;
- (void)transitionBegan;
- (id)expectUIModeTransitionWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

