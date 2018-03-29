//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCChatInputAVStreamAccessory;

@protocol SCChatInputAVStreamAccessoryDelegate <NSObject>
- (void)enableAccessoryViewInteractionAfterChatNotesRecording;
- (void)disableAccessoryViewInteractionBeforeChatNotesRecording;
- (void)removeCanceNoteButton;
- (_Bool)isDraggingPointWithinCancel:(struct CGPoint)arg1;
- (void)showCancelNoteButton;
- (_Bool)isAnyAVAccessoryActive;
- (void)inputAVStreamAccessoryPressed:(id <SCChatInputAVStreamAccessory>)arg1;
@end
