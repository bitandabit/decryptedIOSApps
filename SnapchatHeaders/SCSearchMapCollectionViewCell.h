//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCEmbeddedMapViewDelegate-Protocol.h"
#import "SCLocationObserver-Protocol.h"
#import "SCSearchActionable-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"

@class NSString, SCEmbeddedMapView, SCSearchActionModel, SCSearchEventListenerAnnouncer, SCSearchHorizontalStoryCollectionViewCell, SCSearchMapRenderer, SCUserSession, UIImageView, UIView, UIVisualEffectView;
@protocol SCSearchActionHandling;

@interface SCSearchMapCollectionViewCell : SCSearchCollectionViewCell <SCEmbeddedMapViewDelegate, SCLocationObserver, SCSearchActionable, SCSearchEventAnnouncing, SCSearchEventListener>
{
    SCEmbeddedMapView *_embeddedMapView;
    UIVisualEffectView *_backgroundBlurView;
    UIView *_darkeningBackgroundView;
    SCSearchHorizontalStoryCollectionViewCell *_storyCard;
    SCSearchActionModel *_singleTapActionModel;
    SCSearchActionModel *_longPressActionModel;
    struct CGRect _currentMaskRect;
    long long _blurEffectStyle;
    SCSearchMapRenderer *_searchMapRenderer;
    UIImageView *_mapSnapshotImageView;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    id _viewModel;
    id <SCSearchActionHandling> _actionHandler;
    SCUserSession *_userSession;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (id)announcerIdentifier;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)viewModel;
- (void).cxx_destruct;
- (id)_mapCardViewModel;
- (void)_centerMapIfPossible;
- (void)_updateRoundedCornerMaskIfNeeded;
- (void)_resetBlurViewIfNeededWithMapCardStyle:(id)arg1;
- (void)onLocationUpdate:(id)arg1;
- (id)locationObserverIdentifier;
- (double)locationObserverDesiredAccuracy;
- (id)locationObserverDispatchQueue;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (void)_setupImageViewWithSnapshot:(id)arg1;
- (void)_setupEmbeddedMapView;
- (void)_setupSnapshotOrEmbeddedMapIfNeeded;
- (_Bool)_shouldUseSnapshotMap;
- (void)embeddedMapViewDidFinishLoading:(id)arg1 snapshot:(id)arg2;
- (void)embeddedMapViewGiveAccessDismissTapped:(id)arg1;
- (id)embeddedMapView:(id)arg1 imageForAnnotation:(id)arg2;
- (id)embeddedMapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)handleLongPressAction;
- (_Bool)hasOverridedLongPressAction;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

