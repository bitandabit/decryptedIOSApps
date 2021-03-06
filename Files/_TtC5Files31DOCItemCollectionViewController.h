//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FPItemCollectionDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UICollectionViewDelegateTableLayout-Protocol.h"
#import "UICollectionViewDelegate_Private-Protocol.h"
#import "UICollectionViewDragDelegate-Protocol.h"
#import "UICollectionViewDragDelegate_Private-Protocol.h"
#import "UICollectionViewDropDelegate-Protocol.h"
#import "UICollectionViewDropDelegate_Private-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class DOCAppearance, DOCConfiguration, FPItem, NSArray, NSFileProviderEnumerationProperties, NSIndexPath, NSString, UIProgressView, _TtC5Files19DOCStatusFooterView, _TtC5Files21DOCItemCollectionView, _TtC5Files22DOCErrorViewController, _TtC5Files28DOCItemCollectionControlView;

@interface _TtC5Files31DOCItemCollectionViewController : UIViewController <UICollectionViewDropDelegate_Private, UICollectionViewDelegate_Private, UICollectionViewDataSource, FPItemCollectionDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegateTableLayout, UIViewControllerPreviewingDelegate, UICollectionViewDragDelegate, UICollectionViewDragDelegate_Private, UICollectionViewDropDelegate, UICollectionViewDelegate>
{
    // Error parsing type: , name: itemCollectionListCellIdentifier
    // Error parsing type: , name: itemCollectionGridCellIdentifier
    // Error parsing type: , name: itemCollectionLargeTextListCellIdentifier
    // Error parsing type: , name: itemCollectionCreateCellIdentifier
    // Error parsing type: , name: itemCollectionControlViewSectionHeaderIdentifier
    // Error parsing type: , name: itemCollectionControlViewSectionEmptyHeaderIdentifier
    // Error parsing type: , name: itemCollectionStatusSectionFooterIdentifier
    // Error parsing type: , name: itemCollectionStatusSectionEmptyFooterIdentifier
    // Error parsing type: , name: isInListMode
    // Error parsing type: , name: currentLoadingProgress
    // Error parsing type: , name: currentTransitionVisibility
    // Error parsing type: , name: itemCollectionSource
    // Error parsing type: , name: itemCollection
    // Error parsing type: , name: items
    // Error parsing type: , name: configuration
    // Error parsing type: , name: defaultSaveLocationDidChangeNotificationToken
    // Error parsing type: , name: gridLayout
    // Error parsing type: , name: tableLayout
    // Error parsing type: , name: panSelectionGesture
    // Error parsing type: , name: isAppearing
    // Error parsing type: , name: longPressGesture
    // Error parsing type: , name: maskViews
    // Error parsing type: , name: isGatheringView.storage
    // Error parsing type: , name: errorViewController.storage
    // Error parsing type: , name: _footerView
    // Error parsing type: , name: currentDragSession
    // Error parsing type: , name: delegate
    // Error parsing type: , name: stackViewMetrics
    // Error parsing type: , name: enumerationProperties
    // Error parsing type: , name: enumerationIdentifier
    // Error parsing type: , name: isObserving
    // Error parsing type: , name: isSpringLoading
    // Error parsing type: , name: sortingModes
    // Error parsing type: , name: sortingDescriptor
    // Error parsing type: , name: _appearance
    // Error parsing type: , name: highlightedCell
    // Error parsing type: , name: collectionViewLayoutTraits
    // Error parsing type: , name: collectionViewContext
    // Error parsing type: , name: gatheringThumbnails
    // Error parsing type: , name: visibilityTimeOut
    // Error parsing type: , name: updatedIsScrollEnabled
    // Error parsing type: , name: enqueuedItemToReveal
    // Error parsing type: , name: enqueuedItemToScroll
    // Error parsing type: , name: selectionGestureIsAddingItems
    // Error parsing type: , name: selectionGestureStartIndexPath
    // Error parsing type: , name: originalSelectionStateForCurrentSelectedIndexPaths
    // Error parsing type: , name: autoScrollSelectionTimer
    // Error parsing type: , name: DOCAutoScrollerInset
    // Error parsing type: , name: DOCTableLayoutSelectionInset
    // Error parsing type: , name: DOCAutoScrollerMAXSpeed
    // Error parsing type: , name: lastDropIndexPath
    // Error parsing type: , name: lastPreviewedFPItem
}

+ (void)setScrollPositionCache:(id)arg1;
+ (id)scrollPositionCache;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
@property(nonatomic, retain) FPItem *lastPreviewedFPItem; // @synthesize lastPreviewedFPItem;
- (void)statusFooterViewDidUpdate;
@property(nonatomic, readonly) UIViewController *viewControllerToPresentICQUpgradeFlow;
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
@property(nonatomic, copy) NSIndexPath *lastDropIndexPath; // @synthesize lastDropIndexPath;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCollectionWith:(id)arg1;
- (void)searchContextDidChangeTo:(id)arg1;
- (void)listModeDidChangeTo:(_Bool)arg1;
- (void)newFolderButtonWasPressed;
- (id)indexPathForCellToTheTopRightOf:(struct CGPoint)arg1;
- (id)indexPathForCellToTheLeftOf:(struct CGPoint)arg1;
- (void)updateAutoScroll;
- (void)updateSelectionFromPanGesture;
- (void)selectionPanGestureRecognized:(id)arg1;
- (void)reloadCollectionAfterError;
- (void)errorControllerWithWantsToRetry:(id)arg1;
- (void)displayInfoForCurrentItem:(id)arg1;
- (void)startFolderCreation:(id)arg1;
- (void)pasteboardMoveToCollectionView:(id)arg1;
- (void)pasteboardPasteInCollectionView:(id)arg1;
- (void)longPressOnBackgroundGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)hideMenuController;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 leadingSwipeActionsForRowAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (void)updateContentInsetForShowingKeyboardWithFrame:(struct CGRect)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)scrollToIndexPathIfNeeded:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)cellFor:(id)arg1;
- (_Bool)isItemPickable:(id)arg1;
- (void)updateCollectionLayout;
- (void)notifyDelegateWithCurrentSelection;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)updateCollectionLayoutConfigurationFor:(id)arg1;
- (void)updateCollectionLayoutConfiguration;
- (id)topSuperViewFrom:(id)arg1;
- (void)perform:(id)arg1 on:(id)arg2;
- (id)resolvedIndexPathsForCollectionFor:(id)arg1;
- (id)resolvedIndexPathForProvider:(id)arg1;
- (id)resolvedIndexPathForCollection:(id)arg1;
- (_Bool)indexPathIsCreate:(id)arg1;
- (void)updateCollectionVisibility;
- (void)notifyFinishGatheringIfNeeded;
- (void)updateMaskViews;
- (id)createMaskView;
- (void)reloadCollection;
- (void)getDisplayInformationFor:(id)arg1 region:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)hideIsGatheringIfNeeded;
- (void)hideErrorViewIfNeeded;
- (void)showErrorViewIfNeededWithError:(id)arg1;
- (void)computeStackViewMetricsFor:(id)arg1;
- (void)updateCellStackViewMetrics;
- (void)logPerformKeyCommandWithIdentifier:(id)arg1;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)revealWithItem:(id)arg1 shouldEnqueue:(_Bool)arg2;
- (_Bool)scrollTo:(id)arg1 shouldEnqueue:(_Bool)arg2;
- (void)scrollEnqueuedItem;
- (void)revealEnqueuedItem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didUpdateCollectionViewContentOffsetWithNotification:(id)arg1;
- (void)didUpdateCollectionViewIsScrollEnabledWithNotification:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)selectWithItems:(id)arg1;
@property(nonatomic, readonly) NSArray *selectedItems;
- (void)deselectAllItems;
- (void)selectAllItems;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
@property(nonatomic) struct UIEdgeInsets _contentOverlayInsets;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)restoreScollPositionIfNeeded;
- (void)storeScrollPosition;
- (void)prepareForReuse;
@property(nonatomic, retain) DOCAppearance *appearance;
@property(nonatomic, readonly) _Bool showsCreateButton;
@property(nonatomic) _Bool isSpringLoading; // @synthesize isSpringLoading;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving;
@property(nonatomic, copy) NSString *enumerationIdentifier; // @synthesize enumerationIdentifier;
@property(nonatomic, retain) NSFileProviderEnumerationProperties *enumerationProperties; // @synthesize enumerationProperties;
@property(nonatomic, readonly) _TtC5Files28DOCItemCollectionControlView *controlView;
@property(nonatomic, readonly) _TtC5Files19DOCStatusFooterView *footerView;
@property(nonatomic, retain) _TtC5Files22DOCErrorViewController *errorViewController;
@property(nonatomic, retain) UIProgressView *isGatheringView;
@property(nonatomic, readonly) _TtC5Files21DOCItemCollectionView *collectionView;
@property(nonatomic, readonly) DOCConfiguration *configuration; // @synthesize configuration;
@property(nonatomic, copy) NSArray *items; // @synthesize items;
@property(nonatomic, readonly) _Bool itemCollectionIsGathering;
@property(nonatomic, retain) FPItem *itemCollectionSource; // @synthesize itemCollectionSource;
@property(nonatomic) _Bool isInListMode; // @synthesize isInListMode;

@end

