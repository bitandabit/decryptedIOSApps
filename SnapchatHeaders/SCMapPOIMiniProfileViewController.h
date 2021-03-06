//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileBaseViewController.h"

#import "SCMiniProfileStoryIdentitySectionControllerDelegate-Protocol.h"
#import "SCMiniProfileStoryOptionsSectionControllerDelegate-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCSendViewControllerNavigationDelegate-Protocol.h"
#import "SCSendViewControllerSendingDelegate-Protocol.h"

@class NSString, SCMTPointOfInterest, SCMapLoggerSession, SCMapStoryViewModel, SCMapTapToPlayPOIMediaFetcher, SCOperaPresenter, SCSendToTransitionProvider, SCUserSession;
@protocol SCMapPOIMiniProfileViewControllerDelegate;

@interface SCMapPOIMiniProfileViewController : SCMiniProfileBaseViewController <SCMiniProfileStoryIdentitySectionControllerDelegate, SCOperaPresenterDelegate, SCSendViewControllerSendingDelegate, SCSendViewControllerNavigationDelegate, SCMiniProfileStoryOptionsSectionControllerDelegate>
{
    SCMapTapToPlayPOIMediaFetcher *_mediaFetcher;
    SCOperaPresenter *_operaPresenter;
    SCUserSession *_userSession;
    SCMTPointOfInterest *_poi;
    SCMapStoryViewModel *_storyViewModel;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCMapLoggerSession *_mapLoggerSession;
    id <SCMapPOIMiniProfileViewControllerDelegate> _delegate;
}

+ (void)_logURLShareForStoryType:(long long)arg1 mapSessionId:(unsigned long long)arg2;
@property(nonatomic) __weak id <SCMapPOIMiniProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_presentLeadEditor;
- (void)dismissSendViewController:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedRecipients:(id)arg3 postToMyStory:(_Bool)arg4 myStoryPrivacyOverride:(id)arg5 officialStories:(id)arg6 sharedStories:(id)arg7 businessIds:(id)arg8 mobStories:(id)arg9 newMobStories:(id)arg10 mischiefs:(id)arg11 businessProfiles:(id)arg12 gallery:(_Bool)arg13 inviteRecipientShown:(long long)arg14 additionalText:(id)arg15;
- (id)_sendPreviewViewModel;
- (id)_selectRecipientsConfiguration;
- (void)_shareWebURL;
- (void)_sendStory;
- (void)storyOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)_logMiniProfileView;
- (void)_beginStoryPlaybackWithThumbnailView:(id)arg1;
- (void)storyIdentitySectionController:(id)arg1 didTapThumbnailView:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setupWithPOI:(id)arg1 mapZoomLevel:(double)arg2 mapLoggerSession:(id)arg3;
- (id)initWithUserSession:(id)arg1 POI:(id)arg2 mapZoomLevel:(double)arg3 mapLoggerSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

