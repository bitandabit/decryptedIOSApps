//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSearchViewDelegate-Protocol.h"
#import "SCStickerPickerCategoryDelegate-Protocol.h"
#import "SCStickerPickerSubCategoryTabBarDataSource-Protocol.h"
#import "SCStickerPickerSubCategoryTabBarDelegate-Protocol.h"
#import "SCStickerPickerV2IconsControllerDelegate-Protocol.h"
#import "SCStickerSearchAnimatedTooltipDelegate-Protocol.h"
#import "SCStickerSearchBarDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSLayoutConstraint, NSMutableDictionary, NSString, NSTimer, SCCustomStickerEmptyPage, SCGiphyStickerSearch, SCRoundedCornersView, SCSearchView, SCSessionRequestManager, SCStickeFriendMojiSearchController, SCStickerCategory, SCStickerPickerCategoryCell, SCStickerPickerCollectionView, SCStickerPickerIconsCollectionViewLayout, SCStickerPickerLogger, SCStickerPickerStickerCell, SCStickerPickerSubCategoryTabBar, SCStickerPickerV2IconsController, SCStickerSearchAnimatedTooltip, SCStickerSearchBar, SCStickerTagFuzzySearch, SCUserSession, UICollectionView, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UITextView, UIVisualEffectView;
@protocol SCStickerPickerMenuDataSource, SCStickerPickerMenuDelegate;

@interface SCStickerPickerMenuView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, SCStickerPickerCategoryDelegate, UIGestureRecognizerDelegate, SCStickerSearchBarDelegate, SCTimeProfilable, SCSearchViewDelegate, SCStickerPickerV2IconsControllerDelegate, SCStickerSearchAnimatedTooltipDelegate, SCStickerPickerSubCategoryTabBarDataSource, SCStickerPickerSubCategoryTabBarDelegate>
{
    SCUserSession *_userSession;
    SCSessionRequestManager *_requestManager;
    double _iconViewSize;
    double _iconSize;
    UIView *_gradientView;
    SCStickerSearchBar *_stickerSearchBar;
    SCStickerSearchAnimatedTooltip *_searchBarAnimatedTooltip;
    SCSearchView *_searchBarView;
    SCStickeFriendMojiSearchController *_friendMojiSearchController;
    UIView *_lineSeparator;
    UIView *_headerView;
    UIVisualEffectView *_iconsCollectionBlurView;
    UICollectionView *_iconsCollectionsView;
    UILabel *_noResultsLabel;
    _Bool _scrollingLocked;
    SCStickerPickerIconsCollectionViewLayout *_iconsCollectionViewLayout;
    SCStickerPickerCollectionView *_stickerCategoriesCollectionView;
    SCStickerPickerCategoryCell *_searchDisplayCell;
    SCStickerPickerCategoryCell *_pretypeSearchDisplayCell;
    SCStickerCategory *_searchResultsStickerCategory;
    SCStickerCategory *_preTypeSearchResultsStickerCategory;
    NSArray *_popularQueries;
    UIVisualEffectView *_blurBackground;
    NSMutableDictionary *_categoryVisibleStickerContentOffsetYs;
    NSIndexPath *_selectedCategoryIndex;
    NSIndexPath *_previousCategoryIndex;
    UIPanGestureRecognizer *_panGestureRecognizer;
    unsigned long long _sourceType;
    _Bool _isPresenting;
    double _stickerPickerCategoryCellCollectionViewTopInset;
    _Bool _suppressDidscrollEvents;
    NSString *_currentSearchText;
    SCStickerTagFuzzySearch *_stickerSearch;
    SCGiphyStickerSearch *_giphyStickerSearch;
    NSArray *_giphySearchResultHolder;
    NSString *_giphySearchHolderText;
    _Bool _shouldKeyboardShow;
    long long _enterSearchCount;
    long long _pretypeStickerTagSelectCount;
    long long _prefixMatchStickerTagSelectCount;
    _Bool _isQuickSend;
    CDUnknownBlockType _stickerSearchBlock;
    CDUnknownBlockType _giphyStickerSearchBlock;
    SCStickerPickerLogger *_stickerPickerLogger;
    UIImageView *_sitckerIsMoving;
    SCStickerPickerStickerCell *_cellIsMoving;
    _Bool _inDeleteStickerMode;
    UITextView *_debuggingTextLabel;
    SCCustomStickerEmptyPage *_customStickerEmptyPage;
    UIImage *_previewImage;
    double _buttomInset;
    _Bool _singleCategoryMode;
    NSString *_lastStickerPackContext;
    _Bool _enableWhiteUIV1;
    _Bool _enableWhiteUIV2;
    _Bool _enableGiphySticker;
    _Bool _hasPretypingPage;
    _Bool _isSearchingGiphyStickers;
    SCStickerPickerV2IconsController *_iconsController;
    SCRoundedCornersView *_stickerCategoryCellBackgroundView;
    NSTimer *_giphySearchTimeoutTimer;
    _Bool _isOpen;
    id <SCStickerPickerMenuDelegate> _delegate;
    id <SCStickerPickerMenuDataSource> _dataSource;
    UIView *_tabBarContainer;
    SCStickerPickerSubCategoryTabBar *_subCategoryTabBar;
    NSLayoutConstraint *_tabBarBottomConstraint;
    NSMutableDictionary *_lastSelectedSubCategory;
}

+ (int)context;
+ (_Bool)shouldEnableStickerSearchPretyping;
+ (double)pickerMenuCornerRadiusForPreview;
+ (double)pickerMenuBottomInsetForInterfaceOrientation:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *lastSelectedSubCategory; // @synthesize lastSelectedSubCategory=_lastSelectedSubCategory;
@property(retain, nonatomic) NSLayoutConstraint *tabBarBottomConstraint; // @synthesize tabBarBottomConstraint=_tabBarBottomConstraint;
@property(retain, nonatomic) SCStickerPickerSubCategoryTabBar *subCategoryTabBar; // @synthesize subCategoryTabBar=_subCategoryTabBar;
@property(retain, nonatomic) UIView *tabBarContainer; // @synthesize tabBarContainer=_tabBarContainer;
@property(nonatomic) __weak id <SCStickerPickerMenuDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCStickerPickerMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_selectedCategoryhasSubCategories;
- (void)tooltipFinishAnimation;
- (void)didSelectSuperIconAtIndex:(long long)arg1;
- (id)_categoryIndexToSubIconIndex:(id)arg1;
- (id)_subIconIndexToCategoryIndex:(id)arg1;
- (id)_correctIndexForSuperIcon:(id)arg1;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
- (void)_viewWasDoubleTapped:(id)arg1;
- (void)_addStickerPickerDebuggingView;
- (id)_categoryIconCellAccessibilityIdentifierFromIndexPath:(long long)arg1;
- (void)_doStickerSearch:(id)arg1 friendAvatarId:(id)arg2;
- (void)_doGiphyStickerSearch:(id)arg1 giphyTrending:(_Bool)arg2;
- (void)_stopGiphySearch;
- (void)_stopStickerSearch;
- (id)_currentGiphyCategoryCell:(_Bool)arg1;
- (id)_currentGiphyStickerCategory:(_Bool)arg1;
- (unsigned long long)_giphyStickerCategoryIndex:(id)arg1 giphyTrending:(_Bool)arg2;
- (void)_startGiphySearchTimer:(_Bool)arg1;
- (void)removeGiphyFromResults:(id)arg1 currentActiveStickerCategory:(id)arg2 giphyTrending:(_Bool)arg3 sectionIndex:(unsigned long long)arg4;
- (void)_clearGiphySearchTimeoutTimer;
- (void)_startGiphySearch:(id)arg1 giphyTrending:(_Bool)arg2;
- (void)_startStickerSearch:(id)arg1;
- (id)_selectedStickerPickerCategoryCell;
- (id)_currentStickerPickerCategoryCell;
- (void)updateVisibleStickerCategoryCellCollectionViewAnimated:(_Bool)arg1 deltaContentOffset:(double)arg2 topMargin:(double)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_removeStickerPackContext;
- (void)_updateContextBasedOnCategory:(id)arg1;
- (void)_logStickerCategoryViewedAtIndexPath:(id)arg1;
- (void)_updateAndSelectStickerCategoryCellWithSubCategory:(id)arg1 withCurrentSelectedCategoryIndex:(id)arg2;
- (void)_tap:(id)arg1;
- (void)_updateTranslationForDismissalAnimationWithPercentage:(double)arg1;
- (void)_updateTranslationForDismissalAnimationWithAlpha:(double)arg1 translation:(double)arg2 isDragging:(_Bool)arg3;
- (void)_pan:(id)arg1;
- (void)_panVertical:(id)arg1;
- (void)_beginBlurAnimation;
- (void)_removeBlurAnimationAndFreezeLayerTree:(_Bool)arg1;
- (void)closeWithShouldClearSearchBar:(_Bool)arg1 shouldAnimate:(_Bool)arg2 withStickerPicked:(_Bool)arg3;
- (void)_clearSearchBar;
- (void)_animateViewsOut;
- (void)_animateViewsIn;
- (void)_prepareToAnimateViewsInIfNeeded;
- (void)openAtCategory:(id)arg1 sticker:(id)arg2 isSingleCategoryMode:(_Bool)arg3;
- (void)selectSubCategoryAtIndex:(long long)arg1;
- (void)tabBar:(id)arg1 didSelectSubCategoryAtIndex:(long long)arg2;
- (id)tabBar:(id)arg1 imageForSubCategoryAtIndex:(long long)arg2;
- (long long)numberOfSubCategoriesForTabBar:(id)arg1;
- (void)_saveCategoryContentOffsetY;
- (long long)categoryTypeForIndex:(long long)arg1;
- (void)setSelectedIndex:(id)arg1 highlightedIndex:(double)arg2 selectionPercentage:(double)arg3;
- (void)setSelectedIndex:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didRotate;
- (void)willStartToRotate;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)stickerSearchQuerySuggestionTapped:(id)arg1;
- (void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2;
- (_Bool)friendmojiHintRequestedWithTargetView:(id)arg1 delegate:(id)arg2;
- (_Bool)avatarPickerRequestedWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3;
- (void)stickerPickerCategoryFriendmojiAvatarIdChanged:(id)arg1;
- (struct CGPoint)_convertStickerLocation:(id)arg1;
- (void)updateCustomStickerDataToBeDeleted:(id)arg1;
- (void)moveCustomStickerCell:(id)arg1;
- (_Bool)_customStickerIsMovedtoSaveSection:(id)arg1 recentSectionView:(id)arg2 stickerCell:(id)arg3;
- (void)endCustomStickerMoving:(id)arg1 recentSectionView:(id)arg2 stickerCell:(id)arg3 completionHanlder:(CDUnknownBlockType)arg4;
- (void)beginCustomStickerMoving:(id)arg1 forCell:(id)arg2;
- (void)stickerPickerCategoryCellScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)stickerPickerCategoryCellScrollViewDidScroll:(id)arg1;
- (void)stickerPickerCategoryCellDidTapEmptyScreen;
- (void)stickerPickerCategoryCellScrollViewWillBeginDragging:(id)arg1;
- (void)unlockScroll;
- (void)lockScroll;
- (long long)stickerPickerType;
- (long long)currentSuperCategoryType;
- (void)categoryCell:(id)arg1 stickerSelected:(id)arg2 center:(struct CGPoint)arg3 thumbnail:(id)arg4 index:(unsigned long long)arg5;
- (_Bool)stickerPickerCatogoryCellCanSelectSticker:(id)arg1;
- (void)_updatePretypeSearchView;
- (void)_hidePretypeSearchResults;
- (void)_showPretypeSearchResults;
- (_Bool)searchViewShouldDeleteCharacter:(id)arg1;
- (_Bool)searchViewShouldReturn:(id)arg1 withSearchText:(id)arg2;
- (void)searchViewDidEndEditing:(id)arg1;
- (void)searchViewDidBeginEditing:(id)arg1;
- (void)searchView:(id)arg1 didChangeToText:(id)arg2 byChangingCharactersInRange:(struct _NSRange)arg3 replacementString:(id)arg4;
- (void)searchViewBackButtonTapped:(id)arg1;
- (void)_hideSearchResults;
- (void)_showSearchResultsWithQuery:(id)arg1;
- (void)xButtonPressed:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarDidBeginEditing:(id)arg1;
- (void)_checkEndDisplayingCustomStickerPageAtIndexPath:(id)arg1 cell:(id)arg2 isDragging:(_Bool)arg3;
- (void)_checkWillDisplayFriendmojiHintForCell:(id)arg1;
- (void)_checkDidDisplayCustomStickerPageAtIndexPath:(id)arg1 cell:(id)arg2;
- (void)_configureStickerCategoryIconCell:(id)arg1 normalIconImage:(id)arg2 selectedIconImage:(id)arg3 isHighlighted:(_Bool)arg4;
- (double)_topInsetForBackgroundView;
- (void)_transitionTabBarToPercentage:(double)arg1;
- (void)_resetLayoutWithUpdateHint:(id)arg1;
- (void)resetLayout;
- (void)reloadDataWithDataSourceUpdateHint:(id)arg1;
- (void)setGradientWithinSearchCell:(_Bool)arg1;
- (void)setupSafeAreaFrame:(struct CGRect)arg1 bottomInset:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 sourceType:(unsigned long long)arg2 isQuickSend:(_Bool)arg3 hideGiphy:(_Bool)arg4 commonLoggingParameters:(id)arg5 userSession:(id)arg6 previewImage:(id)arg7 bottomInset:(double)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

