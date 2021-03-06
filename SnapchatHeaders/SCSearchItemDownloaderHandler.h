//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchItemDownloaderHandling-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, SCSearchItemDownloading;

@interface SCSearchItemDownloaderHandler : NSObject <SCSearchItemDownloaderHandling>
{
    id <SCSearchItemDownloading> _downloader;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _failure;
    NSString *_requestKey;
}

@property(copy, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(readonly, copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)dispose;
- (void)cancel;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2 downloader:(id)arg3 callbackQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

