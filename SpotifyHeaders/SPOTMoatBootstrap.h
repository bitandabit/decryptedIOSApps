//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPOTMoatObject.h"

@interface SPOTMoatBootstrap : SPOTMoatObject
{
}

+ (_Bool)injectDelegateWrapper:(id)arg1;
+ (_Bool)installUIWebViewBridge:(id)arg1 tracking:(id)arg2 forNativeAd:(_Bool)arg3;
+ (id)getWrappedDelegate:(id)arg1;
+ (id)getBKDelegate:(id)arg1 havingProtocol:(id)arg2;
+ (id)digForWebView:(id)arg1 webViewType:(Class)arg2;
+ (id)digForUIWebView:(id)arg1;
+ (_Bool)injectDelegateWrapper:(id)arg1 tracking:(id)arg2;
+ (void)pruneDelegates;
+ (void)initializeAppHooks;
+ (void)initialize;

@end

