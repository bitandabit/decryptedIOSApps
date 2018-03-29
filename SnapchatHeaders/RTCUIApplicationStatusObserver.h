//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol NSObject, OS_dispatch_semaphore;

@interface RTCUIApplicationStatusObserver : NSObject
{
    _Bool _initialized;
    CDUnknownBlockType _initializeBlock;
    NSObject<OS_dispatch_semaphore> *_waitForInitializeSemaphore;
    long long _state;
    id <NSObject> _activeObserver;
    id <NSObject> _backgroundObserver;
}

+ (void)prepareForUse;
+ (id)sharedInstance;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void).cxx_destruct;
- (_Bool)isApplicationActive;
- (void)dealloc;
- (id)init;

@end

