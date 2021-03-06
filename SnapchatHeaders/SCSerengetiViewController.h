//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCSerengetiDebuggerDelegate-Protocol.h"
#import "SCSerengetiURLResolverDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, SCSerengetiLoadingView, SCSerengetiResolvedService, SCSerengetiURLResolver, SCUserSession, SGTIStylizationIOS, UIButton, UIView, UIViewController, WKWebView;
@protocol SCSerengetiContextProviding, SCSerengetiDebugger, SCSerengetiRegistryProviding, SCSerengetiViewControllerDelegate;

@interface SCSerengetiViewController : SCLeftSwipableViewController <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate, SCSerengetiDebuggerDelegate, SCSerengetiURLResolverDelegate>
{
    UIView *_containerView;
    WKWebView *_webView;
    SCSerengetiLoadingView *_loadingView;
    UIButton *_backButton;
    NSURL *_initialPageUrl;
    id <SCSerengetiRegistryProviding> _registryProvider;
    _Bool _finishedInitialLoad;
    unsigned long long _statusBarStyle;
    SCUserSession *_userSession;
    SCSerengetiResolvedService *_resolvedService;
    SGTIStylizationIOS *_stylization;
    UIViewController<SCSerengetiDebugger> *_debuggerViewController;
    SCSerengetiURLResolver *_urlResolver;
    NSMutableDictionary *_hookByFunctionName;
    _Bool _showDebugger;
    _Bool _disableContentRules;
    id <SCSerengetiContextProviding> _contextProvider;
    id <SCSerengetiViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool disableContentRules; // @synthesize disableContentRules=_disableContentRules;
@property(nonatomic) _Bool showDebugger; // @synthesize showDebugger=_showDebugger;
@property(retain, nonatomic) id <SCSerengetiViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCSerengetiContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
- (void).cxx_destruct;
- (void)serengeti_performHook:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)serengeti_log:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)serengeti_makeRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)serengeti_setStatusBarStyle:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)serengeti_alert:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)serengeti_openSerengetiLink:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)serengeti_openUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_doOpenURL:(id)arg1 additionalInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)serengetiDebuggerShouldReloadCurrentPage:(id)arg1;
- (void)serengetiDebugger:(id)arg1 shouldInjectJavascript:(id)arg2;
- (void)serengetiDebugger:(id)arg1 shouldLoadDeepLinkURL:(id)arg2;
- (void)serengetiDebugger:(id)arg1 shouldLoadRemoteURL:(id)arg2;
- (void)serengetiURLResolver:(id)arg1 didResolveService:(id)arg2;
- (void)serengetiURLResolver:(id)arg1 didCompleteWithError:(id)arg2;
- (void)serengetiURLResolver:(id)arg1 didFailToReloadRegistryWithError:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)defaultProjectName;
- (void)keyboardWillChange:(id)arg1;
- (void)_doPerformRequestWithEndpoint:(id)arg1 orURL:(id)arg2 parameters:(id)arg3 headers:(id)arg4 postData:(id)arg5 method:(long long)arg6 authenticated:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (void)_requestAuthTokenIfNeededFromURLInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestSnapTokenWithScope:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_parseRequestBodyDescriptor:(id)arg1 postData:(id *)arg2 parameters:(id *)arg3 error:(id *)arg4;
- (void)registerHook:(id)arg1;
- (void)_updateDebuggerVisibility;
- (void)_closeViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_backButtonDidTap;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateStatusBarAnimated:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)_didLoadContentRuleList:(id)arg1 error:(id)arg2;
- (void)_loadWithResolvedService:(id)arg1;
- (_Bool)_applyStatusBarStyle:(id)arg1 error:(id *)arg2;
- (void)_applyStylization:(id)arg1;
- (void)_startLoading;
- (void)_makeWebviewAndLoadPageWithContentRuleList:(id)arg1;
- (void)_destroyWebView;
- (void)viewDidLoad;
- (id)_generateJSWithError:(id *)arg1;
- (void)_appendMarginPropertiesToContext:(id)arg1;
- (void)_updateMarginsInContext;
- (void)_updateContext:(id)arg1;
- (void)_completeLoadingWithError:(id)arg1;
- (id)initWithURL:(id)arg1 stylization:(id)arg2 registryProvider:(id)arg3 userSession:(id)arg4;
- (id)initWithLink:(id)arg1 registryProvider:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

