//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSendViewControllerNavigationDelegate-Protocol.h"
#import "SCSendViewControllerSendingDelegate-Protocol.h"

@class NSString, SCBaseUploadableChatMedia, SCSendToTransitionProvider, SCUserSession, UIViewController;
@protocol SCChatUploadableMediaForwarder, SCSendTaskMetadataContainer, SCSendToViewController;

@interface SCActionMenuShareController : NSObject <SCSendViewControllerSendingDelegate, SCSendViewControllerNavigationDelegate>
{
    SCUserSession *_userSession;
    UIViewController<SCSendToViewController> *_sendViewController;
    id <SCSendTaskMetadataContainer> _sendTaskMetadataContainer;
    id <SCChatUploadableMediaForwarder> _uploadableMediaForwarder;
    SCBaseUploadableChatMedia *_uploadableChatMedia;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    UIViewController *_fromViewController;
}

- (void).cxx_destruct;
- (void)_dismissSendToViewAndCleanUp;
- (void)dismissSendViewController:(id)arg1;
- (void)leftButtonPressed;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedRecipients:(id)arg3 postToMyStory:(_Bool)arg4 myStoryPrivacyOverride:(id)arg5 officialStories:(id)arg6 sharedStories:(id)arg7 businessIds:(id)arg8 mobStories:(id)arg9 newMobStories:(id)arg10 mischiefs:(id)arg11 businessProfiles:(id)arg12 gallery:(_Bool)arg13 inviteRecipientShown:(long long)arg14 additionalText:(id)arg15;
- (void)_setupAndShowSendToView:(id)arg1 previewViewModel:(id)arg2;
- (void)showSendToViewForUploadableMediaForwarder:(id)arg1 fromViewController:(id)arg2;
- (void)showSendToViewForForwardable:(id)arg1 fromViewController:(id)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

