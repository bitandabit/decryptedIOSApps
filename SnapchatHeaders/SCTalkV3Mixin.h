//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAudioSessionListener-Protocol.h"
#import "SCCallStatusProviderForVideoNotePlayer-Protocol.h"
#import "SCTalkClientController-Protocol.h"
#import "SCTalkV3DependenciesProvider-Protocol.h"

@class NSString, SCChatInputController, SCTV3AvatarServices, SCTV3ChatServices;
@protocol SCTV3ClientDependenciesProvider, SCTV3LensesServices, SCTalkSession;

@interface SCTalkV3Mixin : NSObject <SCTalkV3DependenciesProvider, SCCallStatusProviderForVideoNotePlayer, SCAudioSessionListener, SCTalkClientController>
{
    id <SCTalkSession> _talkSession;
    id <SCTV3ClientDependenciesProvider> _chatDP;
    SCChatInputController *_chatInputController;
    SCTV3AvatarServices *_avatarServices;
    SCTV3ChatServices *_chatServices;
    id <SCTV3LensesServices> _lensesServices;
    _Bool _visible;
    _Bool _closeProximity;
    _Bool _shouldPauseAudioProcessingOnTalkSessionCreation;
    double _knownAudioVolume;
}

- (void).cxx_destruct;
- (_Bool)_isGroupConvoId:(id)arg1;
- (_Bool)_hasMicrophonePermission;
- (unsigned long long)_mediaForNotification:(id)arg1;
- (_Bool)_shouldHandleNotification:(id)arg1;
- (void)_handleNotificationIfNeeded;
- (void)_performProximityChangeAction;
- (void)_proximityChanged;
- (void)_updateProximityState:(_Bool)arg1;
- (_Bool)_proximityState;
- (void)_updateVisibility:(_Bool)arg1;
- (void)_initTalkSessionIfMissing;
- (void)_destroyTalkSession;
- (void)_activateOrBackgroundTalkSession;
- (void)_setActiveTalkSession:(id)arg1;
- (void)audioSession:(id)arg1 didChangeVolume:(double)arg2;
- (void)audioSession:(id)arg1 didChangeProximityMonitoring:(_Bool)arg2;
- (_Bool)callInProgress;
- (void)chatInputController:(id)arg1 callingAccessorySelected:(unsigned long long)arg2 previouslySelected:(unsigned long long)arg3;
- (id)tooltipServices;
- (id)lensesServices;
- (id)chatServices;
- (id)avatarServices;
- (void)viewDidBecomeActive;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewWillResignActive;
- (void)viewWillEnterBackground;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)setChatViewModel:(id)arg1;
- (_Bool)supportsCalling;
- (void)chatMediaDidCloseFullscreen;
- (void)chatMediaWillEnterFullscreen;
- (_Bool)shouldSuppressKeyboard;
- (_Bool)isPublishingMedia;
- (void)setChatInputController:(id)arg1 shouldAttachAsListener:(_Bool)arg2;
- (id)chatUIEventListener;
- (id)talkSession;
- (void)refreshParticipants;
- (void)activateTalkPostGroupCreation;
- (void)setActiveTalkSessionForConversationWithId:(id)arg1;
- (id)activeConvoId;
- (id)initWithChatDP:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

