//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, SCLoadingScreen, UIWebView;

@interface SCTransactionsViewController : GenericSettingsViewController <UIWebViewDelegate>
{
    SCLoadingScreen *_loadingScreen;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) SCLoadingScreen *loadingScreen; // @synthesize loadingScreen=_loadingScreen;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)jsInjectionString;
- (id)getPageViewName;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

