//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCMapTapToPlayLaunch-Protocol.h"
#import "SCMapTapToPlayPresenterDelegate-Protocol.h"

@class FriendStories, MGLMapView, NSDate, NSString, SCContextSession, SCMapRequest, SCMapTapToPlayLogger, SCMapTapToPlayPresenter, SCStatusBarOverlayLabelWindow, SCUserSession, SCXRenderLayer;
@protocol SCMapTouchResponderPresentationDelegate;

@interface SCMapTapToPlayAnywhere : NSObject <SCMapTapToPlayPresenterDelegate, SCMapTapToPlayLaunch>
{
    NSString *_instanceIdentifier;
    struct CLLocationCoordinate2D _coordinate;
    SCMapTapToPlayLogger *_tapToPlayLogger;
    SCUserSession *_userSession;
    unsigned long long _state;
    NSDate *_animationStartTime;
    CDUnknownBlockType _animationCallback;
    SCMapRequest *_manifestRequest;
    FriendStories *_friendStories;
    SCMapTapToPlayPresenter *_presenter;
    SCStatusBarOverlayLabelWindow *_statusOverlay;
    id <SCMapTouchResponderPresentationDelegate> _delegate;
    MGLMapView *_mapView;
    SCXRenderLayer *_mapRenderLayer;
}

@property(nonatomic) __weak SCXRenderLayer *mapRenderLayer; // @synthesize mapRenderLayer=_mapRenderLayer;
@property(nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <SCMapTouchResponderPresentationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logPlayAttemptWithResult:(long long)arg1;
@property(readonly, copy) NSString *description;
- (void)_safeAnimationCompletionShowingFailure:(_Bool)arg1;
- (_Bool)_isScreenPointInsideAnimation:(struct CGPoint)arg1;
- (float)_computeMetersRadiusForAnimation;
- (struct CGPoint)_centerScreenPoint;
- (double)_animationDelayRequired;
- (_Bool)isInstanceTerminated:(id)arg1;
- (_Bool)_validateChangeToState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1;
- (_Bool)_performHapticError;
- (void)_showErrorWithText:(id)arg1;
- (void)_cleanup;
- (void)_presentationDidFailWithResult:(long long)arg1;
- (_Bool)_needsScheduleBlockAfterAnimation:(CDUnknownBlockType)arg1;
- (void)_failWithNoSnapsFoundFailure;
- (void)_storyMediaRequestCompleted;
- (void)_failWithManifestErrorFailure;
- (void)_manifestRequestCompleted:(id)arg1 error:(id)arg2;
- (void)mapTapToPlayPresenter:(id)arg1 didBeginPlayingFriendStories:(id)arg2;
- (void)didDismissTapToPlayPresenter:(id)arg1;
- (id)baseViewForFriendStories:(id)arg1;
- (id)shakeLogDescription;
- (id)visibleStory;
- (_Bool)isPresentingStory;
- (void)dismissStory;
- (_Bool)isActive;
- (void)_cancelWithReason:(id)arg1;
- (void)didPanMap;
- (void)didZoomMap;
- (void)priorResponderDidHandleTouch:(id)arg1;
- (void)didCancelTouchOnMapWithReason:(id)arg1;
- (void)_moveToRequestingManifest;
- (void)_moveToTouchingDownForCoordiante:(struct CLLocationCoordinate2D)arg1;
- (struct SCMapTouchResponderResult)didTouchUpOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didLongPressOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchDownOnMapAtPoint:(struct CGPoint)arg1;
- (void)startTapAnywhereForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithTapToPlayLogger:(id)arg1 userSession:(id)arg2 mapView:(id)arg3 renderLayer:(id)arg4 delegate:(id)arg5;
@property(retain, nonatomic) SCContextSession *contextSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

