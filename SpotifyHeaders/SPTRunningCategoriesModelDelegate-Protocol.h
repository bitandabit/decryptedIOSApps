//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SPTRunningCategoriesModelDelegate <NSObject>
- (void)runningCategoriesModel:(id <SPTRunningCategoriesModel>)arg1 didFailToLoadWithError:(NSError *)arg2;
- (void)runningCategoriesModelDidLoad:(id <SPTRunningCategoriesModel>)arg1;
- (void)runningCategoriesModelDidStartPlaying:(id <SPTRunningCategoriesModel>)arg1;
@end
