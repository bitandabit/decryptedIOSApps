//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaWebLayer-Protocol.h"

@class NSNumber, NSString, NSURL, SCOperaPage, SCOperaSubscriptionConfiguration, UIColor;

@interface SCOperaRemoteWebLayer : NSObject <SCOperaWebLayer>
{
    _Bool _showShareButton;
    _Bool _allowURLIntercept;
    _Bool _requiresUserActionForMediaPlayback;
    _Bool _allowsInlineMediaPlayback;
    _Bool _allowJSInjection;
    _Bool _resetWebviewOnHide;
    _Bool _allowPreloading;
    _Bool _blockPreloadingImage;
    _Bool _useImmersiveMode;
    _Bool _allowLoadingUnsafeSites;
    _Bool _allowAddToWallet;
    _Bool _allowPreloadHeader;
    _Bool _allowHidingUrlBarOnFirstLoad;
    _Bool _allowAutoDetectAutofill;
    _Bool _allowOnEditAutofill;
    _Bool _allowAutoDetectZipCodeAutofill;
    _Bool _allowSmartDeepLink;
    _Bool _dismissOnlyWithExitButton;
    _Bool _preventPullDownWhenViewingContent;
    _Bool _controlAudio;
    _Bool _allowOnShowOnHideJSCallback;
    _Bool _disableTouchCallout;
    _Bool _useCardLoading;
    _Bool _useWebviewStandardizationExperience;
    _Bool _showProgressBar;
    _Bool _shouldPrefetchWithoutJSOnTopsnap;
    _Bool _allowSwipeNavigation;
    NSURL *_url;
    long long _onEditAutofillType;
    long long _showURLBar;
    UIColor *_primaryColor;
    UIColor *_loadingBackgroundColor;
    NSNumber *_deepLinkAppId;
    SCOperaPage *_page;
    SCOperaSubscriptionConfiguration *_subscriptionConfiguration;
    NSString *_customUserAgent;
    unsigned long long _jsBridgeCapabilities;
    NSString *_urlBarLoadingText;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) _Bool allowSwipeNavigation; // @synthesize allowSwipeNavigation=_allowSwipeNavigation;
@property(readonly, nonatomic) _Bool shouldPrefetchWithoutJSOnTopsnap; // @synthesize shouldPrefetchWithoutJSOnTopsnap=_shouldPrefetchWithoutJSOnTopsnap;
@property(readonly, nonatomic) _Bool showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(readonly, nonatomic) _Bool useWebviewStandardizationExperience; // @synthesize useWebviewStandardizationExperience=_useWebviewStandardizationExperience;
@property(readonly, nonatomic) NSString *urlBarLoadingText; // @synthesize urlBarLoadingText=_urlBarLoadingText;
@property(readonly, nonatomic) _Bool useCardLoading; // @synthesize useCardLoading=_useCardLoading;
@property(readonly, nonatomic) unsigned long long jsBridgeCapabilities; // @synthesize jsBridgeCapabilities=_jsBridgeCapabilities;
@property(readonly, nonatomic) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(readonly, nonatomic) SCOperaSubscriptionConfiguration *subscriptionConfiguration; // @synthesize subscriptionConfiguration=_subscriptionConfiguration;
@property(readonly, nonatomic) _Bool disableTouchCallout; // @synthesize disableTouchCallout=_disableTouchCallout;
@property(readonly, nonatomic) _Bool allowOnShowOnHideJSCallback; // @synthesize allowOnShowOnHideJSCallback=_allowOnShowOnHideJSCallback;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) NSNumber *deepLinkAppId; // @synthesize deepLinkAppId=_deepLinkAppId;
@property(readonly, nonatomic) UIColor *loadingBackgroundColor; // @synthesize loadingBackgroundColor=_loadingBackgroundColor;
@property(readonly, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) long long showURLBar; // @synthesize showURLBar=_showURLBar;
@property(readonly, nonatomic) _Bool controlAudio; // @synthesize controlAudio=_controlAudio;
@property(readonly, nonatomic) _Bool preventPullDownWhenViewingContent; // @synthesize preventPullDownWhenViewingContent=_preventPullDownWhenViewingContent;
@property(readonly, nonatomic) _Bool dismissOnlyWithExitButton; // @synthesize dismissOnlyWithExitButton=_dismissOnlyWithExitButton;
@property(readonly, nonatomic) _Bool allowSmartDeepLink; // @synthesize allowSmartDeepLink=_allowSmartDeepLink;
@property(readonly, nonatomic) _Bool allowAutoDetectZipCodeAutofill; // @synthesize allowAutoDetectZipCodeAutofill=_allowAutoDetectZipCodeAutofill;
@property(readonly, nonatomic) long long onEditAutofillType; // @synthesize onEditAutofillType=_onEditAutofillType;
@property(readonly, nonatomic) _Bool allowOnEditAutofill; // @synthesize allowOnEditAutofill=_allowOnEditAutofill;
@property(readonly, nonatomic) _Bool allowAutoDetectAutofill; // @synthesize allowAutoDetectAutofill=_allowAutoDetectAutofill;
@property(readonly, nonatomic) _Bool allowHidingUrlBarOnFirstLoad; // @synthesize allowHidingUrlBarOnFirstLoad=_allowHidingUrlBarOnFirstLoad;
@property(readonly, nonatomic) _Bool allowPreloadHeader; // @synthesize allowPreloadHeader=_allowPreloadHeader;
@property(readonly, nonatomic) _Bool allowAddToWallet; // @synthesize allowAddToWallet=_allowAddToWallet;
@property(readonly, nonatomic) _Bool allowLoadingUnsafeSites; // @synthesize allowLoadingUnsafeSites=_allowLoadingUnsafeSites;
@property(readonly, nonatomic) _Bool useImmersiveMode; // @synthesize useImmersiveMode=_useImmersiveMode;
@property(readonly, nonatomic) _Bool blockPreloadingImage; // @synthesize blockPreloadingImage=_blockPreloadingImage;
@property(readonly, nonatomic) _Bool allowPreloading; // @synthesize allowPreloading=_allowPreloading;
@property(readonly, nonatomic) _Bool resetWebviewOnHide; // @synthesize resetWebviewOnHide=_resetWebviewOnHide;
@property(readonly, nonatomic) _Bool allowJSInjection; // @synthesize allowJSInjection=_allowJSInjection;
@property(readonly, nonatomic) _Bool allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property(readonly, nonatomic) _Bool requiresUserActionForMediaPlayback; // @synthesize requiresUserActionForMediaPlayback=_requiresUserActionForMediaPlayback;
@property(readonly, nonatomic) _Bool allowURLIntercept; // @synthesize allowURLIntercept=_allowURLIntercept;
@property(readonly, nonatomic) _Bool showShareButton; // @synthesize showShareButton=_showShareButton;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

