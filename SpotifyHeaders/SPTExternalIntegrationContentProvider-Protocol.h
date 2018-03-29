//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol SPTExternalIntegrationContentProvider <NSObject>
- (void)resolveChildContentOfParentWithURI:(NSURL *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 withCompletionHandler:(void (^)(NSArray *, NSError *))arg3;
- (long long)priorityForChildContentOfParentWithURI:(NSURL *)arg1;
- (void)resolveContentWithURI:(NSURL *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 withCompletionHandler:(void (^)(id <SPTExternalIntegrationContent>, NSError *))arg3;
- (long long)priorityForContentWithURI:(NSURL *)arg1;
@end
