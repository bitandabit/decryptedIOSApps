//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BCOV_RACSubscriber-Protocol.h"

@class BCOV_RACCompoundDisposable, BCOV_RACSignal, NSString;
@protocol BCOV_RACSubscriber;

@interface BCOV_RACPassthroughSubscriber : NSObject <BCOV_RACSubscriber>
{
    id <BCOV_RACSubscriber> _innerSubscriber;
    BCOV_RACSignal *_signal;
    BCOV_RACCompoundDisposable *_disposable;
}

@property(readonly, nonatomic) BCOV_RACCompoundDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, nonatomic) BCOV_RACSignal *signal; // @synthesize signal=_signal;
@property(readonly, nonatomic) id <BCOV_RACSubscriber> innerSubscriber; // @synthesize innerSubscriber=_innerSubscriber;
- (void).cxx_destruct;
- (void)didSubscribeWithDisposable:(id)arg1;
- (void)sendCompleted;
- (void)sendError:(id)arg1;
- (void)sendNext:(id)arg1;
- (id)initWithSubscriber:(id)arg1 signal:(id)arg2 disposable:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

