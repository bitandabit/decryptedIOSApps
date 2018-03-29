//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCContextCardLoaderDelegate-Protocol.h"
#import "SCContextCardsProvider-Protocol.h"
#import "SCMapTouchResponder-Protocol.h"

@class MGLMapView, NSString, SCContextCardLoader, SCContextCardsController, SCContextSession, SCMTPointOfInterest, SCMapRequest, SCUserSession, SCXRenderLayer;
@protocol SCMapMarkerControllerDelegate;

@interface SCMapMarkerController : NSObject <SCContextCardLoaderDelegate, SCContextCardsProvider, SCMapTouchResponder>
{
    SCMTPointOfInterest *_selectedMapMarker;
    SCMTPointOfInterest *_depressedMapMarker;
    SCContextCardsController *_contextCardsController;
    SCContextSession *_contextSession;
    SCContextCardLoader *_cardLoader;
    SCMapRequest *_cardsRequest;
    MGLMapView *_mapView;
    SCXRenderLayer *_renderLayer;
    SCUserSession *_userSession;
    id <SCMapMarkerControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMapMarkerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak SCXRenderLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
@property(readonly, nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)_cancelFetch;
- (id)_loadingMapCardsViewModel;
- (_Bool)_hasCalloutAtPoint:(struct CGPoint)arg1;
- (id)_mapMarkerAtPoint:(struct CGPoint)arg1;
- (_Bool)showLoadingCards;
- (void)cardsResponse:(CDUnknownBlockType)arg1;
- (void)cardsLoaded:(id)arg1;
- (void)cardLoadError:(id)arg1;
- (id)_getMockResponse;
- (id)_createCardsView;
- (void)didZoomMap;
- (void)didPanMap;
- (void)priorResponderDidHandleTouch:(id)arg1;
- (void)didCancelTouchOnMapWithReason:(id)arg1;
- (struct SCMapTouchResponderResult)didLongPressOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchUpOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchDownOnMapAtPoint:(struct CGPoint)arg1;
- (void)_centerCameraOnMarker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleTapOnMarker:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)_showCardsForMarker:(id)arg1;
- (void)deselectSelectedMapMarker;
- (id)initWithMapView:(id)arg1 renderLayer:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

