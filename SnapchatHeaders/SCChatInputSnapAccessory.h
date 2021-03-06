//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatInputAccessory-Protocol.h"
#import "SCChatQuickCaptionDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, SCUserSession, UIButton, UINavigationController, UIView, UIViewController;
@protocol SCChatInputProvider, SCChatInputSnapAccessoryDelegate, SCSnapSendPreparer, UINavigationControllerDelegate;

@interface SCChatInputSnapAccessory : NSObject <SendSnapNavigationControllerDelegate, UINavigationControllerDelegate, SCTimeProfilable, SCChatInputAccessory, SCChatQuickCaptionDelegate>
{
    id <SCChatInputProvider> _inputProvider;
    SCUserSession *_userSession;
    UIViewController *_parentViewController;
    UIView *_miniatureView;
    UIButton *_snapButton;
    id <UINavigationControllerDelegate> _oldNavigationDelegate;
    _Bool _fullscreenImageUsed;
    double _viewFrameHeight;
    UINavigationController *_navigationController;
    id <SCChatInputSnapAccessoryDelegate> _delegate;
    id <SCSnapSendPreparer> _snapSendPreparer;
}

+ (int)context;
@property(nonatomic) __weak id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
@property(nonatomic) __weak id <SCChatInputSnapAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fullscreenImageUsed; // @synthesize fullscreenImageUsed=_fullscreenImageUsed;
- (void).cxx_destruct;
- (void)captionUpdatedWithText:(id)arg1;
- (_Bool)_quickCaptionIsEnabled;
- (void)_dismissPreviewIfPresented;
- (void)_presentInChatSnapWithRecipient:(id)arg1;
- (void)_popCameraIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)_navigationController;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)viewFrameHeightDidChange:(id)arg1;
- (void)accessoryPressed;
- (void)presentPreviewforInChatImage:(id)arg1;
- (void)didComeFromCameraWithoutSendingSnap;
- (void)didPostStory;
- (void)didSendToGallery;
- (void)didSendChatMessage;
- (void)didSendSnaps:(id)arg1;
- (void)_didSendSnapOrChatMessage;
- (void)didCancelFromPreview:(id)arg1;
- (void)_didPressSnapButton:(id)arg1;
- (void)resetMiniatureViewImageForNormalControlState;
- (id)miniatureView;
- (void)dealloc;
- (id)initWithInputProvider:(id)arg1 userSession:(id)arg2 parentViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

