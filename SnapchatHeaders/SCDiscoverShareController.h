//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSendViewControllerNavigationDelegate-Protocol.h"
#import "SCSendViewControllerSendingDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSString, PreviewViewController, SCBaseUploadableChatMedia, SCDiscoverMediaBlob, SCDiscoverMediaMessagePrepper, SCExpandingPreviewAnimator, SCPreviewConfiguration, SCSendToTransitionProvider, SCUserSession, SnapTrophyMetrics, UIViewController;
@protocol SCDiscoverShareControllerDelegate, SCSendToViewController;

@interface SCDiscoverShareController : NSObject <SCSendViewControllerSendingDelegate, SCSendViewControllerNavigationDelegate, SendSnapNavigationControllerDelegate>
{
    SCUserSession *_userSession;
    SCExpandingPreviewAnimator *_previewAnimator;
    UIViewController<SCSendToViewController> *_sendViewController;
    SCPreviewConfiguration *_previewConfiguration;
    SCBaseUploadableChatMedia *_discoverMedia;
    SCDiscoverMediaMessagePrepper *_discoverMediaMessagePrepper;
    UIViewController *_fromViewController;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    id <SCDiscoverShareControllerDelegate> _delegate;
    SCDiscoverMediaBlob *_blob;
    SnapTrophyMetrics *_snapTrophyMetrics;
    long long _messageBodyType;
    long long _state;
    PreviewViewController *_previewViewController;
}

+ (id)selectRecipientConfiguration;
@property(retain, nonatomic) PreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long messageBodyType; // @synthesize messageBodyType=_messageBodyType;
@property(retain, nonatomic) SnapTrophyMetrics *snapTrophyMetrics; // @synthesize snapTrophyMetrics=_snapTrophyMetrics;
@property(retain, nonatomic) SCDiscoverMediaBlob *blob; // @synthesize blob=_blob;
@property(nonatomic) __weak id <SCDiscoverShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setState:(long long)arg1;
- (void)_didDismissSendViewController;
- (void)dismissSendViewController:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedRecipients:(id)arg3 postToMyStory:(_Bool)arg4 myStoryPrivacyOverride:(id)arg5 officialStories:(id)arg6 sharedStories:(id)arg7 businessIds:(id)arg8 mobStories:(id)arg9 newMobStories:(id)arg10 mischiefs:(id)arg11 businessProfiles:(id)arg12 gallery:(_Bool)arg13 inviteRecipientShown:(long long)arg14 additionalText:(id)arg15;
- (id)_previewConfigurationForImage:(id)arg1 snapSaverImageProvider:(CDUnknownBlockType)arg2 rotationEnabled:(_Bool)arg3 savingDisabled:(_Bool)arg4;
- (id)_previewConfigurationForVideoURL:(id)arg1 videoSize:(struct CGSize)arg2 videoOverlayImage:(id)arg3 shareFrameMedia:(id)arg4 firstFrame:(id)arg5;
- (void)editPressedFromContextMenuFromViewController:(id)arg1;
- (void)sendPressedFromContextMenuFromViewController:(id)arg1;
- (void)endDiscoverShare;
- (void)_dismissPreviewViewController;
- (void)didSaveSnapWithParameters:(id)arg1;
- (void)didSendDiscoverSharedMessageWithParameters:(id)arg1;
- (void)didCancelFromPreview:(id)arg1;
- (void)shareWithVideo:(id)arg1 overlayImages:(id)arg2 firstFrame:(id)arg3 shareFrameMedia:(id)arg4 fromViewController:(id)arg5 touchOrigin:(struct CGPoint)arg6;
- (void)shareWithImage:(id)arg1 overlayImages:(id)arg2 fromViewController:(id)arg3 touchOrigin:(struct CGPoint)arg4 rotationEnabled:(_Bool)arg5 snapSaverImageProvider:(CDUnknownBlockType)arg6 savingDisabled:(_Bool)arg7;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

