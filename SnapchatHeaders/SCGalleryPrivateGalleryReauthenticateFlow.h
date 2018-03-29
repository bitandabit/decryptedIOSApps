//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGalleryInformationWebViewControllerDelegate-Protocol.h"

@class NSString, SCGalleryPrivateGalleryReauthenticateView, SCUserSession, UIView, UIViewController;
@protocol SCGalleryPrivateGalleryReauthenticateFlowDelegate;

@interface SCGalleryPrivateGalleryReauthenticateFlow : NSObject <SCGalleryInformationWebViewControllerDelegate>
{
    SCUserSession *_userSession;
    UIViewController *_fromViewController;
    UIView *_containerView;
    UIView *_overlayView;
    SCGalleryPrivateGalleryReauthenticateView *_reauthenticateView;
    NSString *_defaultMessage;
    double _keyboardHeight;
    _Bool _followsKeyboardHeight;
    _Bool _showingErrorMessage;
    id <SCGalleryPrivateGalleryReauthenticateFlowDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryPrivateGalleryReauthenticateFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)galleryInformationWebViewControllerDidPressBack:(id)arg1;
- (void)_reauthenticateWithPassword:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_clearErrorMessage;
- (void)_showErrorMessage:(id)arg1;
- (void)_didPressCancelButton;
- (void)_didPressNextButton;
- (void)_textFieldDidChange;
- (void)_didPressQuestionMarkButton;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_updateReauthenticateViewLayoutConstraints;
- (void)_dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showWithPresentationAnimationType:(unsigned long long)arg1;
- (void)_teardown;
- (void)_setup;
- (void)startWithPresentationAnimationType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 fromViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
