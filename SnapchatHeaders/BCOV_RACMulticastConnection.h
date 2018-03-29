//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BCOV_RACSerialDisposable, BCOV_RACSignal, BCOV_RACSubject;

@interface BCOV_RACMulticastConnection : NSObject
{
    BCOV_RACSubject *_signal;
    int _hasConnected;
    BCOV_RACSignal *_sourceSignal;
    BCOV_RACSerialDisposable *_serialDisposable;
}

@property(retain) BCOV_RACSerialDisposable *serialDisposable; // @synthesize serialDisposable=_serialDisposable;
@property(readonly, nonatomic) BCOV_RACSignal *sourceSignal; // @synthesize sourceSignal=_sourceSignal;
@property(readonly, nonatomic) BCOV_RACSignal *signal; // @synthesize signal=_signal;
- (void).cxx_destruct;
- (id)autoconnect;
- (id)connect;
- (id)initWithSourceSignal:(id)arg1 subject:(id)arg2;

@end

