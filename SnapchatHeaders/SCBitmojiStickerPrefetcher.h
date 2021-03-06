//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCBitmojiPrefetcher-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSMutableArray, NSString, SCUserSession;
@protocol OS_dispatch_queue;

@interface SCBitmojiStickerPrefetcher : NSObject <SCUserSessionScoped, SCBitmojiPrefetcher>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_prefetches;
    long long _displayedCategory;
    long long _categoryIteration;
    unsigned long long _numPrefetchesMade;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)madeRemotePrefetch:(int)arg1;
- (void)prefetchJobs:(long long)arg1 imageType:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)_prefetchJobsCyclic:(long long)arg1;
- (void)setStickerCategory:(long long)arg1;
- (void)prefetchEnd;
- (void)prefetchStart;
- (void)prefetchSetStickers:(id)arg1;
- (void)_reset;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

