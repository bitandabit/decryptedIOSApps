//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@protocol SPTSyncManager <NSObject>
@property(readonly, nonatomic) unsigned long long totalTracks;
@property(readonly, nonatomic) unsigned long long copiedTracks;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic, getter=isSyncing) _Bool syncing;
- (void)removeObserver:(id <SPTSyncManagerObserver>)arg1;
- (void)addObserver:(id <SPTSyncManagerObserver>)arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
@end

