//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNavigationManager, UIViewController;

@protocol SPTNavigationManagerDelegate <NSObject>
- (void)navigationManager:(SPTNavigationManager *)arg1 didNavigateFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;

@optional
- (void)navigationManager:(SPTNavigationManager *)arg1 willNavigateFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
@end
