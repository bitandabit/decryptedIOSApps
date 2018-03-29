//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SCSnapAdsEventBus : NSObject
{
    NSMutableDictionary *_eventListeners;
    NSMutableDictionary *_eventInterceptors;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *eventInterceptors; // @synthesize eventInterceptors=_eventInterceptors;
@property(retain, nonatomic) NSMutableDictionary *eventListeners; // @synthesize eventListeners=_eventListeners;
- (void).cxx_destruct;
- (void)onEvent:(id)arg1;
- (void)removeInterceptorForEvent:(Class)arg1 interceptorBlock:(CDUnknownBlockType)arg2;
- (void)addInterceptorForEvent:(Class)arg1 interceptorBlock:(CDUnknownBlockType)arg2;
- (void)removeListenerForEvent:(Class)arg1 listenerBlock:(CDUnknownBlockType)arg2;
- (void)addListenerForEvent:(Class)arg1 listenerBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

