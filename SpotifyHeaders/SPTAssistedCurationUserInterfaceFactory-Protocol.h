//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController<SPTSearch2ResultsViewControllerProtocol>, UIViewController<SPTSearch2RootViewControllerProtocol>;

@protocol SPTAssistedCurationUserInterfaceFactory <NSObject>
- (UIViewController<SPTSearch2ResultsViewControllerProtocol> *)createAssistedCurationSearchViewControllerForEntityType:(NSString *)arg1 query:(NSString *)arg2;
- (UIViewController<SPTSearch2RootViewControllerProtocol> *)createAssistedCurationSearchViewController;
@end
