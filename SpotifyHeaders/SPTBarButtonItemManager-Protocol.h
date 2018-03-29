//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController<SPTPageController>;

@protocol SPTBarButtonItemManager <NSObject>
- (void)removeObserver:(id <SPTBarButtonItemManagerObserver>)arg1;
- (void)addObserver:(id <SPTBarButtonItemManagerObserver>)arg1;
- (void)barButtonItemsForPageController:(UIViewController<SPTPageController> *)arg1 continuation:(void (^)(NSArray *))arg2;
- (void)unregisterBarButtonItemProvider:(NSString *)arg1;
- (void)registerBarButtonItemProvider:(NSArray * (^)(UIViewController<SPTPageController> *, NSString *, NSURL *))arg1 identifier:(NSString *)arg2;
@end
