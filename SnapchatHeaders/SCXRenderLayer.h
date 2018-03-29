//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, EAGLContext, MGLMapView, NSArray, NSMutableArray, NSMutableSet, NSString, SCThrottleTimer, SCXBlackOverlayRenderer, SCXDoodleSpriteRenderer, SCXHeatmapRenderer, SCXOpenGLStyleLayer, SCXOverlaySpriteRenderer, SCXPathRenderer, SCXRenderContext, SCXRenderLockManager, SCXShadedRadiusRenderer, SCXStandingObjectsRenderer, SCXTapAnimationViewStateManager, SCXTapCircleRenderer, SCXThumbnailViewStateManager;
@protocol SCXRenderLayerDelegate;

@interface SCXRenderLayer : NSObject
{
    MGLMapView *_mapView;
    SCXRenderContext *_renderContext;
    NSMutableArray *_nonHeatmapRenderers;
    NSMutableArray *_heatmapRenderers;
    SCXHeatmapRenderer *_heatmap;
    SCXBlackOverlayRenderer *_blackOverlay;
    SCXDoodleSpriteRenderer *_backgroundSprites;
    SCXStandingObjectsRenderer *_standingObjects;
    SCXOverlaySpriteRenderer *_overlaySprites;
    SCXTapCircleRenderer *_tapAnimationRenderer;
    SCXPathRenderer *_pathRenderer;
    SCXShadedRadiusRenderer *_shadedRadiusRenderer;
    SCXThumbnailViewStateManager *_thumbnailViewStateManager;
    SCXTapAnimationViewStateManager *_tapAnimationViewStateManager;
    EAGLContext *_workaroundContext;
    SCThrottleTimer *_displayThrottleTimer;
    _Bool _wantsVisibilityRender;
    CADisplayLink *_spriteAnimationDisplayLink;
    SCXOpenGLStyleLayer *_nonHeatmapOpenGLStyleLayer;
    SCXOpenGLStyleLayer *_heatmapOpenGLStyleLayer;
    _Bool _loggedLockedDraw;
    _Bool _heatmapDecidedToContinueRendering;
    _Bool _isTileFetchingPaused;
    _Bool _shouldPeriodicallyRefreshTileSetId;
    SCXRenderLockManager *_renderLockManager;
    id <SCXRenderLayerDelegate> _delegate;
    NSString *_willEnterBackgroundNotificationName;
}

+ (void)sortSprites:(id)arg1;
@property(copy, nonatomic) NSString *willEnterBackgroundNotificationName; // @synthesize willEnterBackgroundNotificationName=_willEnterBackgroundNotificationName;
@property(nonatomic) __weak id <SCXRenderLayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldPeriodicallyRefreshTileSetId; // @synthesize shouldPeriodicallyRefreshTileSetId=_shouldPeriodicallyRefreshTileSetId;
@property(nonatomic) _Bool isTileFetchingPaused; // @synthesize isTileFetchingPaused=_isTileFetchingPaused;
@property(readonly, nonatomic) SCXRenderLockManager *renderLockManager; // @synthesize renderLockManager=_renderLockManager;
@property(readonly, nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)_updateOpacityForSprite:(id)arg1 opacity:(float)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateWidthInterpolatorForSprite:(id)arg1 widthInterpolator:(CDUnknownBlockType)arg2 duration:(double)arg3;
- (void)_updateLocationForSprite:(id)arg1 location:(id)arg2 duration:(double)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewRegionIsChanging:(id)arg1;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)renderLockManager:(id)arg1 effectiveLockTypeDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)mediaManager:(id)arg1 didLoadEmoji:(id)arg2;
- (void)mediaManager:(id)arg1 didCreateLabel:(id)arg2;
- (void)mediaManager:(id)arg1 didLoadThumbnail:(id)arg2;
- (void)tileMetadataManager:(id)arg1 didLoadTileMetadataForTileIds:(id)arg2;
- (void)tileManager:(id)arg1 didLoadTiles:(id)arg2;
- (void)_setMapNeedsDisplay;
@property(readonly, nonatomic) unsigned long long viewportMaxGameMarkersCount;
@property(readonly, nonatomic) unsigned long long totalHeatPoints;
@property(readonly, nonatomic) _Bool allSpritesLoaded;
@property(readonly, nonatomic) _Bool contentTilesLoaded;
@property(readonly, nonatomic) _Bool allStoryThumbnailsLoaded;
- (void)removeTravelPathFromMap:(id)arg1;
- (void)addTravelPathToMap:(id)arg1;
- (id)pointsOfInterestSizeEquation;
- (int)numTilesLoaded;
- (id)getCurrentPoiTileSetId;
- (id)getCurrentHeatTileSetId;
- (void)_spriteAnimationTick;
- (void)_startSpriteAnimationTimer;
- (void)updateSpriteRenderOrder;
- (id)tileMetadataForCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2;
- (id)spritesAtScreenPoint:(struct CGPoint)arg1;
- (void)removeDoodleSpriteFromMap:(id)arg1;
- (void)removeOverlaySpriteFromMap:(id)arg1;
- (void)addDoodleSpriteToMap:(id)arg1;
- (void)addOverlaySpriteToMap:(id)arg1;
- (void)removeClustersFromMap:(id)arg1;
- (void)addClustersToMap:(id)arg1;
- (void)bindTextureToSprite:(id)arg1 imageIdentifier:(id)arg2 imageFetcher:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hideCalloutForPoi:(id)arg1;
- (_Bool)isCalloutSpriteForPoi:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)_setWidthForCalloutSprite:(id)arg1 withCalloutImage:(id)arg2;
- (void)_setLocationForCalloutSprite:(id)arg1 poi:(id)arg2 withCalloutImage:(id)arg3;
- (void)showCalloutForPoi:(id)arg1 title:(id)arg2;
- (void)_sortClusters:(id)arg1;
- (void)_sortInnerClusters:(id)arg1;
- (void)_sortDoodleSprites:(id)arg1;
- (void)_sortSprites:(id)arg1;
- (void)updateOptions:(id)arg1 tileFetcher:(id)arg2;
@property(readonly, nonatomic) NSMutableSet *nonCollidedPoiIds;
@property(retain, nonatomic) NSArray *overridePois;
- (void)setOverridePois:(id)arg1 poiTileSetId:(id)arg2;
- (void)animateBlackOverlayLayerOpacity:(id)arg1;
@property(nonatomic) float blackOverlayLayerOpacity;
- (void)animateSpriteLayerOpacity:(id)arg1;
@property(nonatomic) float spriteLayerOpacity;
- (void)animateHeatmapLayerOpacity:(id)arg1;
@property(nonatomic) float heatmapLayerOpacity;
- (void)animatePOILayerOpacity:(id)arg1;
@property(nonatomic) _Bool ignoringSpriteCollisions;
@property(nonatomic) float unlockablePoiOpacity;
@property(nonatomic) float poiLayerOpacity;
- (double)maxFuzzRadiusInViewport;
- (void)hideRadiusAroundPoi:(id)arg1 duration:(double)arg2;
- (void)shadeRadiusAroundPoi:(id)arg1 radius:(double)arg2 duration:(double)arg3;
- (CDUnknownBlockType)addTapAnywhereAnimationAtCoords:(struct CLLocationCoordinate2D)arg1;
- (void)removeLoadingSpinnerFromPointOfInterest:(id)arg1;
- (void)addLoadingSpinnerToPointOfInterest:(id)arg1;
- (_Bool)shrinkPointOfInterest:(id)arg1 duration:(double)arg2;
- (_Bool)enlargePointOfInterest:(id)arg1 duration:(double)arg2;
- (_Bool)undepressPointOfInterest:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)depressPointOfInterest:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_scalePointOfInterest:(id)arg1 duration:(double)arg2 finalScale:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setThumbnailHidden:(_Bool)arg1 forPointOfInterest:(id)arg2;
- (struct CGRect)thumbnailFrameForPointOfInterest:(id)arg1;
- (void)logTileSetInfo;
- (void)logAllPointsOfInterestOnScreen;
- (id)pointsOfInterestInScreenBounds;
- (id)pointsOfInterestAtScreenPoint:(struct CGPoint)arg1 withActionType:(int)arg2;
- (id)pointsOfInterestAtScreenPoint:(struct CGPoint)arg1;
- (void)debugLogData;
- (void)scheduleDisplay;
- (void)setNeedsDisplay;
- (void)forceDisplay;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterBackground:(id)arg1;
- (void)mapViewWillBePresented;
- (void)removeFromMapView;
- (_Bool)_contextHasNonHeatmapAnimationsInProgress:(id)arg1;
- (_Bool)_contextHasHeatmapAnimationsInProgress:(id)arg1;
- (_Bool)_contextHasAnimationsInProgress:(id)arg1;
- (_Bool)_shouldContinueRenderingHeatmap:(id)arg1;
- (_Bool)_shouldContinueRenderingNonHeatmap:(id)arg1;
- (void)_cleanupNonHeatmapLayer;
- (void)addToMapbox:(id)arg1;
- (void)_addNonHeatmapLayerToMapView:(id)arg1 belowLayerWithIdentifier:(id)arg2;
- (void)_addHeatmapLayerToMapView:(id)arg1 belowLayerWithIdentifier:(id)arg2;
- (void)_addLayer:(id)arg1 belowLayerWithIdentifier:(id)arg2;
- (void)_render:(id)arg1 context:(struct MGLStyleLayerDrawingContext)arg2;
- (void)_completeRenderers:(id)arg1;
- (void)_prepareRenderers:(id)arg1;
- (void)_prepareMediaManagerIfNecessary;
- (void)_allowLoggingLockedDraw;
- (void)_logLockedDrawOnce;
- (void)_deregisterBackgroundingNotificationHandlers;
- (void)_registerBackgroundingNotificationHandlers;
- (float)distanceBetweenPoint:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (void)mapViewDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithTileFetcher:(id)arg1 mediaFetcher:(id)arg2 gameStateProvider:(id)arg3 options:(id)arg4;
- (CDUnknownBlockType)_drawClusterStatus:(id)arg1 animated:(_Bool)arg2 spriteManager:(id)arg3 widthInterpolator:(CDUnknownBlockType)arg4 userSession:(id)arg5;
- (CDUnknownBlockType)_drawSoloStatus:(id)arg1 animated:(_Bool)arg2 spriteManager:(id)arg3 widthInterpolator:(CDUnknownBlockType)arg4 userSession:(id)arg5;
- (CDUnknownBlockType)drawStatus:(id)arg1 animated:(_Bool)arg2 spriteManager:(id)arg3 widthInterpolator:(CDUnknownBlockType)arg4 userSession:(id)arg5;

@end

