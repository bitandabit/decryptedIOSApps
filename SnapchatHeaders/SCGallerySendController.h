//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGallerySendItemsTaskDelegate-Protocol.h"
#import "SCSendViewControllerNavigationDelegate-Protocol.h"
#import "SCSendViewControllerSendingDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSString, SCGallerySendItemsTask, SCSendToTransitionProvider, SCUserSession, UIViewController;
@protocol SCGallerySendControllerDelegate, SCStartChatDelegate;

@interface SCGallerySendController : NSObject <SendSnapNavigationControllerDelegate, SCSendViewControllerSendingDelegate, SCGallerySendItemsTaskDelegate, SCTimeProfilable, SCSendViewControllerNavigationDelegate>
{
    SCUserSession *_userSession;
    SCGallerySendItemsTask *_sendTask;
    NSString *_sourcePageName;
    UIViewController *_fromViewController;
    SCSendToTransitionProvider *_transitionProvider;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCGallerySendControllerDelegate> _delegate;
}

+ (int)context;
@property(nonatomic) __weak id <SCGallerySendControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
- (void).cxx_destruct;
- (void)_didDismissSendViewController;
- (void)dismissSendViewController:(id)arg1;
- (id)_newSendToConfiguration:(_Bool)arg1 allAreLagunaSnapsWithin24h:(_Bool)arg2;
- (_Bool)_allAreLagunaSnapsTakenWithin24Hours:(id)arg1 phAssets:(id)arg2;
- (_Bool)_hasLongVideoInSnaps:(id)arg1 phAssets:(id)arg2;
- (void)_presentSendViewControllerFromViewController:(id)arg1 isLongVideo:(_Bool)arg2 allAreLagunaSnapsWithin24h:(_Bool)arg3;
- (void)sendItemsTaskDidPostAllStories:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedRecipients:(id)arg3 postToMyStory:(_Bool)arg4 myStoryPrivacyOverride:(id)arg5 officialStories:(id)arg6 sharedStories:(id)arg7 businessIds:(id)arg8 mobStories:(id)arg9 newMobStories:(id)arg10 mischiefs:(id)arg11 businessProfiles:(id)arg12 gallery:(_Bool)arg13 inviteRecipientShown:(long long)arg14 additionalText:(id)arg15;
- (void)didCancelFromPreview:(id)arg1;
- (void)presentSendViewControllerWithGallerySnap:(id)arg1 sourcePageName:(id)arg2 fromViewController:(id)arg3 userContext:(id)arg4;
- (void)_processGalleryItemsForSendingAndShowAlertsWhenFails:(id)arg1 gallerySnaps:(id)arg2 shouldShowToast:(_Bool)arg3 fromViewController:(id)arg4 userContext:(id)arg5 sendItemsTaskBlock:(CDUnknownBlockType)arg6;
- (void)presentSendViewControllerWithGalleryItems:(id)arg1 gallerySnaps:(id)arg2 sourcePageName:(id)arg3 fromViewController:(id)arg4 userContext:(id)arg5;
- (void)presentSendViewControllerWithGalleryEntry:(id)arg1 sourcePageName:(id)arg2 fromViewController:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

