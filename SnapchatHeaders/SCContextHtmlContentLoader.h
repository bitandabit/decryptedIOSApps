//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCContextContentLoaderProtocol-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSError, NSString, NSURL, UIView, UIWebView;

@interface SCContextHtmlContentLoader : NSObject <UIWebViewDelegate, SCContextContentLoaderProtocol>
{
    NSURL *_url;
    NSString *_inlineHtml;
    NSError *_error;
    UIWebView *_browser;
    UIView *_browserWrapper;
    double _requestedImageHeight;
    double _requestedImageWidth;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)_complete;
- (void)loadContent:(CDUnknownBlockType)arg1;
- (id)initWithHtml:(id)arg1 height:(double)arg2 width:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
