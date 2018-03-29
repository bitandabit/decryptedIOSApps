//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBAdBrowserSessionDataGeneration.h"
#import "FBAdBrowserViewController.h"
#import "UIWebViewDelegate.h"

@class FBAdTimer, NSObject<FBAdSafariViewControllerDelegate>, NSString, NSURL, UIBarButtonItem, UIToolbar, UIWebView;

@interface FBAdUIWebViewBrowserController : UIViewController <FBAdBrowserViewController, FBAdBrowserSessionDataGeneration, UIWebViewDelegate>
{
    _Bool _statusBarHidden;
    UIWebView *_webView;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_forwardButton;
    UIBarButtonItem *_refreshButton;
    UIBarButtonItem *_spinnerButton;
    UIToolbar *_toolBar;
    NSObject<FBAdSafariViewControllerDelegate> *_delegate;
    NSURL *_url;
    NSString *_inlineClientToken;
    unsigned long long _handlerTimeMs;
    unsigned long long _loadStartMs;
    unsigned long long _responseEndMs;
    unsigned long long _domContentLoadedMs;
    unsigned long long _scrollReadyMs;
    unsigned long long _loadFinishMs;
    FBAdTimer *_domContentLoadedTimer;
}

+ (void)initialize;
@property(retain, nonatomic) FBAdTimer *domContentLoadedTimer; // @synthesize domContentLoadedTimer=_domContentLoadedTimer;
@property(nonatomic) unsigned long long loadFinishMs; // @synthesize loadFinishMs=_loadFinishMs;
@property(nonatomic) unsigned long long scrollReadyMs; // @synthesize scrollReadyMs=_scrollReadyMs;
@property(nonatomic) unsigned long long domContentLoadedMs; // @synthesize domContentLoadedMs=_domContentLoadedMs;
@property(nonatomic) unsigned long long responseEndMs; // @synthesize responseEndMs=_responseEndMs;
@property(nonatomic) unsigned long long loadStartMs; // @synthesize loadStartMs=_loadStartMs;
@property(nonatomic) unsigned long long handlerTimeMs; // @synthesize handlerTimeMs=_handlerTimeMs;
@property(copy, nonatomic) NSString *inlineClientToken; // @synthesize inlineClientToken=_inlineClientToken;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) __weak NSObject<FBAdSafariViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIBarButtonItem *spinnerButton; // @synthesize spinnerButton=_spinnerButton;
@property(retain, nonatomic) UIBarButtonItem *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIBarButtonItem *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)updateButtons;
- (void)doneButtonClicked:(id)arg1;
- (void)refreshButtonClicked:(id)arg1;
- (void)forwardButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)stopDOMContentLoadedTimer;
- (void)startDOMContentLoadedTimer;
- (void)dealloc;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)prefersStatusBarHidden;
- (void)loadURL:(id)arg1;
- (void)clearContent;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

