//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCAltitudeFilterViewDelegate-Protocol.h"
#import "SCGeoFilterViewDelegate-Protocol.h"
#import "SCSmartCarouselFilterArrangerDelegate-Protocol.h"
#import "SCSmartCarouselFilterArrangerSwipeStateDataSource-Protocol.h"
#import "SCVenueFilterViewDelegate-Protocol.h"
#import "SCWeatherFilterViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCDrawingView, SCFilterCarouselLoggingParameters, SCFilterView, SCGeoFilterLogger, SCImageProcessLookseryEffectCommand, SCPreviewFilterItem, SCSmartCarouselFilterArranger, SCSmartSwipeFilterDebugView, SCSmartSwipeFilterViewStackingManager, SCSnapCommonLoggingParameters, SCStickerContainer, SCUnlockableGeoFilterTracker, SCUserSession, UICollectionView, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer;
@protocol SCSmartSwipeFilterViewDelegate;

@interface SCSmartSwipeFilterView : UIView <SCGeoFilterViewDelegate, SCAltitudeFilterViewDelegate, SCWeatherFilterViewDelegate, SCVenueFilterViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, SCSmartCarouselFilterArrangerDelegate, SCSmartCarouselFilterArrangerSwipeStateDataSource, UICollectionViewDelegate>
{
    SCDrawingView *_drawingView;
    SCStickerContainer *_stickerContainer;
    UIView *_purikuraContainerView;
    UIImageView *_purikuraView;
    long long _sectionCorrection;
    _Bool _isLongPressing;
    _Bool _didSwipeInDoubleSwipingState;
    _Bool _shouldExitDoubleSwipingAfterDeceleration;
    struct CGPoint _longPressStartPoint;
    SCSmartSwipeFilterDebugView *_debugView;
    _Bool _handledLongPress;
    long long _currentIndexWhenDoubleSwipeRecoveryStarted;
    SCPreviewFilterItem *_currentFilterItemBeforeSwipeOrderReload;
    _Bool _animateEnabled;
    SCImageProcessLookseryEffectCommand *_lensCommand;
    _Bool _isVideoSnap;
    _Bool _doubleSwipingEnabled;
    _Bool _isLagunaMedia;
    _Bool _contextFilterIsSeen;
    _Bool _visualFilterIsSeen;
    id <SCSmartSwipeFilterViewDelegate> _delegate;
    UICollectionView *_filterCollectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SCFilterCarouselLoggingParameters *_filterCarouselLoggingParameters;
    NSMutableDictionary *_filterStateDict;
    SCSmartCarouselFilterArranger *_filterArranger;
    NSMutableDictionary *_filterViewDict;
    SCFilterView *_unfilteredView;
    NSArray *_mediaFilterNames;
    long long _orientation;
    unsigned long long _swipeSequenceNumber;
    long long _state;
    SCSmartSwipeFilterViewStackingManager *_stackingManager;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    long long _firstSwipeDirection;
    long long _lastSwipeDirection;
    NSMutableDictionary *_filterSwipeMetadata;
    SCUserSession *_userSession;
    SCUnlockableGeoFilterTracker *_unlockableGeoFilterTracker;
    SCGeoFilterLogger *_geofilterLogger;
    long long _currentSection;
    NSArray *_visualFilterNames;
    struct CGAffineTransform _currentViewportTransform;
}

+ (id)dancingGhostAnimationCommand;
+ (id)pixelationCommandWithMask:(id)arg1 maskSize:(struct CGSize)arg2 pixelType:(long long)arg3;
+ (id)_logNameForFilterName:(id)arg1 filterView:(id)arg2;
@property(nonatomic) _Bool visualFilterIsSeen; // @synthesize visualFilterIsSeen=_visualFilterIsSeen;
@property(retain, nonatomic) NSArray *visualFilterNames; // @synthesize visualFilterNames=_visualFilterNames;
@property(nonatomic) _Bool contextFilterIsSeen; // @synthesize contextFilterIsSeen=_contextFilterIsSeen;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) SCGeoFilterLogger *geofilterLogger; // @synthesize geofilterLogger=_geofilterLogger;
@property(retain, nonatomic) SCUnlockableGeoFilterTracker *unlockableGeoFilterTracker; // @synthesize unlockableGeoFilterTracker=_unlockableGeoFilterTracker;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSMutableDictionary *filterSwipeMetadata; // @synthesize filterSwipeMetadata=_filterSwipeMetadata;
@property(nonatomic) long long lastSwipeDirection; // @synthesize lastSwipeDirection=_lastSwipeDirection;
@property(nonatomic) long long firstSwipeDirection; // @synthesize firstSwipeDirection=_firstSwipeDirection;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(nonatomic) _Bool isLagunaMedia; // @synthesize isLagunaMedia=_isLagunaMedia;
@property(retain, nonatomic) SCSmartSwipeFilterViewStackingManager *stackingManager; // @synthesize stackingManager=_stackingManager;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long swipeSequenceNumber; // @synthesize swipeSequenceNumber=_swipeSequenceNumber;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSArray *mediaFilterNames; // @synthesize mediaFilterNames=_mediaFilterNames;
@property(retain, nonatomic) SCFilterView *unfilteredView; // @synthesize unfilteredView=_unfilteredView;
@property(retain, nonatomic) NSMutableDictionary *filterViewDict; // @synthesize filterViewDict=_filterViewDict;
@property(retain, nonatomic) SCSmartCarouselFilterArranger *filterArranger; // @synthesize filterArranger=_filterArranger;
@property(readonly, nonatomic) SCImageProcessLookseryEffectCommand *lensCommand; // @synthesize lensCommand=_lensCommand;
@property(retain, nonatomic) NSMutableDictionary *filterStateDict; // @synthesize filterStateDict=_filterStateDict;
@property(nonatomic) struct CGAffineTransform currentViewportTransform; // @synthesize currentViewportTransform=_currentViewportTransform;
@property(copy, nonatomic) SCFilterCarouselLoggingParameters *filterCarouselLoggingParameters; // @synthesize filterCarouselLoggingParameters=_filterCarouselLoggingParameters;
@property(nonatomic) _Bool doubleSwipingEnabled; // @synthesize doubleSwipingEnabled=_doubleSwipingEnabled;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(nonatomic) __weak id <SCSmartSwipeFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isVideoSnap; // @synthesize isVideoSnap=_isVideoSnap;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *lensCommandLensId;
- (void)updateLensProcessingCommandWithLens:(id)arg1 recordingMetadata:(id)arg2 lensCommandDelegate:(id)arg3;
- (_Bool)canStackMoreFilters;
- (_Bool)hasAnimatedFilters;
- (id)geoFilterIfOnlyDrawnFilter;
- (id)videoTrackedImagesBelowStickers;
- (id)videoTrackedImagesAboveStickers;
- (id)drawingsOrStaticStickersOrPurikuraImage;
- (_Bool)hasDrawingsOrStaticStickersOrPurikura;
- (id)overlayFiltersImage;
- (_Bool)hasStaticOverlayFilters;
- (id)overlayImage;
- (_Bool)hasOverlayImage;
- (_Bool)hasStaticStickerOverlay;
- (void)takeScreenshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_shouldDrawOverlayFilterView:(id)arg1;
- (id)_currentDisplayingOverlayFilterViews;
- (_Bool)_handleLongPress:(id)arg1;
- (_Bool)_canHandleVenueLongPress:(id)arg1;
- (_Bool)_canHandleLongPress:(id)arg1;
- (void)_updateDisplayStatusForSection:(long long)arg1 displayed:(_Bool)arg2;
- (id)_filterItemAtCenterPoint;
- (void)_reloadCollectionView;
- (long long)_filterSectionFromIndex:(long long)arg1;
- (long long)_filterIndexFromSection:(long long)arg1;
- (id)filterItemForSection:(long long)arg1;
- (void)_scrollToSection:(long long)arg1 animated:(_Bool)arg2;
- (void)_scrollToCurrentSection;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)longPress:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
@property(readonly, nonatomic) UIPanGestureRecognizer *scrollViewPanGestureRecognizer;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)filterArrangerDidReloadSwipeOrder:(id)arg1;
- (void)filterArrangerWillReloadSwipeOrder:(id)arg1;
- (void)filterArranger:(id)arg1 didRemoveFilter:(id)arg2 atIndex:(long long)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(id)arg1 didInsertFilterAtIndex:(long long)arg2 filterItem:(id)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(id)arg1 didUpdateFilterName:(id)arg2 config:(id)arg3;
- (void)_updateDrawingAndStickerAndPurikuraViewCenter;
- (void)_updateStackedOverlayViewsFrame;
- (void)_exitDoubleSwipingState;
- (_Bool)shouldUnstackWhenExitingDoubleSwipe;
- (void)removeStackedFilterForType:(long long)arg1;
- (id)stackedFiltersInfo;
- (void)clearStackedFilters;
- (_Bool)stackCurrentCollectionViewFilterIfAny;
- (void)scrollToInitSectionAndReloadToIndex:(long long)arg1;
- (void)updateCurrentSectionAndMediaFilterOffset;
- (void)updateMediaFilterMaskForItem:(id)arg1 relativeOffset:(double)arg2;
- (long long)mediaFilterIndexForFilter:(id)arg1;
- (void)updateMediaFiltersAndCommands;
- (id)replaceFiltersWithState:(id)arg1;
- (void)setHiddenStateForStickersAndOverlayFilters:(_Bool)arg1 includeCustomSticker:(_Bool)arg2;
- (void)selectFilterNames:(id)arg1 forTypes:(id)arg2 allowInitialStackedFiltersSwipeOffOnScroll:(_Bool)arg3;
- (double)swipeOffset;
- (CDStruct_cb8b52ca)currentSwipeState;
- (id)currentFilterViewForTypeOrUnfiltered:(long long)arg1;
- (id)currentFilterNameForTypeOrUnfiltered:(long long)arg1;
- (id)currentFilterViewForType:(long long)arg1;
- (_Bool)isCurrentItemMediaFilter;
- (id)currentFilterNameForType:(long long)arg1;
- (id)currentFilterItems;
- (_Bool)isScrolling;
@property(readonly, nonatomic) unsigned long long numberOfFilterChanges;
- (void)setFiltersUserInteractionEnabled:(_Bool)arg1;
- (void)addCaptionViewBelowFilters:(id)arg1;
- (void)updateCroppingState:(id)arg1;
- (void)removePurikuraView;
- (void)addPurikuraView:(id)arg1 croppingState:(id)arg2;
- (void)addDrawingView:(id)arg1 stickerContainer:(id)arg2;
- (void)resetLayoutWithOrientation:(long long)arg1;
- (void)setBackgroundBlackValue:(double)arg1 duration:(double)arg2;
- (void)setDancingGhostAnimating:(_Bool)arg1;
- (void)setViewportTransform:(struct CGAffineTransform)arg1;
- (void)willRotateToOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 filterArranger:(id)arg2 commonLoggingParameters:(id)arg3 geofilterLogger:(id)arg4 isLagunaMedia:(_Bool)arg5 userSession:(id)arg6;
- (void)venueFilterView:(id)arg1 didReportWithVenueSelector:(id)arg2;
- (void)venueFilterView:(id)arg1 didChangeDisplayStatus:(_Bool)arg2 withBackgroundFilter:(_Bool)arg3;
- (id)venueFilterView:(id)arg1 geoFilterViewWithGeoFilterID:(id)arg2;
- (void)selectedVenueOnVenueFilterView:(id)arg1 viewingTime:(unsigned long long)arg2;
- (void)geoFilterViewNeedsUpdate:(id)arg1;
- (void)altitudeFilterDidUpdate:(id)arg1;
- (void)weatherFilterDidUpdate:(id)arg1;
- (void)removeViewOfFilterItem:(id)arg1;
- (long long)zPositionForFilterItem:(id)arg1 view:(id)arg2;
- (id)filterViewForItem:(id)arg1;
- (id)geocellForLocation:(id)arg1;
- (void)geofilterMissLoggingDetermineIfSessionOver:(id)arg1;
- (void)geofilterMissLoggingDetermineIfNewSession;
- (void)determineInitialSwipeDirectionForGeofilterMissLoggingIfNeeded;
- (void)logGeofilterSession;
- (void)logSnapCreationEnded;
- (id)logFilterContextFilterSkyTypeFromFilterDataProvider:(id)arg1;
- (long long)logFilterStreakType;
- (id)logFilterStreakValue;
- (id)logFilterInfoValue;
- (long long)logFirstSwipeDirection;
- (long long)filterSourceForCurrentFilterOfType:(long long)arg1;
- (id)logWidgetValue:(long long)arg1;
- (long long)logIndexForCurrentFilterOfType:(long long)arg1;
- (long long)logSeenTotal;
- (long long)logTapCountForCurrentFilterWithType:(long long)arg1;
- (long long)logIndexTotal;
- (void)logCarouselArrangeHasNewFilter:(id)arg1 config:(id)arg2;
- (void)logVenueFilterView:(id)arg1 viewingTime:(unsigned long long)arg2;
- (void)_logSwipeEvent:(id)arg1 atIndex:(long long)arg2 metadata:(id)arg3;
- (void)_logSwipeEventForVenueFilter:(id)arg1 atIndex:(long long)arg2 metadata:(id)arg3;
- (void)_logSwipeEventForGeoFilter:(id)arg1 atIndex:(long long)arg2 metadata:(id)arg3 isBackgroundFilter:(_Bool)arg4;
- (void)_logSwipeEventForFilterItem:(id)arg1 atIndex:(long long)arg2 filterType:(long long)arg3 metadata:(id)arg4;
- (void)logViewingResumed;
- (void)logViewingPaused;
- (void)logViewingEnded;
- (void)_stopViewingIfNecessary:(id)arg1;
- (void)_startViewingIfNecessary:(id)arg1;
- (void)updateViewingItemIfNecessary:(id)arg1 displayed:(_Bool)arg2;
- (id)logContextFilterId;
- (_Bool)logVisualFilterIsSeen;
- (_Bool)logContextFilterIsSeen;
- (id)logNameForCurrentFilterOfType:(long long)arg1 mediaFilterSubtype:(long long)arg2;
- (id)logNameForCurrentFilters;
- (void)updateFilterSourceForSwipeForFilter:(id)arg1 filterSource:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

