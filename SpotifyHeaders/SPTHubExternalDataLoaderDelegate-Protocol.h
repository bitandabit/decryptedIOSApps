//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SPTHubExternalDataLoaderDelegate <NSObject>
- (void)hubExternalDataLoader:(id <SPTHubExternalDataLoader>)arg1 didFailLoadingWithError:(NSError *)arg2;
- (void)hubExternalDataLoader:(id <SPTHubExternalDataLoader>)arg1 didLoadContentSet:(id <SPTHubContentSet>)arg2;
@end
