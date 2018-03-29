//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCManagedCapturerListener-Protocol.h"

@class NSString, SCUserSession, User;

@interface SCBitmojiProfileBadgeState : NSObject <SCManagedCapturerListener>
{
    CDUnknownBlockType _shouldShowBadgeHandler;
    CDUnknownBlockType _dismissAddedMeTooltip;
    User *_user;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(copy, nonatomic) CDUnknownBlockType dismissAddedMeTooltip; // @synthesize dismissAddedMeTooltip=_dismissAddedMeTooltip;
@property(copy, nonatomic) CDUnknownBlockType shouldShowBadgeHandler; // @synthesize shouldShowBadgeHandler=_shouldShowBadgeHandler;
- (void).cxx_destruct;
- (void)managedCapturer:(id)arg1 willCapturePhoto:(id)arg2;
- (void)managedCapturer:(id)arg1 didBeginAudioRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didBeginVideoRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeZoomFactor:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeFlashActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeNightModeActive:(id)arg2;
- (void)attemptToDismissAddedMeTooltip;
- (void)profileStateDidChange:(id)arg1;
- (void)readIAPNotification:(id)arg1;
- (void)unreadIAPNotification:(id)arg1;
- (void)newFriendsCountDidChange:(id)arg1;
- (void)friendsStateDidChange:(id)arg1;
- (unsigned long long)_addedFriendsCount;
- (void)_reloadBadgeStateWithCount:(unsigned long long)arg1;
- (void)reloadBadgeState;
- (void)didHideAddedFriendsTooltip;
- (void)didShowAddedFriendsTooltip;
- (void)profileDidShow:(id)arg1;
- (void)dealloc;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
