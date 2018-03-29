//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFClock.h"

@class NSMutableArray, NSString;

@interface FNFRealClock : NSObject <FNFClock>
{
    struct OpaqueCMClock *_audioDeviceClock;
    struct OpaqueCMTimebase *_controlTimebase;
    NSMutableArray *_timeObservers;
    float _playRate;
}

- (void).cxx_destruct;
- (void)_updateNextFireTimeForObserver:(id)arg1;
- (void)syncWithLayer:(id)arg1;
- (void)removeAllTimeObserversInternal;
- (void)removeAllTimeObservers;
- (id)observers;
- (void)removeTimeObserverInternal:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)suspendTimeObserver:(id)arg1;
- (void)resumeTimeObserver:(id)arg1;
- (void)dealloc;
- (void)_dispatchSourceFiredForTimeObserver:(id)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (float)currentPlayRate;
- (void)setRate:(float)arg1;
- (void)set:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)resume;
- (_Bool)addTimeObserver:(id)arg1;
- (id)createTimeObserverWithInterval:(CDStruct_1b6d18a9)arg1 block:(CDUnknownBlockType)arg2 fireOnceAtExactTime:(_Bool)arg3 followMasterClock:(_Bool)arg4;
- (void)initTimebase;
- (_Bool)_initTimebase;
- (id)initWithShouldCreateTimebase:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

