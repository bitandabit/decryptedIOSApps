//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPPlayableContentDataSource.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SPTMediaPlayerDataSource : NSObject <MPPlayableContentDataSource>
{
    id <MPPlayableContentDataSource> _playableContentDataSource;
    NSObject<OS_dispatch_queue> *_playableContentDataSourceWaitForAvailabilityQueue;
    NSMutableArray *_playableContentDataSourceAvailabilitySemaphores;
}

@property(retain, nonatomic) NSMutableArray *playableContentDataSourceAvailabilitySemaphores; // @synthesize playableContentDataSourceAvailabilitySemaphores=_playableContentDataSourceAvailabilitySemaphores;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playableContentDataSourceWaitForAvailabilityQueue; // @synthesize playableContentDataSourceWaitForAvailabilityQueue=_playableContentDataSourceWaitForAvailabilityQueue;
@property(nonatomic) __weak id <MPPlayableContentDataSource> playableContentDataSource; // @synthesize playableContentDataSource=_playableContentDataSource;
- (void).cxx_destruct;
- (id)contentItemAtIndexPath:(id)arg1;
- (long long)numberOfChildItemsAtIndexPath:(id)arg1;
- (_Bool)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1;
- (void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

