//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSearchNavigationCoordinator, SCSearchNavigationInfo, SCSearchViewController;

@protocol SCSearchNavigationCoordinatorDelegate <NSObject>
- (void)searchNavigationCoordinator:(SCSearchNavigationCoordinator *)arg1 didNavigateFromNavigationInfo:(SCSearchNavigationInfo *)arg2 toNavigationInfo:(SCSearchNavigationInfo *)arg3;
- (SCSearchViewController *)searchViewControllerForSearchNavigationCoordinator:(SCSearchNavigationCoordinator *)arg1;
@end
