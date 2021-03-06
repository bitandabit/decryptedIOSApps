//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCameraCardViewController.h"

#import "SCCameraCardViewControllerDelegate-Protocol.h"
#import "SCCreativePreviewScanResultProtocol-Protocol.h"
#import "SCDeepLinkableView-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCScanCardAdPreviewDelegate-Protocol.h"
#import "SCScanCardDeepLinkDelegate-Protocol.h"
#import "SCScanCardMomentsOptInDelegate-Protocol.h"
#import "SCScanCardOpenUrlDelegate-Protocol.h"
#import "SCScanCardProductDelegate-Protocol.h"
#import "SCScanCardProviderDelegate-Protocol.h"
#import "SCScanCardSearchVPResultsDelegate-Protocol.h"
#import "SCScanCardShazamDelegate-Protocol.h"
#import "SCScanCardUnlockLensDelegate-Protocol.h"
#import "SCStoryPresenterDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, SCLens, SCOperaPlaylistCommercePlugin, SCOperaPresenter, SCScanCardProvider, SCScanCardTableViewCell, SCStoryPresenter_DEPRECATED, SCUserSession, Sound, UITapGestureRecognizer;
@protocol NavigationDelegate, SCHydraReplySnapDelegate, SCLensRemoverProtocol, SCScanCardAdPreviewProtocol, SCScanCardDeepLinkProtocol, SCScanResultViewControllerDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCScanResultViewController : SCCameraCardViewController <SCScanCardProviderDelegate, SCCameraCardViewControllerDelegate, SCScanCardDeepLinkDelegate, SCScanCardShazamDelegate, SCScanCardOpenUrlDelegate, SCOperaPresenterDelegate, SCScanCardAdPreviewDelegate, SCScanCardUnlockLensDelegate, SCMiniProfileViewControllerDelegate, SCStoryPresenterDelegate, SCCreativePreviewScanResultProtocol, SCScanCardMomentsOptInDelegate, SCScanCardProductDelegate, SCScanCardSearchVPResultsDelegate, SCDeepLinkableView>
{
    NSArray *_scanResults;
    NSDictionary *_scanActionResponse;
    NSArray *_scannableAction;
    NSString *_scanData;
    NSString *_scannableId;
    int _codeType;
    int _version;
    NSMutableArray *_stagedScanCards;
    SCScanCardProvider *_scanCardProvider;
    Sound *_scanSound;
    SCScanCardTableViewCell<SCScanCardDeepLinkProtocol> *_deepLinkScanCard;
    _Bool _firstCardLoaded;
    SCUserSession *_userSession;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCScanCardTableViewCell *_initialLoadingCard;
    double _initialLoadingCardHeight;
    _Bool _overrideInitialCardHeight;
    long long _pageSource;
    SCOperaPresenter *_operaPresenter;
    SCOperaPlaylistCommercePlugin *_commercePlugin;
    _Bool _statusBarHiddenPrevious;
    SCStoryPresenter_DEPRECATED *_storyPresenter;
    SCScanCardTableViewCell<SCScanCardAdPreviewProtocol> *_adPreviewOpenedCard;
    SCLens *_infoLens;
    _Bool _openFromPreview;
    _Bool _skipRecordInScanHistory;
    _Bool _openFromCameraRoll;
    _Bool _relaunchFromInformationIcon;
    id <SCLensRemoverProtocol> _lensRemover;
    id <SCScanResultViewControllerDelegate> _delegate;
    id <NavigationDelegate> _navigationDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCHydraReplySnapDelegate> _scanReplySnapDelegate;
    long long _scanSource;
}

+ (id)scanResultViewControllerForLens:(id)arg1 userSession:(id)arg2 scanSource:(long long)arg3 pageSource:(long long)arg4;
+ (id)scanResultViewControllerScannableActions:(id)arg1 responseDictionary:(id)arg2 scanData:(id)arg3 scannableId:(id)arg4 scanSource:(long long)arg5 codeType:(int)arg6 version:(int)arg7 navigationController:(id)arg8 startChatDelegate:(id)arg9 userSession:(id)arg10;
+ (id)scanResultViewControllerForScanResults:(id)arg1 navigationController:(id)arg2 startChatDelegate:(id)arg3 userSession:(id)arg4 scanSource:(long long)arg5 pageSource:(long long)arg6 skipScanHistory:(_Bool)arg7 lensRemover:(id)arg8;
+ (id)scanResultViewControllerForScanResults:(id)arg1 navigationController:(id)arg2 startChatDelegate:(id)arg3 userSession:(id)arg4 scanSource:(long long)arg5 pageSource:(long long)arg6 skipScanHistory:(_Bool)arg7;
@property(nonatomic) _Bool relaunchFromInformationIcon; // @synthesize relaunchFromInformationIcon=_relaunchFromInformationIcon;
@property(nonatomic) _Bool openFromCameraRoll; // @synthesize openFromCameraRoll=_openFromCameraRoll;
@property(nonatomic) _Bool skipRecordInScanHistory; // @synthesize skipRecordInScanHistory=_skipRecordInScanHistory;
@property(nonatomic) _Bool openFromPreview; // @synthesize openFromPreview=_openFromPreview;
@property(nonatomic) long long scanSource; // @synthesize scanSource=_scanSource;
@property(nonatomic) __weak id <SCHydraReplySnapDelegate> scanReplySnapDelegate; // @synthesize scanReplySnapDelegate=_scanReplySnapDelegate;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate; // @synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <SCScanResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showMoreLensesFromLens:(id)arg1;
- (_Bool)canShowMoreLenses;
- (void)searchVPResultsCard:(id)arg1 deepLinkWithUrl:(id)arg2;
- (id)productNavigationDelegate;
- (void)momentsOptInCard:(id)arg1 didTapNotify:(id)arg2;
- (void)dismissCreativePreview;
- (void)reportLensWithController:(id)arg1;
- (void)sendLensURLWithController:(id)arg1;
- (void)shareLensURL:(id)arg1;
- (void)shareShazamURL:(id)arg1 songTitle:(id)arg2 artistName:(id)arg3;
- (void)sendWithShareController:(id)arg1;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (id)presentingVC;
- (void)miniProfileViewControllerWasDismissed:(id)arg1;
- (void)miniProfileViewControllerDidPressSnapButton:(id)arg1;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (id)scanCardOpenUrlNavigationDelegate;
- (void)storyPresenter:(id)arg1 didFinishViewingFriendStories:(id)arg2 firstStoryDisplayed:(id)arg3 isReplayMode:(_Bool)arg4 becameFullyViewed:(_Bool)arg5;
- (void)storyPresenter:(id)arg1 didBeginPlayingFriendStories:(id)arg2;
- (void)storyPresenterWillBeginPlayingStory:(id)arg1 friendStories:(id)arg2 viewLocation:(long long)arg3;
- (void)storyPresenterDidFinishDismissingStory:(id)arg1;
- (void)storyPresenterDidCancelDismissingStory:(id)arg1;
- (void)storyPresenterWillBeginAnimatingToDismissStory:(id)arg1;
- (void)storyPresenterDidFinishPresentingStory:(id)arg1;
- (void)storyPresenterWillBeginPresentingStory:(id)arg1;
- (void)storyPresenter:(id)arg1 beginDismissFriendStories:(id)arg2 previousFriendStories:(id)arg3;
- (void)storyPresenter:(id)arg1 didDismissFriendStories:(id)arg2 becameFullyViewed:(_Bool)arg3 succeededToPresent:(_Bool)arg4 viewingType:(long long)arg5;
- (void)adpreviewCard:(id)arg1 didTapOpenAd:(id)arg2;
- (void)viewDidAppearWithURL:(id)arg1 additionalInfo:(id)arg2;
- (void)_showProfileView:(id)arg1;
- (void)cameraCardViewControllerShowProfileView:(id)arg1 suggestedFriend:(id)arg2;
- (void)cameraCardViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
- (void)deepLinkCard:(id)arg1 didTapShareUrl:(id)arg2;
- (void)deepLinkCard:(id)arg1 chatLinkToURL:(id)arg2;
- (void)deepLinkCard:(id)arg1 didDeepLinkToURL:(id)arg2;
- (void)scanCardDidFinish;
- (void)scanCardDismissViewController;
- (void)scanCardPresentViewController:(id)arg1;
@property(readonly, nonatomic) __weak id <SCLensRemoverProtocol> lensRemover; // @synthesize lensRemover=_lensRemover;
- (void)scanCardProviderDidNotProvideScanCards:(id)arg1;
- (void)scanCardProvider:(id)arg1 didProvideScanCards:(id)arg2;
- (_Bool)shouldDismissViewControllerLater;
- (void)_cardDidRemoveWillAnimateChanges;
- (void)cameraCardTableViewCell:(id)arg1 willAnimateHeightWithAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_handleSingleCardCellHeightOverrideWithCard:(id)arg1;
- (void)_handleWillBeginPresentingEdition;
- (void)_handleDidDismissEdition;
- (void)_showScanCards:(id)arg1;
- (void)_provideScanFeedback;
- (void)_presentCardsAnimated;
- (void)_didTapTableView;
- (void)resumePlayback;
- (void)pausePlayback;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (void)dismissScanResultsAnimated:(_Bool)arg1;
- (id)initWithLens:(id)arg1 scanSource:(long long)arg2 userSession:(id)arg3 pageSource:(long long)arg4;
- (id)initWithScanResults:(id)arg1 scanSource:(long long)arg2 userSession:(id)arg3 pageSource:(long long)arg4 lensRemover:(id)arg5;
- (id)initWithScannableActions:(id)arg1 responseDictionary:(id)arg2 scanData:(id)arg3 scannableId:(id)arg4 scanSource:(long long)arg5 codeType:(int)arg6 version:(int)arg7 userSession:(id)arg8 lensRemover:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

