//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryPrivateGalleryFlowPageViewController.h"

#import "SCGalleryLockedRateLimitControllerDelegate-Protocol.h"
#import "SCGalleryPasscodeViewDelegate-Protocol.h"

@class NSString, SCGalleryLockedRateLimitController, SCGalleryPasscodeView, SCGallerySelectableDotView, UILabel, UIView;
@protocol SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate, SCKeyServicePassphrasePromptRequester;

@interface SCGalleryPrivateGalleryEnterPasscodeViewController : SCGalleryPrivateGalleryFlowPageViewController <SCGalleryPasscodeViewDelegate, SCGalleryLockedRateLimitControllerDelegate>
{
    _Bool _forCreating;
    _Bool _forConfirming;
    _Bool _forUnlocking;
    _Bool _forPrompt;
    NSString *_title;
    _Bool _showsPassphraseOption;
    NSString *_passcode;
    id <SCKeyServicePassphrasePromptRequester> _passphrasePromptRequester;
    NSString *_text;
    UIView *_containerView;
    UIView *_headerView;
    SCGalleryPasscodeView *_passcodeView;
    SCGalleryLockedRateLimitController *_lockedRateLimitController;
    SCGallerySelectableDotView *_dotView;
    UILabel *_usePassphraseLabel;
    UILabel *_errorLabel;
    id <SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTapUsePassphraseView:(id)arg1;
- (void)setPopupView;
- (void)_didPressBackButton;
- (void)_showLockedRateLimitViewIfNeeded:(id)arg1;
- (void)reset;
- (void)lockedRateLimitControllerDidReachAllowedFutureDate:(id)arg1;
- (void)galleryPasscodeViewPasscodeEntered:(id)arg1;
- (void)galleryPasscodeViewPasscodeDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initForUnlockingWithPassphrasePromptRequester:(id)arg1 title:(id)arg2 text:(id)arg3;
- (id)initForConfirmingWithTitle:(id)arg1 passcode:(id)arg2;
- (id)initForCreatingWithTitle:(id)arg1 showsPassphraseOption:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

