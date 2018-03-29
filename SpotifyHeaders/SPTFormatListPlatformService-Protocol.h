//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIViewController<SPTPageController>;

@protocol SPTFormatListPlatformService <NSObject>
- (UIViewController<SPTPageController> *)provideFormatListViewControllerForURL:(NSURL *)arg1 configurator:(id <SPTFormatListTableViewConfigurator>)arg2 context:(id <SPTPageCreationContext>)arg3;
- (id <SPTFormatListPlatformManager>)providePlatformManagerForFormatListURL:(NSURL *)arg1;
- (id <SPTFormatListPlatformFeedbackActionsFactory>)provideFeedbackActionsFactoryForViewURL:(NSURL *)arg1;
- (id <SPTFormatListPlatformResolver>)providePlatformResolver;
- (id <SPTFormatListPlatformRemoteControlPolicyManager>)provideRemoteControlPolicyManager;
- (id <SPTFormatListPlatformRegistry>)providePlatformRegistry;
- (id <SPTFormatListPlatformRemoteControlPolicyFactory>)provideRemoteControlPolicyFactory;
- (id <SPTFormatListPlatformTestManager>)provideTestManager;
@end

