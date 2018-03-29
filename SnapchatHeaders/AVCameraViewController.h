//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LSASnapRecordingComponentListener-Protocol.h"
#import "SCCameraOverlayDelegate-Protocol.h"
#import "SCCameraPreviewEventDelegate-Protocol.h"
#import "SCCameraVolumeButtonHandlerDelegate-Protocol.h"
#import "SCChatQuickCaptionDelegate-Protocol.h"
#import "SCDeepLinkMiniProfileControllerDelegate-Protocol.h"
#import "SCDeepLinkableViewSource-Protocol.h"
#import "SCGalleryViewControllerDelegate-Protocol.h"
#import "SCHydraReplySnapDelegate-Protocol.h"
#import "SCLagunaEventListener-Protocol.h"
#import "SCLagunaPairingDelegate-Protocol.h"
#import "SCLensBitmojiDelegate-Protocol.h"
#import "SCLensOperaControllerDelegate-Protocol.h"
#import "SCLensRemoverProtocol-Protocol.h"
#import "SCLensSnapcodeARExperienceControllerDelegate-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedLensProcessorStateListener-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCOperaSilentlyPresentedProtocol-Protocol.h"
#import "SCScanPreviewControllerDelegate-Protocol.h"
#import "SCScanResultViewControllerDelegate-Protocol.h"
#import "SCSearchSnapZoomLevelProviding-Protocol.h"
#import "SCSearchVPControllingDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCShareUsernameControllerDelegate-Protocol.h"
#import "SCShazamManagerDelegate-Protocol.h"
#import "SCSwipeTransitionCoordinatorDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "SwipeView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDate, NSMutableSet, NSString, NSTimer, SCCameraOverlayView, SCCameraToGallerySwipeTransitionCoordinator, SCCameraVolumeButtonHandler, SCCaptionManager, SCCaptionState, SCCapturerToken, SCDeepLinkMiniProfileController, SCFeatureCoordinator, SCFeatureProvider, SCGalleryViewController, SCGradientView, SCLazy, SCLensInitLogger, SCLensOperaController, SCLensSnapcodeARExperienceController, SCLensSonicController, SCLensesUIAppearanceConfiguration, SCLensesUIControllerState, SCManagedCapturerState, SCManagedLensProcessorState, SCManagedRecordingInterruptionReporter, SCManagedVideoNoSoundLogger, SCMultiSnapCollectionViewController, SCMultiSnapSegment, SCMultiSnapV2CollectionViewController, SCPreviewPresenter, SCPromise, SCRecordingFileManager, SCReplyParameters, SCScopedAccess, SCShareUsernameController, SCShazamAudioCapturer, SCShazamConfiguration, SCShazamManager, SCSnapCraftRealTimeBaseController, SCSpringAnimationHeartbeat, SCUserSession, UIView;
@protocol AVCameraViewControllerDelegate, NavigationDelegate, SCChatQuickCaptionDelegate, SCLensCameraScreenDataProviderProtocol, SCSearchVPControlling, SCSnapSendPreparer, SCStartChatDelegate, SCSwipeViewParentDelegate, SendSnapNavigationControllerDelegate;

@interface AVCameraViewController : UIViewController <SCOperaSilentlyPresentedProtocol, SCLensSnapcodeARExperienceControllerDelegate, SCLensOperaControllerDelegate, LSASnapRecordingComponentListener, SCManagedLensProcessorStateListener, SCLensRemoverProtocol, SCManagedCapturerListener, SCScanResultViewControllerDelegate, SCShareUsernameControllerDelegate, SCShazamManagerDelegate, SCLagunaEventListener, SCSearchVPControllingDelegate, SCScanPreviewControllerDelegate, SCSwipeTransitionCoordinatorDelegate, SCCameraPreviewEventDelegate, SCDeepLinkMiniProfileControllerDelegate, SCSearchSnapZoomLevelProviding, SCMiniProfileViewControllerDelegate, SCShakeToReportDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SCCameraVolumeButtonHandlerDelegate, SCTimeProfilable, SwipeView, UIGestureRecognizerDelegate, SCCameraOverlayDelegate, SCDeepLinkableViewSource, SCHydraReplySnapDelegate, SCChatQuickCaptionDelegate, SCLensBitmojiDelegate, SCGalleryViewControllerDelegate, SendSnapNavigationControllerDelegate, SCLagunaPairingDelegate>
{
    unsigned long long _context;
    unsigned int _recordingSession;
    SCManagedCapturerState *_managedCapturerState;
    SCCapturerToken *_capturerToken;
    NSString *_deviceOrientationToken;
    _Bool _askingVideoCapturePermissions;
    NSMutableSet *_scrollLocks;
    UIView *_cameraViewHolder;
    SCUserSession *_userSession;
    SCDeepLinkMiniProfileController *_deepLinkMiniProfileController;
    SCShareUsernameController *_shareUsernameController;
    _Bool _nightModeButtonPressedUsingBackCamera;
    double _beginningScale;
    double _panScale;
    long long _panOrientation;
    long long _panScaleNumFlips;
    double _pinchScale;
    double _longPressScale;
    double _longPressTotalOffset;
    double _longPressFlipTotalOffset;
    long long _longPressNumFlips;
    struct CGPoint _longPressOrigin;
    struct CGPoint _longPressLastPosition;
    _Bool _tookSnapForReset;
    unsigned long long _positionStartRecording;
    double _frontScaleStartRecording;
    double _backScaleStartRecording;
    _Bool _waitingUntilVisibleToBeginRecording;
    _Bool _forceTouchedWhileRecording;
    SCShazamManager *_shazamManager;
    SCShazamConfiguration *_shazamConfigurationDuringLongPress;
    SCShazamAudioCapturer *_audioCapturer;
    id <SCSearchVPControlling> _searchVPController;
    double _lastSuccessfulLensActivationTime;
    NSString *_lastSuccessfulLensActivationActivatorId;
    double _lastSuccessfulScanTime;
    double _longPressStartTime;
    SCSpringAnimationHeartbeat *_springAnimationHeartBeat;
    _Bool _isPassiveScanningEnabled;
    _Bool _duringLongPress;
    NSDate *_startRecordingTimestamp;
    SCCaptionState *_captionState;
    SCCaptionManager *_captionManager;
    id <SCChatQuickCaptionDelegate> _quickCaptionDelegate;
    SCMultiSnapSegment *_currentMultiSnapSegment;
    SCCameraToGallerySwipeTransitionCoordinator *_galleryTransitionCoordinator;
    double _startRecordingAnimationTime;
    SCManagedVideoNoSoundLogger *_videoNoSoundLogger;
    SCPromise *_imageCapturePromise;
    SCLazy *_searchEventAnnouncerCreator;
    SCRecordingFileManager *_recordingFileManager;
    _Bool _hasTriedCapturing;
    NSString *_lockRingingToken;
    SCScopedAccess *_scopedDeepLinkUserActionDelegate;
    SCFeatureCoordinator *_featureCoordinator;
    SCFeatureProvider *_featureProvider;
    SCPreviewPresenter *_previewPresenter;
    _Bool _isCreateYourOwnODLFlowPresented;
    _Bool _deprecateNavigationTransitioning;
    _Bool _requestedToTurnOnLenses;
    _Bool _askingAudioPermissions;
    _Bool _cameraError;
    _Bool _triedToCaptureImage;
    _Bool _pressingCameraButton;
    _Bool _recordedLengthTooShort;
    _Bool _resetCameraView;
    _Bool _warnedMicDisabled;
    _Bool _isResigningActive;
    _Bool _userTappedToFocus;
    _Bool _willHideNightModeButtonWithDelay;
    _Bool _pressingVolumeButton;
    _Bool _showingNeedCameraAccessAlertView;
    _Bool _shouldBrieflyRedisplayMapTooltip;
    id <AVCameraViewControllerDelegate> _delegate;
    id <SCSwipeViewParentDelegate> _parentDelegate;
    id <NavigationDelegate> _navigationDelegate;
    id <SCSnapSendPreparer> _snapSendPreparer;
    UIView *_cameraView;
    unsigned long long _recordingState;
    SCCameraOverlayView *_cameraOverlay;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SCMultiSnapCollectionViewController *_multiSnapViewController;
    SCMultiSnapV2CollectionViewController *_multiSnapV2ViewController;
    NSString *_captureSessionID;
    NSTimer *_shazamTimer;
    SCLensesUIControllerState *_lensControllerStateToRestore;
    SCLensesUIAppearanceConfiguration *_lensControllerAppearanceConfigurationToRestore;
    SCLensesUIControllerState *_pendingLensControllerState;
    SCLensesUIAppearanceConfiguration *_pendingLensControllerAppearanceConfiguration;
    SCLensSnapcodeARExperienceController *_lensSnapcodeARExperienceController;
    SCLensSonicController *_lensSonicController;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    SCLensInitLogger *_lensInitLogger;
    SCManagedLensProcessorState *_managedLensProcessorState;
    SCLensOperaController *_lensOperaController;
    unsigned long long _appearanceState;
    double _brightness;
    UIView *_privacyView;
    long long _replyCameraType;
    SCReplyParameters *_replyParameters;
    SCCameraVolumeButtonHandler *_volumeButtonHandler;
    double _cameraStartTime;
    SCGradientView *_tabBarGradientView;
    SCGradientView *_navBarGradientView;
    SCSnapCraftRealTimeBaseController *_snapCraftRealTimeController;
    CDUnknownBlockType _deeplinkUnlockDeferredBlock;
    SCManagedRecordingInterruptionReporter *_managedRecordingInterruptionReporter;
}

+ (id)exceptionalMethodsContexts;
+ (int)context;
+ (id)galleryPageViewName;
+ (id)cameraPageViewName;
+ (id)announcerIdentifier;
@property(retain, nonatomic) SCManagedRecordingInterruptionReporter *managedRecordingInterruptionReporter; // @synthesize managedRecordingInterruptionReporter=_managedRecordingInterruptionReporter;
@property(copy, nonatomic) CDUnknownBlockType deeplinkUnlockDeferredBlock; // @synthesize deeplinkUnlockDeferredBlock=_deeplinkUnlockDeferredBlock;
@property(nonatomic) _Bool shouldBrieflyRedisplayMapTooltip; // @synthesize shouldBrieflyRedisplayMapTooltip=_shouldBrieflyRedisplayMapTooltip;
@property(retain, nonatomic) SCSnapCraftRealTimeBaseController *snapCraftRealTimeController; // @synthesize snapCraftRealTimeController=_snapCraftRealTimeController;
@property(retain, nonatomic) SCGradientView *navBarGradientView; // @synthesize navBarGradientView=_navBarGradientView;
@property(retain, nonatomic) SCGradientView *tabBarGradientView; // @synthesize tabBarGradientView=_tabBarGradientView;
@property(nonatomic) double cameraStartTime; // @synthesize cameraStartTime=_cameraStartTime;
@property(nonatomic) _Bool showingNeedCameraAccessAlertView; // @synthesize showingNeedCameraAccessAlertView=_showingNeedCameraAccessAlertView;
@property(nonatomic) _Bool pressingVolumeButton; // @synthesize pressingVolumeButton=_pressingVolumeButton;
@property(retain, nonatomic) SCCameraVolumeButtonHandler *volumeButtonHandler; // @synthesize volumeButtonHandler=_volumeButtonHandler;
@property(nonatomic) _Bool willHideNightModeButtonWithDelay; // @synthesize willHideNightModeButtonWithDelay=_willHideNightModeButtonWithDelay;
@property(nonatomic) _Bool userTappedToFocus; // @synthesize userTappedToFocus=_userTappedToFocus;
@property(nonatomic) _Bool isResigningActive; // @synthesize isResigningActive=_isResigningActive;
@property(nonatomic) _Bool warnedMicDisabled; // @synthesize warnedMicDisabled=_warnedMicDisabled;
@property(nonatomic) _Bool resetCameraView; // @synthesize resetCameraView=_resetCameraView;
@property(nonatomic) _Bool recordedLengthTooShort; // @synthesize recordedLengthTooShort=_recordedLengthTooShort;
@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(nonatomic) long long replyCameraType; // @synthesize replyCameraType=_replyCameraType;
@property(retain, nonatomic) UIView *privacyView; // @synthesize privacyView=_privacyView;
@property(nonatomic) _Bool pressingCameraButton; // @synthesize pressingCameraButton=_pressingCameraButton;
@property(nonatomic) _Bool triedToCaptureImage; // @synthesize triedToCaptureImage=_triedToCaptureImage;
@property(nonatomic) _Bool cameraError; // @synthesize cameraError=_cameraError;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) _Bool askingAudioPermissions; // @synthesize askingAudioPermissions=_askingAudioPermissions;
@property(nonatomic) unsigned long long appearanceState; // @synthesize appearanceState=_appearanceState;
@property(retain, nonatomic) SCLensOperaController *lensOperaController; // @synthesize lensOperaController=_lensOperaController;
@property(retain, nonatomic) SCManagedLensProcessorState *managedLensProcessorState; // @synthesize managedLensProcessorState=_managedLensProcessorState;
@property(retain, nonatomic) SCLensInitLogger *lensInitLogger; // @synthesize lensInitLogger=_lensInitLogger;
@property(retain, nonatomic) id <SCLensCameraScreenDataProviderProtocol> lensDataProvider; // @synthesize lensDataProvider=_lensDataProvider;
@property(retain, nonatomic) SCLensSonicController *lensSonicController; // @synthesize lensSonicController=_lensSonicController;
@property(retain, nonatomic) SCLensSnapcodeARExperienceController *lensSnapcodeARExperienceController; // @synthesize lensSnapcodeARExperienceController=_lensSnapcodeARExperienceController;
@property(retain, nonatomic) SCLensesUIAppearanceConfiguration *pendingLensControllerAppearanceConfiguration; // @synthesize pendingLensControllerAppearanceConfiguration=_pendingLensControllerAppearanceConfiguration;
@property(retain, nonatomic) SCLensesUIControllerState *pendingLensControllerState; // @synthesize pendingLensControllerState=_pendingLensControllerState;
@property(retain, nonatomic) SCLensesUIAppearanceConfiguration *lensControllerAppearanceConfigurationToRestore; // @synthesize lensControllerAppearanceConfigurationToRestore=_lensControllerAppearanceConfigurationToRestore;
@property(retain, nonatomic) SCLensesUIControllerState *lensControllerStateToRestore; // @synthesize lensControllerStateToRestore=_lensControllerStateToRestore;
@property(nonatomic) _Bool requestedToTurnOnLenses; // @synthesize requestedToTurnOnLenses=_requestedToTurnOnLenses;
@property(retain, nonatomic) NSTimer *shazamTimer; // @synthesize shazamTimer=_shazamTimer;
@property(nonatomic) _Bool deprecateNavigationTransitioning; // @synthesize deprecateNavigationTransitioning=_deprecateNavigationTransitioning;
@property(readonly, nonatomic) NSString *captureSessionID; // @synthesize captureSessionID=_captureSessionID;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
@property(readonly, nonatomic) SCMultiSnapV2CollectionViewController *multiSnapV2ViewController; // @synthesize multiSnapV2ViewController=_multiSnapV2ViewController;
@property(readonly, nonatomic) SCMultiSnapCollectionViewController *multiSnapViewController; // @synthesize multiSnapViewController=_multiSnapViewController;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate; // @synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate;
@property(retain, nonatomic) SCCameraOverlayView *cameraOverlay; // @synthesize cameraOverlay=_cameraOverlay;
@property(nonatomic) unsigned long long recordingState; // @synthesize recordingState=_recordingState;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) __weak id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property(nonatomic) __weak id <AVCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)currentVideoZoomLevel;
- (void)didDismissMiniProfile:(id)arg1;
- (void)didPresentMiniProfile:(id)arg1;
- (void)_turnOnFrontFacingCameraAndActivateLens;
- (void)tryToActivateLensFromPushNotification;
- (_Bool)_asynchronousImageCaptureEnabled;
- (void)_activateSonicLensAfterStart;
- (void)_displayOpenLensTooltip;
- (_Bool)_isLensDisplayable;
- (void)_tryDisplayLensByDefault;
- (void)transitionCoordinator:(id)arg1 willFailWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 viewController:(id)arg4;
- (void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)_initGallerySwipeTransitionCoordinator;
- (void)willEndCensoringScreenshot;
- (void)willStartCensoringScreenshot;
- (_Bool)shouldDisableShakeToReportOnCurrentPage;
- (void)previewViewController:(id)arg1 didRenderFirstFrameForVideoURL:(id)arg2;
- (void)_setScreenAutoLockDisabledIfNeeded:(_Bool)arg1;
- (void)_sampleMultiSnapFrame;
- (id)sc_tabBarItem;
- (id)sc_navigationItem;
- (void)captionUpdatedWithText:(id)arg1;
- (void)setQuickCaptionState:(id)arg1 withDelegate:(id)arg2;
- (id)captionManager;
- (void)cancelledScrollingToProfileView;
- (void)scrollingToProfileView;
- (void)profileViewDidFullyDisappear;
- (void)profileViewDidFullyAppear;
- (void)_maybeShowMapTooltip;
- (_Bool)isCameraViewFullyVisible;
- (void)_recordCurrentZoomStateForReset;
- (void)miniProfileViewController:(id)arg1 didSendSnap:(id)arg2;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)searchVPPresentCards:(id)arg1;
- (void)shazamManagerDidSubmitSearchRequest;
- (id)_s2CellIdFromCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)shazamManagerDidFinish:(id)arg1;
- (void)_setupShazamAudioCapturerIfNeeded;
- (_Bool)_isShazamSupported;
- (void)presentActivityViewController:(id)arg1 shareUsernameController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)_resetCreateYourOwnFlowFromMainCarousel;
- (_Bool)isCreateYourOwnODLFlowPresented;
- (void)_presentCreateYourOwnFlowFromMainCarousel;
- (void)_presentOnDemandGeofilterViewControllers:(id)arg1;
- (void)updateLensPredicateWithFilterCondition:(id)arg1;
- (void)tryToActivateLensAfterUnlock:(id)arg1;
- (void)_handleLensActivation:(id)arg1;
- (void)scanResultViewController:(id)arg1 showMoreLensesFromLens:(id)arg2;
- (void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
- (void)_preloadPreviewAssetsOnce;
- (_Bool)isPresentingStoryInFriendsFeedTab;
- (_Bool)isPresentingScanResultsViewController;
- (void)_dismissScanCards;
- (void)_dismissCameraCardViewControllerWithDismissType:(unsigned long long)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentInformationIconCardView:(id)arg1;
- (void)presentScanResultView:(id)arg1;
- (void)presentScanResultViewControllerWithActionsInfo:(id)arg1 scanSource:(long long)arg2;
- (void)_handleScanResults:(id)arg1 withSuccess:(_Bool)arg2 scanSource:(long long)arg3;
- (void)_handleScanResults:(id)arg1 scanSource:(long long)arg2;
- (void)didScanFromPreview:(id)arg1 withResult:(id)arg2;
- (id)getScanResultViewController;
- (void)_setDeepLinkMetadata:(id)arg1;
- (id)deepLinkableViewController:(id)arg1 additionalInfo:(id)arg2;
- (void)didPostNewlyCreatedGroupStories:(id)arg1;
- (void)didPostStory;
- (void)didSaveSnapparameters:(id)arg1;
- (void)didSendChatMessage;
- (void)didSendDiscoverSharedMessageparameters:(id)arg1;
- (void)didSendSnaps:(id)arg1;
- (void)didSendToGallery;
- (void)didComeFromCameraWithoutSendingSnap;
- (void)didCancelFromPreview:(id)arg1;
- (void)managedCapturer:(id)arg1 didGetError:(id)arg2 forType:(long long)arg3 session:(CDStruct_4565c1ff)arg4;
- (void)managedCapturer:(id)arg1 didCapturePhoto:(id)arg2;
- (void)managedCapturer:(id)arg1 willCapturePhoto:(id)arg2 sampleMetadata:(id)arg3;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 willFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideoFuture:(id)arg4 videoSize:(struct CGSize)arg5 placeholderImage:(id)arg6;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)_handleFailedRecording:(id)arg1;
- (_Bool)_cleanupRecording;
- (_Bool)_tryCapturingWhenRecordingTooShort;
- (void)managedCapturer:(id)arg1 didChangePortraitModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeNightModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLowLightCondition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeFlashActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeFlashSupportedAndTorchSupported:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeARSessionActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)managedCapturerDidCallLenseResume:(id)arg1 session:(CDStruct_4565c1ff)arg2;
- (void)setCanFlipCamera:(_Bool)arg1;
- (void)cameraSetupAfterStart;
- (void)resetFocusAndExposureToDefaultsIfNecessary;
- (void)resetEffectiveScale;
- (void)stopCameraImmediately;
- (void)stopCameraSoftly;
- (void)stopCameraSoftlyAfter:(double)arg1 completionIfStopped:(CDUnknownBlockType)arg2;
- (double)disableCameraDelayWithLowPowerMode;
- (void)startCamera;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)pushAddedMeView;
- (void)pushQuickAddView;
- (void)recentFriendsButtonPressed;
- (_Bool)isGalleryViewCameraButtonVisible;
- (_Bool)lagunaTabViewVisible;
- (_Bool)galleryViewVisible;
- (void)logOnPageExit:(id)arg1;
- (id)cameraNavigationItem;
- (void)handleSwipeFrom:(id)arg1;
- (void)handleTapFrom:(id)arg1;
- (double)_beginningScaleFromZoomFactor:(double)arg1;
- (double)_finalEffectiveScale;
- (double)getOffsetFromVelocity:(struct CGPoint)arg1 deviceOrientation:(long long)arg2;
- (double)getOffsetFromVelocity:(struct CGPoint)arg1;
- (double)scaleChangeForOffset:(double)arg1;
- (double)scaleChangeForLocation:(struct CGPoint)arg1 fromTranslation:(struct CGPoint)arg2;
- (void)setRightSwipeGestureRecognizerEnabled;
- (void)setPanGestureRecognizerEnabled:(_Bool)arg1;
- (void)handlePanFrom:(id)arg1;
- (double)_calculateLongPressScaleFromOffset;
- (double)_calculateEffectiveScaleWithChangedScale:(double *)arg1;
- (void)handlePinchFrom:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)currentRemoteUser;
- (void)appStartupDidComplete;
- (id)mainSuperview;
- (void)setGalleryButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)interactingWithCamera;
- (_Bool)shouldRecognizeButtonActions;
- (void)sonicLensToggleButtonPressed;
- (void)memoriesButtonPressed;
- (void)navBarLensButtonPressed;
- (void)snapCraftButtonPressed;
- (void)cameraOverlayXButtonPressed;
- (void)replyBackButtonLeftPressed;
- (void)replyBackButtonRightPressed;
- (void)_togglePortraitMode;
- (void)portraitModeButtonPressed;
- (void)_nightModeDidToggle:(id)arg1;
- (void)_flipNightModeActiveness;
- (void)nightModeButtonPressed;
- (void)lensCallToActionButtonPressed:(id)arg1;
- (void)thirdPartyLensInformationButtonPressed:(id)arg1;
- (void)toggleLensesButtonPressed;
- (void)showLensesActivationTooltipIfNecessary;
- (void)updateSnapCountBeforeShowLensesActivationTooltip;
- (struct CGRect)convertCameraTimerRectToView:(id)arg1;
- (void)showCameraTimer;
- (void)hideCameraTimer;
- (void)volumeButtonHandlerDidEndPressingVolumeButton:(id)arg1;
- (void)volumeButtonHandlerDidBeginPressingVolumeButton:(id)arg1;
- (void)abortPressingVolumeButtonAndEndRecording;
- (_Bool)shouldHandleVolumeButtonEvents;
- (void)stopHandlingVolumeButtonEvents;
- (void)startHandlingVolumeButtonEvents;
- (void)setNavigationItemsAlpha:(double)arg1;
- (void)scrollToCameraAnimated:(_Bool)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cameraOverlayViewDidSelectCreateYourOwnLens:(id)arg1;
- (void)cameraOverlayView:(id)arg1 setAllInterfaceElementsHidden:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)cameraOverlayView:(id)arg1 didUpdateCameraViewType:(long long)arg2;
- (void)cameraOverlayView:(id)arg1 didTapOnProfileTooltipWithFriend:(id)arg2;
- (void)flashPressed;
- (void)_toggleCameraForBrightnessAdjustment;
- (void)toggleCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)toggleCameraButtonPressed;
- (_Bool)tryCapturingStillImage;
- (void)endRecording:(_Bool)arg1 withMethod:(unsigned long long)arg2;
- (void)endRecordingWithMethod:(unsigned long long)arg1;
- (void)abortRecording;
- (void)_setupRecordLifecyleEventsAndStartWithMethod:(unsigned long long)arg1;
- (void)prepareForRecordingWithMethod:(unsigned long long)arg1;
- (void)doubleTap:(id)arg1;
- (void)trackCameraPageActionEventWithStartX:(double)arg1 startY:(double)arg2 endX:(double)arg3 endY:(double)arg4 duration:(double)arg5 module:(long long)arg6 firstUsage:(_Bool)arg7 action:(long long)arg8 lensActivator:(id)arg9;
- (void)fetchShazamArtistList:(id)arg1;
- (void)longPress:(id)arg1;
- (void)_toggleCameraButtonsVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)enableScanning;
- (void)longPressOnCameraTimer:(id)arg1;
- (void)logTabBarRecordingFromOtherPage:(_Bool)arg1;
- (_Bool)isPressingCameraButtonOrVolumeButton;
- (void)resetAll;
- (void)resetCameraTimer;
- (void)_resetTrophyMetricsAndLongPressTotalOffset;
- (void)_transitionToRecordingStateWithAnimationDuration:(double)arg1;
- (void)setNavigationItemsHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)resetButtons;
- (void)startRecordingWithMethod:(unsigned long long)arg1;
- (void)_showLensesInDirectReplyIfNeeded;
- (id)lensProcessingCore;
- (void)logOnCameraExit:(id)arg1;
- (_Bool)_isMainCameraViewAndBackFacing;
- (_Bool)_isMainCameraView;
- (void)_resetPreviewPresenter;
- (id)previewPresenter;
- (void)_presentPreviewForVideoFuture:(id)arg1;
- (void)_presentPreviewForImageFuture:(id)arg1 async:(_Bool)arg2;
- (_Bool)isPresentingPreviewViewController;
- (void)showRecordedVideoIfNecessary;
- (void)_updateOrientation:(long long)arg1;
- (void)handleMediaServicesLostNotification:(id)arg1;
- (void)handleMediaServicesResetNotification:(id)arg1;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (void)viewWillEnterForeground;
- (void)viewDidEnterBackground;
- (void)setNoReply;
- (void)setReplyWithParameter:(id)arg1 cameraViewType:(long long)arg2;
- (_Bool)isInReplyingMode;
- (_Bool)canPullDownToProfile;
- (_Bool)canPullDownToSearch;
- (_Bool)canEnterSearch;
- (void)viewDidAppearAtOffset:(double)arg1;
- (void)viewDidPartiallyAppear;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyDisappear;
- (void)viewDidFullyAppear;
- (void)viewCanAppear;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setCameraOverlayFrameHeight:(double)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)statusBarTapped;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)canShowStatusBarOverlay;
- (void)_initLaguna;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)addObservers;
- (void)_quickCaptionTapped:(id)arg1;
- (void)viewDidLoad;
- (id)profileButtonView;
- (void)displayHelpIfNecessary;
- (_Bool)_areLensesActiveWithCurrentConfiguration;
- (_Bool)isFlashOnWithCurrentConfiguration;
- (_Bool)isFlashSupportedWithCurrentConfiguration;
- (void)nightModeResetIfNeeded;
- (void)nightModeHideWithDelayIfNeeded;
- (void)resetView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_logNoCamera:(id)arg1 authorization:(long long)arg2;
- (void)_alertWithTitle:(id)arg1 description:(id)arg2;
- (void)_alertNoCamera;
- (void)_alertCameraRestrictionOn;
- (void)notifyUserOfRestrictedCameraIfNecessary;
- (_Bool)notifyUserOfDeniedCameraIfNecessary;
- (_Bool)notifyUserOfCameraAndMicrophoneUsageIfNecessary;
- (void)notifyUserOfMicrophoneUsageIfNecessary;
- (void)notifyUserAfterStartCameraIfNecessary;
- (void)viewDidLayoutSubviews;
- (void)setupCaptureVideoPreviewView;
- (void)_popVerticalViewsIfNeeded;
- (id)profileCoordinator;
- (void)delayBackgroundScanForLagunaPairing;
- (void)warmupGalleryForLagunaPairing;
- (void)scrollToGalleryLagunaWithPairingSessionInfo:(id)arg1;
- (void)scrollGalleryToFeaturedTab;
- (void)scrollGalleryToLagunaTab;
- (void)scrollToGalleryFromCameraAnimated:(_Bool)arg1;
- (void)scrollToCameraFromGalleryAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlockScrollWithKey:(id)arg1;
- (void)lockScrollWithKey:(id)arg1;
- (void)_unlockAllScrollWithKey:(id)arg1;
- (void)_lockAllScrollWithKey:(id)arg1;
- (void)hidePrivacyView;
- (void)showPrivacyView;
@property(readonly, nonatomic) SCCameraToGallerySwipeTransitionCoordinator *galleryTransitionCoordinator;
@property(readonly, nonatomic) SCGalleryViewController *galleryViewController;
- (void)_resetMultiSnapViewIfNeeded;
- (void)_configureMultiSnapView:(id)arg1;
- (void)_addMultiSnapViewIfNeeded;
- (struct CGRect)_multiSnapViewFrame;
- (void)_initNavigationBarRightButtonItems;
- (void)loadView;
- (_Bool)inCaptureFlow;
- (_Bool)preparingPreview;
- (_Bool)hasTakenPicture;
- (_Bool)takingPicture;
- (_Bool)initiatedRecording;
- (_Bool)preparingRecording;
- (_Bool)recording;
- (id)captureSessionIDForLog;
- (void)finishSnapCaptureSession;
- (void)cancelSnapCaptureSession;
- (void)startSnapCaptureSession;
- (_Bool)compatibilityZoomingMode;
- (id)getPageViewName;
- (id)initWithCapturerToken:(id)arg1 userSession:(id)arg2 context:(unsigned long long)arg3 lensDataProvider:(id)arg4;
- (id)initWithCapturerToken:(id)arg1 userSession:(id)arg2 context:(unsigned long long)arg3;
- (id)initWithCapturerToken:(id)arg1 userSession:(id)arg2;
- (_Bool)shouldBeSilentlyPresentedAndPauseOpera;
- (_Bool)setNextImageFromMemoriesForLensWithId:(id)arg1;
- (void)removeLens:(id)arg1;
- (void)managedLensProcessor:(id)arg1 didChangeState:(id)arg2;
- (void)prepareForARSessionRunningStateChange:(id)arg1;
- (void)lensSnapcodeARExperienceControllerDidAskToPerformAction:(id)arg1;
- (void)lensSnapcodeARExperienceController:(id)arg1 didAskToStopWithCompletion:(CDUnknownBlockType)arg2;
- (void)_studioPreviewLensShouldReloadIfNeeded:(id)arg1;
- (void)_studioPreviewLensShouldActivate:(id)arg1;
- (void)_logFailedLensInitDelay;
- (void)_logSuccessLensInitDelay;
- (void)_createLensInitLogger;
- (void)captureSnapImage;
- (void)stopSnapRecording;
- (void)startSnapRecording;
- (void)_processLensesActivationForSnapcodeCategory:(id)arg1;
- (void)_processLensesActivationForForUICategory:(id)arg1;
- (void)_processLensesActivationFromGestureType:(unsigned long long)arg1 gestureCount:(long long)arg2 point:(struct CGPoint)arg3 lenses:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (_Bool)tryToActivateLensesWithTapGestureRecognizer:(id)arg1 originalPoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)tryToActivateLensesWithLongPressGestureRecognizer:(id)arg1 originalPoint:(struct CGPoint)arg2 retryOnFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)tryToActivateLensesWithActivationParameters:(id)arg1 activationState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)tryToActivateLensesWithActivationState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isSnapcodeLensDetectionAllowed;
- (_Bool)_isAnyLensDetectionAllowed;
- (_Bool)_isAnyLensActivationAllowed;
- (void)_saveLensState;
- (void)_clearLensState;
- (void)_resetLensStateForce:(_Bool)arg1;
- (void)_resetLensStateIfNeded;
- (void)resetLensState;
- (_Bool)restoreLensState;
- (long long)_snapSourceForPageSource;
- (void)_turnLensesOn:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deactivateSonicLens;
- (void)activateSonicLens;
- (void)toggleSonicLens;
- (id)turnLensesOnAndSelectFirstApplicableLens;
- (void)turnLensesOnWithActivationParameters:(id)arg1 activationState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)turnLensesOnWithActivationParameters:(id)arg1 activationState:(id)arg2;
- (void)turnLensesOnWithActivationState:(id)arg1;
- (void)turnLensesOn;
- (void)turnLensesOff;
- (void)turnLensesOffWithCompletion:(CDUnknownBlockType)arg1;
- (void)lensOperaController:(id)arg1 didClosePresenter:(id)arg2;
- (void)lensOperaController:(id)arg1 didOpenPresenter:(id)arg2;
- (void)dismissLensOperaPresenter;
- (void)showMoreLensesViewForLens:(id)arg1;
- (void)showCallToActionViewForLens:(id)arg1;
- (void)_prepareLensOperaController;
- (void)showScanCardForThirdPartyLens:(id)arg1;
- (id)_constructScanData:(id)arg1;
- (id)_lensIdToRestoreWithShowBirthdayReplyLens:(_Bool)arg1;
- (_Bool)updateLensCarouselVisibilityForState:(id)arg1 showBirthdayReplyLens:(_Bool)arg2 animated:(_Bool)arg3;
- (id)_snapcodeARLenses;
- (_Bool)isSonicLensInteractive;
- (_Bool)isARExperienceActive;
- (void)setUpLensProcessorDependants;
- (void)useLiveCameraLensDataProvider;
- (void)useReplyCameraLensDataProvider;
- (void)setUpLensesWithUserSession:(id)arg1 context:(unsigned long long)arg2 lensDataProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

