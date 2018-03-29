//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCChunkOperaParser : NSObject
{
}

+ (void)copyCommonSponsoredSlugProperties:(id)arg1 to:(id)arg2;
+ (id)_cameraItemForURI:(id)arg1;
+ (_Bool)_useSwipeUpToLens:(id)arg1 userSession:(id)arg2;
+ (id)_deepLinkAttachmentPagePropertiesItem:(id)arg1 pageProperties:(id)arg2 adHeadline:(id)arg3 userSession:(id)arg4 isV2:(_Bool)arg5 isAd:(_Bool)arg6;
+ (id)_subscribePagePropertiesForPrimaryColor:(id)arg1 secondaryColor:(id)arg2 item:(id)arg3 pageProperties:(id)arg4 isAd:(_Bool)arg5;
+ (id)_appInstallPagePropertiesForSection:(id)arg1 item:(id)arg2 pageProperties:(id)arg3 isAd:(_Bool)arg4;
+ (id)_cameraPagePropertiesForItem:(id)arg1 pageProperties:(id)arg2 adId:(id)arg3 adRequestClientId:(id)arg4;
+ (id)_remoteVideoPagePropertiesForSection:(id)arg1 item:(id)arg2 pageProperties:(id)arg3 isAd:(_Bool)arg4;
+ (unsigned long long)parseBridgeCapabilities:(id)arg1;
+ (void)_setCardPropertiesForCamera:(id)arg1 pageProperties:(id)arg2;
+ (void)_setCardPropertiesForWebview:(id)arg1 adBrandName:(id)arg2 remoteWebpageItem:(id)arg3 userSession:(id)arg4;
+ (void)_setWebviewStandardizationProperties:(id)arg1;
+ (id)_remoteWebPagePropertiesForItem:(id)arg1 section:(id)arg2 pageProperties:(id)arg3 isAd:(_Bool)arg4 adKey:(id)arg5 adId:(id)arg6 webviewMacros:(id)arg7 primaryColor:(id)arg8 secondaryColor:(id)arg9 subscriptionBarColor:(id)arg10 subscriptionIconKey:(id)arg11 subscriptionChecker:(id)arg12 userSession:(id)arg13 blockWebviewPreloadingByAdServer:(_Bool)arg14 adBrandName:(id)arg15;
+ (id)_localWebPagePropertiesForItem:(id)arg1 pageProperties:(id)arg2 isAd:(_Bool)arg3 primaryColor:(id)arg4 secondaryColor:(id)arg5 subscriptionBarColor:(id)arg6 subscriptionIconKey:(id)arg7 subscriptionChecker:(id)arg8;
+ (id)_notificationOptInPagePropertiesForItem:(id)arg1 pageProperties:(id)arg2;
+ (id)_commercePagePropertiesForItem:(id)arg1 pageProperties:(id)arg2;
+ (id)_topSnapPagePropertiesForSection:(id)arg1 topSnapItem:(id)arg2 overlayItem:(id)arg3 longformItem:(id)arg4 pageProperties:(id)arg5 isAd:(_Bool)arg6 adBrandName:(id)arg7 adHeadline:(id)arg8 sponsoredSlug:(id)arg9 isAdContentLooping:(_Bool)arg10 userSession:(id)arg11 shouldDisplayAdSlug:(_Bool)arg12 streamingURLProvider:(id)arg13 shouldDisplayAdInfoButtonInActionMenu:(_Bool)arg14 isUnskippableAd:(_Bool)arg15;
+ (id)pagesPropertiesForChunkSection:(id)arg1 pageProperties:(id)arg2 sponsoredSlug:(id)arg3 isAdContentLooping:(_Bool)arg4 primaryColor:(id)arg5 secondaryColor:(id)arg6 subscriptionBarColor:(id)arg7 subscriptionIconKey:(id)arg8 topSnapAccessibilityLabel:(id)arg9 longformAccessibilityLabel:(id)arg10 longPressEnabled:(_Bool)arg11 isAd:(_Bool)arg12 adKey:(id)arg13 adId:(id)arg14 adRequestClientId:(id)arg15 adBrandName:(id)arg16 adHeadline:(id)arg17 webviewMacros:(id)arg18 topSnapPageBaseProperties:(id)arg19 subscriptionChecker:(id)arg20 userSession:(id)arg21 blockWebviewPreloadingByAdServer:(_Bool)arg22 shouldDisplayAdSlug:(_Bool)arg23 streamingURLProvider:(id)arg24 shouldDisplayAdInfoButtonInActionMenu:(_Bool)arg25 isUnskippableAd:(_Bool)arg26;

@end

