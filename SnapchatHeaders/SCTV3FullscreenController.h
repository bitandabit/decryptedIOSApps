//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTDrawerHeightListener-Protocol.h"
#import "SCTV3FullscreenAnimationsProvider-Protocol.h"
#import "SCTV3FullscreenLayoutDelegate-Protocol.h"
#import "SCTV3FullscreenRubberBandRegionsListener-Protocol.h"

@class NSOrderedSet, NSString, SCGrowingButton, SCTV3FullscreenLayout, UIPanGestureRecognizer, UIView;
@protocol SCTV3ChatServices, SCTV3FullscreenBarProtocol, SCTalkUIController;

@interface SCTV3FullscreenController : NSObject <SCTV3FullscreenRubberBandRegionsListener, SCTV3FullscreenLayoutDelegate, SCTV3FullscreenAnimationsProvider, SCTDrawerHeightListener>
{
    id <SCTalkUIController> _talkUIController;
    id <SCTV3ChatServices> _chatServices;
    id <SCTV3FullscreenBarProtocol> _fullscreenBarController;
    SCTV3FullscreenLayout *_fullscreenLayout;
    UIView *_fullscreenLayoutContainer;
    SCGrowingButton *_dismissButton;
    UIView *_localIssuePane;
    UIPanGestureRecognizer *_fullscreenPanGestureRecognizer;
    NSOrderedSet *_existingPreviews;
    long long _fullscreenDismissedType;
    _Bool _inputPresentWhileDragging;
    _Bool _groupConversation;
    _Bool _trainBeingPaused;
    NSString *_trainToken;
}

- (void).cxx_destruct;
- (void)_removeFullscreenLayout;
- (void)_prepareFullscreenLayout;
- (void)_prepareDismissCaret;
- (void)_prepareLocalIssuePane;
- (void)_caretPressed:(id)arg1;
- (void)_preparePreviewsTargetRectDragOffsets:(long long)arg1;
- (id)_previewsToRemove:(id)arg1;
- (id)_previewsToAdd:(id)arg1;
- (_Bool)_isUsernameInJoiningParticipants:(id)arg1 participants:(id)arg2;
- (id)_existingPreviewsForUsername:(id)arg1;
- (id)_participantsLeavingFullscreen:(id)arg1;
- (id)_participantsJoiningFullscreen:(id)arg1;
- (void)_pan:(id)arg1;
- (_Bool)_fullscreenCallingMedia:(long long)arg1;
- (_Bool)_fullscreenCallingState:(long long)arg1;
- (void)_exitFullscreenWithPreviews:(id)arg1 gestureRelated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeParticipantsLeavingFullscreen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addParticipantsJoiningFullscreen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enterFullscreenWithPreviews:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldEnterFullscreenAutomatically:(id)arg1;
- (_Bool)_shouldExitFullscreen:(id)arg1;
- (_Bool)_shouldEnterFullscreen:(id)arg1;
- (void)onDrawerDraggingEnded;
- (void)onDrawerDraggingStarted;
- (void)onDrawerHeightChange:(double)arg1 targetHeight:(double)arg2;
- (struct CGRect)_videoViewPositionForUsername:(id)arg1;
- (void)previewCoveringInput:(_Bool)arg1 caller:(id)arg2;
- (id)animationsForState:(id)arg1;
- (void)handleStateChangedReason:(long long)arg1;
- (id)initWithChatServices:(id)arg1 fullscreenBarController:(id)arg2 talkUIController:(id)arg3 groupConversation:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
