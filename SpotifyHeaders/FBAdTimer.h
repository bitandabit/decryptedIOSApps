//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface FBAdTimer : NSObject
{
    _Bool _repeats;
    double _timeInterval;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_userInfo;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _block;
    CDUnknownBlockType _innerBlock;
    CDUnknownBlockType _condition;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeatsUntilCondition:(CDUnknownBlockType)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (void)initialize;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(copy, nonatomic) CDUnknownBlockType condition; // @synthesize condition=_condition;
@property(copy, nonatomic) CDUnknownBlockType innerBlock; // @synthesize innerBlock=_innerBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;
- (void)fire;
- (void)dealloc;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
- (id)scheduledTimerWithTimeInterval:(double)arg1 repeatsUntilCondition:(CDUnknownBlockType)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

