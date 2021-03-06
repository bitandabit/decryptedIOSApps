//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatAudioNoteRecorderDelegate-Protocol.h"
#import "SCChatInputAVStreamAccessory-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSString, SCChatAudioNoteRecorder, SCChatInputVideoStreamAccessory, UIButton, UILongPressGestureRecognizer;
@protocol SCChatDrawerSender, SCChatInputAVStreamAccessoryDelegate, SCChatInputProvider;

@interface SCChatInputAudioStreamAccessory : NSObject <SCChatAudioNoteRecorderDelegate, SCChatInputAVStreamAccessory, SCTimeProfilable>
{
    id <SCChatDrawerSender> _sender;
    id <SCChatInputProvider> _inputProvider;
    UIButton *_miniatureView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SCChatAudioNoteRecorder *_audioNoteRecorder;
    _Bool _gracePeriodStarted;
    _Bool _isLongPressEnded;
    _Bool _didCancelNote;
    _Bool _active;
    _Bool _noteRecordingInProgress;
    _Bool _fullscreenImageUsed;
    id <SCChatInputAVStreamAccessoryDelegate> _delegate;
    SCChatInputVideoStreamAccessory *_videoAccessory;
}

+ (int)context;
@property(nonatomic) __weak SCChatInputVideoStreamAccessory *videoAccessory; // @synthesize videoAccessory=_videoAccessory;
@property(nonatomic) __weak id <SCChatInputAVStreamAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fullscreenImageUsed; // @synthesize fullscreenImageUsed=_fullscreenImageUsed;
@property(readonly, nonatomic) _Bool noteRecordingInProgress; // @synthesize noteRecordingInProgress=_noteRecordingInProgress;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (_Bool)isOnPhoneCall;
- (void)sendAudioNoteWithData:(id)arg1 duration:(double)arg2;
- (void)audioNoteRecorderDidFinishWithData:(id)arg1 duration:(double)arg2;
- (void)_cleanupRecording;
- (void)accessoryLongPressed:(id)arg1;
- (void)setMiniatureSelected:(_Bool)arg1;
- (void)_setDidCancelNote:(_Bool)arg1;
- (void)cancelNoteRecordingMaybe;
- (id)audioNoteRecorder;
- (void)fadeInAudioNoteImage;
- (void)fadeOutAudioNoteImage;
- (void)setMiniatureViewImageForAudioNoteRecordingState;
- (void)setMiniatureViewImageForVoiceChatState;
- (void)resetMiniatureViewImageForNormalControlState;
- (void)resetAccessoryAssets;
- (void)accessoryPressed;
- (void)startCallAccessoryGracePeriod;
- (id)miniatureView;
- (void)dealloc;
- (id)initWithSender:(id)arg1 inputProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

