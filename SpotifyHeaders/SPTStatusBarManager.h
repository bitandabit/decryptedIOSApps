//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter, SPTObserverManager, UIApplication;

@interface SPTStatusBarManager : NSObject
{
    UIApplication *_application;
    NSNotificationCenter *_notificationCenter;
    SPTObserverManager *_observerManager;
    long long _hideRequestsCount;
}

+ (void)changeStatusBarBackgroundForViewController:(id)arg1 color:(id)arg2;
+ (_Bool)removeStatusBarBackgroundForViewController:(id)arg1;
+ (_Bool)addStatusBarBackgroundForViewController:(id)arg1 color:(id)arg2;
+ (double)adjustedStatusBarHeight;
+ (double)statusBarHeight;
+ (id)defaultManager;
@property(nonatomic) long long hideRequestsCount; // @synthesize hideRequestsCount=_hideRequestsCount;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (void)statusBarFrameChangedWithNotification:(id)arg1;
- (void)tokenInvalidated;
- (id)hideStatusBarWithAnimation:(long long)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 notificationCenter:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden;

@end

