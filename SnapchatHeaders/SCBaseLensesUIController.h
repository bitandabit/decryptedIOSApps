//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "LSATouchProcessingDelegate-Protocol.h"
#import "LSATrackingComponentListener-Protocol.h"
#import "SCLensCarouselPresenterDelegate-Protocol.h"
#import "SCLensHintPresenterDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class LSATouchProcessingController, NSString, SCAlertViewActionButtonController, SCLensActionController, SCLensBitmojiAlertUIController, SCLensBitmojiProvider, SCLensCarouselPresenter, SCLensCompassAndLocationProvider, SCLensCoreAnalyticsLogger, SCLensGeoDataProvider, SCLensHintPresenter, SCLensHintProvider, SCLensLayoutProvider, SCLensPhotoFaceImageProvider, SCLensPresetImageProvider, SCLensRemoteAssetsDataProvider, SCLensTapToActivateLogger, SCLensUIUpdateListenerAnnouncer, SCLensUriServiceProvider, SCLensUsageTracker, SCLensUserDataProvider, SCLensUserInterfaceTooltipPresenter, SCLensValidator, SCLensesUIControllerState, SCLoadingIndicatorView, SCSponsoredSlugView, SCUserSession, UICollectionView, UILabel, UITapGestureRecognizer, UIView;
@protocol SCLensBitmojiDelegate, SCLensCarouselPresenterProtocol, SCLensDataProviderProtocol, SCLensProcessingCore, SCLensSubPickerControllerProtocol, SCLensUserInterfaceDelegate, UIGestureRecognizerDelegate;

@interface SCBaseLensesUIController : NSObject <SCTimeProfilable, LSATouchProcessingDelegate, LSATrackingComponentListener, SCLensHintPresenterDelegate, LSAEffectComponentListener, SCLensCarouselPresenterDelegate>
{
    SCLensRemoteAssetsDataProvider *_lensRemoteAssetsDataProvider;
    SCLensCompassAndLocationProvider *_compassAndLocationProvider;
    SCLensUriServiceProvider *_uriServiceProvider;
    _Bool _blockCameraTouches;
    SCLensTapToActivateLogger *_tapToActivateLogger;
    SCLensHintPresenter *_hintPresenter;
    SCLensUserInterfaceTooltipPresenter *_userInterfaceTooltipPresenter;
    SCLensCoreAnalyticsLogger *_lensCoreAnalyticsLogger;
    SCLensHintProvider *_hintProvider;
    SCLensUsageTracker *_lensUsageTracker;
    SCLensValidator *_lensValidator;
    SCAlertViewActionButtonController *_modalOkButton;
    UICollectionView *_lensesCollectionView;
    id <SCLensSubPickerControllerProtocol> _lensSubPickerController;
    SCLensPresetImageProvider *_lensSubPickerPresetImageProvider;
    SCLensPhotoFaceImageProvider *_lensSubPickerPhotoFaceImageProvider;
    CDUnknownBlockType _lensSubPickerPhotoFaceImageProviderDeallocBlock;
    LSATouchProcessingController *_touchProcessingController;
    SCLensBitmojiAlertUIController *_lensBitmojiAlertUIController;
    SCLensBitmojiProvider *_lensBitmojiProvider;
    SCLensUserDataProvider *_lensUserDataProvider;
    SCLensGeoDataProvider *_lensGeoDataProvider;
    NSString *_lensDataProviderToken;
    SCLensLayoutProvider *_lensLayoutProvider;
    SCLensUIUpdateListenerAnnouncer *_uiUpdateAnnouncer;
    id <SCLensProcessingCore> _lensProcessingCore;
    SCLensActionController *_lensActionController;
    _Bool _lensesActive;
    UITapGestureRecognizer *_downloadOverlayTapGestureRecognizer;
    id <SCLensDataProviderProtocol> _lensDataProvider;
    SCLensCarouselPresenter *_mainCarouselPresenter;
    UIView *_parentView;
    UIView *_hidableViewContainer;
    id <UIGestureRecognizerDelegate> _gestureRecognizerDelegate;
    id <SCLensBitmojiDelegate> _lensBitmojiDelegate;
    id <SCLensUserInterfaceDelegate> _lensUserInterfaceDelegate;
    SCUserSession *_userSession;
    UILabel *_lensHintLabel;
    UIView *_lensDownloadOverlay;
    UILabel *_tapToDownloadLabel;
    SCSponsoredSlugView *_sponsoredSlugView;
    UIView *_lensLoadingIndicatorBackground;
    SCLoadingIndicatorView *_lensLoadingIndicator;
    UILabel *_demoLensWarningLabel;
    UILabel *_demoLensReleaseDateLabel;
    SCLensesUIControllerState *_state;
}

+ (int)context;
@property(retain, nonatomic) SCLensesUIControllerState *state; // @synthesize state=_state;
@property(retain, nonatomic) SCLensBitmojiAlertUIController *lensBitmojiAlertUIController; // @synthesize lensBitmojiAlertUIController=_lensBitmojiAlertUIController;
@property(retain, nonatomic) UILabel *demoLensReleaseDateLabel; // @synthesize demoLensReleaseDateLabel=_demoLensReleaseDateLabel;
@property(retain, nonatomic) UILabel *demoLensWarningLabel; // @synthesize demoLensWarningLabel=_demoLensWarningLabel;
@property(retain, nonatomic) SCLoadingIndicatorView *lensLoadingIndicator; // @synthesize lensLoadingIndicator=_lensLoadingIndicator;
@property(retain, nonatomic) UIView *lensLoadingIndicatorBackground; // @synthesize lensLoadingIndicatorBackground=_lensLoadingIndicatorBackground;
@property(retain, nonatomic) SCSponsoredSlugView *sponsoredSlugView; // @synthesize sponsoredSlugView=_sponsoredSlugView;
@property(retain, nonatomic) UILabel *tapToDownloadLabel; // @synthesize tapToDownloadLabel=_tapToDownloadLabel;
@property(retain, nonatomic) UIView *lensDownloadOverlay; // @synthesize lensDownloadOverlay=_lensDownloadOverlay;
@property(retain, nonatomic) UILabel *lensHintLabel; // @synthesize lensHintLabel=_lensHintLabel;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic, getter=areLensesActive) _Bool lensesActive; // @synthesize lensesActive=_lensesActive;
@property(nonatomic) __weak id <SCLensUserInterfaceDelegate> lensUserInterfaceDelegate; // @synthesize lensUserInterfaceDelegate=_lensUserInterfaceDelegate;
@property(nonatomic) __weak id <SCLensBitmojiDelegate> lensBitmojiDelegate; // @synthesize lensBitmojiDelegate=_lensBitmojiDelegate;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizerDelegate; // @synthesize gestureRecognizerDelegate=_gestureRecognizerDelegate;
@property(nonatomic) __weak UIView *hidableViewContainer; // @synthesize hidableViewContainer=_hidableViewContainer;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(readonly, nonatomic) SCLensCarouselPresenter *mainCarouselPresenter; // @synthesize mainCarouselPresenter=_mainCarouselPresenter;
@property(readonly, nonatomic) id <SCLensDataProviderProtocol> lensDataProvider; // @synthesize lensDataProvider=_lensDataProvider;
@property(retain, nonatomic) UITapGestureRecognizer *downloadOverlayTapGestureRecognizer; // @synthesize downloadOverlayTapGestureRecognizer=_downloadOverlayTapGestureRecognizer;
- (void).cxx_destruct;
- (id)externalComponentForCurrentLens;
- (id)presetsComponentForCurrentLens;
- (void)_updateTapToActivateLoggerForLens:(id)arg1;
- (void)_createTapToActivateLoggerForLens:(id)arg1;
- (void)lensHintPresenterDidHideHint:(id)arg1;
- (void)lensHintPresenterWillShowHint:(id)arg1;
- (_Bool)lensHintPresenterShouldShowHint:(id)arg1;
- (void)touchProcessingController:(id)arg1 didReceiveError:(id)arg2;
- (void)touchProcessingControllerDidFinishInteraction:(id)arg1;
@property(readonly, nonatomic) id <SCLensCarouselPresenterProtocol> currentCarouselPresenter;
- (void)showOrHideSponsoredSlugForLensIfNeeded:(id)arg1;
- (void)activateLens:(id)arg1 launchData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearLens;
- (void)applyLens:(id)arg1 launchData:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 didScroll:(id)arg2 selectedCellDistance:(double)arg3;
- (_Bool)lensCarouselPresenter:(id)arg1 isLensBeingApplied:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 didUpdateLensesList:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 didEndDisplayingLens:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 willDisplayLens:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 didSelectLens:(id)arg2 index:(unsigned long long)arg3 totalLensesCount:(unsigned long long)arg4;
- (void)hideDemoLensWarning;
- (void)showDemoLensWarningForLens:(id)arg1;
- (void)animateSponsoredSlug;
- (void)showHintView:(_Bool)arg1 withHintView:(id)arg2 animated:(_Bool)arg3;
- (void)showTapToDownloadHint:(_Bool)arg1 downloadInProgress:(_Bool)arg2 animated:(_Bool)arg3;
- (void)trackingComponent:(id)arg1 didRecognizeFaces:(unsigned long long)arg2;
- (void)trackingComponent:(id)arg1 didRecognizeExpression:(id)arg2;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 savePersistentStore:(id)arg3;
- (void)effectComponent:(id)arg1 loadPersistentStoreForEffectWithId:(id)arg2;
- (id)lensPersistentStoreKeyWithEffectId:(id)arg1;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performInterfaceAction:(unsigned long long)arg3 interfaceElement:(unsigned long long)arg4 interfaceData:(id)arg5;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showPopUpHintWithId:(id)arg3 interfaceElement:(unsigned long long)arg4;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performHapticFeedback:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 hideAllHintsForEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showHintWithId:(id)arg3;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 willTurnOnEffectWithId:(id)arg2;
- (void)downloadCurrentLensIfNecessary;
- (void)hideLensesUI:(_Bool)arg1;
- (void)hideLensesUI:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showLensesUI:(_Bool)arg1;
- (void)showLensesUI:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadRegressorIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isRegressorNeeded;
- (void)cleanup;
- (void)selectLensWithIdIfPossible:(id)arg1;
- (void)setLensesActive:(_Bool)arg1 appearanceConfiguration:(id)arg2 activationState:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)excludedHintIds;
- (id)snappablesDataFuture;
- (void)_saveSubPickerActiveOptionId;
- (void)_hideLensModalCard;
- (void)_showLensModalCardWithTitleId:(id)arg1 descriptionId:(id)arg2;
- (void)_hideSubPicker;
- (void)_showSubPicker;
- (_Bool)canAutoselectLensOnScroll;
- (_Bool)isCurrentLensDownloadingInProgress;
- (_Bool)isLensRotationGestureRecognizer:(id)arg1;
- (_Bool)isLensLongPressGestureRecognizer:(id)arg1;
- (_Bool)isLensPanGestureRecognizer:(id)arg1;
- (_Bool)isLensPinchGestureRecognizer:(id)arg1;
- (_Bool)isLensTapGestureRecognizer:(id)arg1;
- (_Bool)isLensTouchProcessingGestureRecognizer:(id)arg1;
- (_Bool)isAnyLensTouchProcessingGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) _Bool lensTouchProcessingActive;
@property(readonly, nonatomic) _Bool blockTouchesForCurrentLens;
- (_Bool)pointInsideLensSubPicker:(struct CGPoint)arg1;
- (_Bool)_pointInsideLensView:(struct CGPoint)arg1 cellFramesOnly:(_Bool)arg2;
- (_Bool)pointInsideAnyLensViewButton:(struct CGPoint)arg1;
- (_Bool)pointInsideAnyLensView:(struct CGPoint)arg1;
- (void)updateSlugViewWithDefaultMargins:(id)arg1 forPosition:(long long)arg2;
- (void)initLensesCollectionViewProperties:(id)arg1;
- (void)applyCollectionViewConstraints:(id)arg1;
@property(readonly, nonatomic) UICollectionView *lensesCollectionView;
- (void)dealloc;
- (id)initWithParentViewContainer:(id)arg1 hidableViewContainer:(id)arg2 userSession:(id)arg3 lensProcessingCore:(id)arg4 lensDataProvider:(id)arg5 lensLayoutProvider:(id)arg6 gestureRecognizerDelegate:(id)arg7 lensBitmojiDelegate:(id)arg8 lensUserInterfaceDelegate:(id)arg9 useOriginalLens:(_Bool)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

