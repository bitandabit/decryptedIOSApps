//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaWebViewDelegate-Protocol.h"
#import "SCOperaWebViewURLInterceptorDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, SCOperaRemoteWebJavascriptBridge, SCOperaWebView, SCOperaWebViewAVControlScript, SCOperaWebViewAudioController;
@protocol SCOperaSafeBrowsingChecker, SCOperaWebViewPKPassProvider, SCOperaWebViewURLInterceptor, SCOperaWebViewWrapperDelegate;

@interface SCOperaWebViewWrapper : NSObject <SCOperaWebViewDelegate, SCOperaWebViewURLInterceptorDelegate>
{
    id <SCOperaWebViewURLInterceptor> _urlInterceptor;
    id <SCOperaSafeBrowsingChecker> _safeBrowsingChecker;
    id <SCOperaWebViewPKPassProvider> _pkPassProvider;
    SCOperaRemoteWebJavascriptBridge *_jsBridge;
    NSMutableDictionary *_configDict;
    NSMutableDictionary *_safeBrowsingCache;
    SCOperaWebViewAVControlScript *_avControlScript;
    SCOperaWebViewAudioController *_audioController;
    NSURL *_safeBrowsingWarningURL;
    long long _safeBrowsingWarningURLType;
    NSMutableDictionary *_mutableNavigationAction;
    NSMutableDictionary *_mutableNavigationHistory;
    NSMutableDictionary *_mutablePendingActionHandler;
    _Bool _didLoadStart;
    _Bool _allowSmartDeeplink;
    float _progress;
    _Bool _shouldNotifyPageOnShowAfterDidFullyLoad;
    _Bool _allowOnShowOnHideKey;
    _Bool _allowHidingUrlBarOnFirstLoad;
    _Bool _disableTouchCallout;
    NSString *_urlBarLoadingText;
    _Bool _allowAutoDetectAutofill;
    _Bool _allowOnEditAutofill;
    long long _onEditAutofillType;
    _Bool _shouldPrefetchWithoutJSOnTopsnap;
    NSString *_snapchatUserAgent;
    _Bool _didLoadSucceed;
    SCOperaWebView *_webView;
    id <SCOperaWebViewWrapperDelegate> _delegate;
    long long _pageLoadErrorCount;
    long long _pageLoadCount;
}

@property(readonly, nonatomic) _Bool didLoadSucceed; // @synthesize didLoadSucceed=_didLoadSucceed;
@property(readonly, nonatomic) long long pageLoadCount; // @synthesize pageLoadCount=_pageLoadCount;
@property(readonly, nonatomic) long long pageLoadErrorCount; // @synthesize pageLoadErrorCount=_pageLoadErrorCount;
@property(nonatomic) __weak id <SCOperaWebViewWrapperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCOperaWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (_Bool)shouldHandleOnEditAutofillAction:(id)arg1;
- (id)webpageDetectedFields;
- (id)webpageAutofillDetectedFields;
- (double)userPermissionPromptAllowedCount;
- (double)userPermissionPromptCount;
- (void)notifyWebPageDidFinishLoad;
- (void)notifyWebPageOnHide;
- (void)notifyWebPageOnShow:(_Bool)arg1;
- (void)_handleCheckResultForURL:(id)arg1 webView:(id)arg2 navigationAction:(id)arg3 urlType:(long long)arg4;
- (void)_checkSafeBrowsingForURL:(id)arg1 webView:(id)arg2 targetId:(id)arg3;
- (void)_updateNavigationActionItem:(id)arg1 targetId:(id)arg2;
- (void)_updateNavigationItem:(id)arg1;
- (id)_navigationActionItemForTargetId:(id)arg1;
- (id)_navigationItemForURL:(id)arg1;
- (void)_didCheckSafeBrowsingForURL:(id)arg1 urlType:(long long)arg2;
- (void)_navigateWebViewToBypassDeepLink:(id)arg1 navigationAction:(id)arg2 decisionHandlers:(id)arg3;
- (void)runSafeBrowsingCheckOnUrl:(id)arg1;
- (void)operaWebViewURLInterceptorDidClickOk:(id)arg1;
- (void)operaWebViewURLInterceptorDidClickCancel:(id)arg1;
- (void)showConnectionError;
- (void)showSafeBrowsingWarning:(id)arg1 urlType:(long long)arg2;
- (void)webViewDismissAddPassesView:(id)arg1;
- (void)webViewShowAddPassesView:(id)arg1;
- (_Bool)_shouldOverrideWhitelisted;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)hideKeyboardBar;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 didUpdateProgress:(float)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)showPendingUI:(id)arg1;
- (void)dealloc;
- (void)tearDown;
- (id)resetWebViewWithConfigDict:(id)arg1 userInfoProvider:(id)arg2;
- (id)initWithUrlInterceptor:(id)arg1 userInfoProvider:(id)arg2 safeBrowsingChecker:(id)arg3 pkPassProvider:(id)arg4 configDict:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
