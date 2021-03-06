//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCManagedCapturerListener-Protocol.h"
#import "SCMapTransitionAnimatorDelegate-Protocol.h"
#import "SCMapViewControllerDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MainViewController, NSString, SCDoubleTapZoomGestureRecognizer, SCLocationSharingNotificationController, SCMapBitmojiPreloader, SCMapTransitionAnimator, SCMapViewController, SCPinchLevelGestureRecognizer, SCUserSession, UIView, UIViewController;
@protocol NavigationDelegate;

@interface SCMapPresenter : NSObject <SCManagedCapturerListener, SCMapTransitionAnimatorDelegate, SCMapViewControllerDelegate, SCTimeProfilable, UIGestureRecognizerDelegate>
{
    SCDoubleTapZoomGestureRecognizer *_doubleTapZoomGestureRecognizer;
    SCPinchLevelGestureRecognizer *_pinchGestureRecognizer;
    double _latestZoomFactor;
    _Bool _gestureCanTransitionToMap;
    unsigned long long _dismissDestinationDashboardItem;
    unsigned long long _originalDashboardItem;
    UIViewController *_originalPresentingViewController;
    UIView *_originalPresentingView;
    UIView *_originalPresentingSuperview;
    _Bool _shouldDeferRelease;
    SCMapViewController *_deferredReleaseMapViewController;
    SCMapBitmojiPreloader *_bitmojiPreloader;
    SCLocationSharingNotificationController *_locationSharingNotificationController;
    SCMapViewController *_mapViewController;
    id <NavigationDelegate> _navigationDelegate;
    MainViewController *_mainViewController;
    SCUserSession *_userSession;
    SCMapTransitionAnimator *_transitionAnimator;
}

+ (int)context;
@property(retain, nonatomic) SCMapTransitionAnimator *transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak MainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(retain, nonatomic) SCMapViewController *mapViewController; // @synthesize mapViewController=_mapViewController;
- (void).cxx_destruct;
- (_Bool)transitionAnimatorShouldShowTabView:(id)arg1;
- (unsigned long long)dashboardItemForTransitionAnimator:(id)arg1;
- (_Bool)transitionAnimatorShouldBeInteractive:(id)arg1;
- (void)transitionAnimatorDidComplete:(id)arg1;
- (void)transitionAnimatorDidCancel:(id)arg1;
- (void)transitionAnimatorDidBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)mapViewController:(id)arg1 wantsDismissalToDestination:(long long)arg2;
- (void)managedCapturer:(id)arg1 didChangeZoomFactor:(id)arg2;
- (_Bool)_isCameraZoomedIn;
- (void)_gestureRecognizer:(id)arg1 didCauseTransitionPercent:(double)arg2;
- (void)_onPinch:(id)arg1;
- (void)_onDoubleTapZoom:(id)arg1;
- (void)_releaseMapViewController;
- (void)_mapPresentationComplete;
- (void)_mapDismissalCancelled;
- (void)_mapDismissalBegan;
- (void)_mapDismissed;
- (void)_mapPresentationCancelComplete;
- (void)_mapPresentationCancelled;
- (void)_mapPresentationBegan;
- (unsigned long long)_dashboardItemForViewController:(id)arg1;
- (void)_scrollVisibleVCToDashboardItem:(unsigned long long)arg1;
- (void)_hideCameraUI:(_Bool)arg1;
- (_Bool)_isGestureRecognizerConflictingWithLensLogoPicker:(id)arg1;
- (void)_ensureTouchHandlingWithTouch:(id)arg1;
- (void)_attachToMainViewController;
- (_Bool)handleAppNotification:(id)arg1;
- (void)cancelGestures;
- (_Bool)shouldDismissMapWhenRecoveringFromBackground;
- (_Bool)isMapPresented;
- (void)presentMapIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)travelToDefaultViewportAnimated:(_Bool)arg1 openSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)travelToFriendWithUserId:(id)arg1 openSource:(long long)arg2 friendViewSource:(long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)travelToAddress:(id)arg1 openSource:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)travelToCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 displayText:(id)arg3 poiId:(id)arg4 openSource:(long long)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMainViewController:(id)arg1 userSession:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

