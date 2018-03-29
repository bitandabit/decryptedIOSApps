//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCloudSyncStatusListener-Protocol.h"
#import "SCGalleryCellActionMenuHelperDelegate-Protocol.h"
#import "SCGalleryOperaPresenterDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryManagerListener-Protocol.h"
#import "SCGalleryTabBarsControllerDelegate-Protocol.h"
#import "SCGalleryTabControllerDelegate-Protocol.h"
#import "SCGalleryUserDefaultsManagerListener-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSString, SCGalleryCameraRollTabController, SCGalleryCellActionMenuHelper, SCGalleryImportCameraRollAssetItemsFetcher, SCGalleryOperaPresenter, SCGalleryPhotoLibraryFetcher, SCGalleryTabBarsController, SCGalleryTabsCollectionView, SCGalleryTabsConfiguration, SCGalleryTabsData, SCGalleryTabsTableIndexController, SCUserSession, UIView, UIViewController;
@protocol SCGalleryTabController, SCGalleryTabsControllerDelegate, SCStartChatDelegate;

@interface SCGalleryTabsController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, SCGalleryTabBarsControllerDelegate, SCCloudSyncStatusListener, SCGalleryUserDefaultsManagerListener, SCGalleryPrivateGalleryManagerListener, SCTimeProfilable, SCGalleryOperaPresenterDelegate, SCGalleryCellActionMenuHelperDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, SCGalleryTabControllerDelegate>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    SCGalleryTabsConfiguration *_configuration;
    SCGalleryCameraRollTabController *_cameraRollTabController;
    NSArray *_allTabControllers;
    NSArray *_displayedTabControllers;
    id <SCGalleryTabController> _focusedDisplayedTabController;
    id <SCGalleryTabController> _tabControllerToDisableAlignInitialScrollContentDistanceToTopWhileAnimatingScroll;
    SCGalleryTabsCollectionView *_tabsCollectionView;
    SCGalleryTabBarsController *_tabBarsController;
    SCGalleryTabsTableIndexController *_tableIndexController;
    SCGalleryTabsData *_data;
    SCGalleryTabsData *_deferredData;
    double _headerBottomY;
    double _headerBarHeight;
    _Bool _scrollingTabs;
    double _lastNotifiedScrollContentOffset;
    _Bool _lastNotifiedIsEditing;
    _Bool _lastNotifiedIsDragging;
    SCGalleryImportCameraRollAssetItemsFetcher *_cameraRollAssetItemsFetcher;
    _Bool _hasEligibleCameraRollAssetItems;
    _Bool _checkedEligibleCameraRollAssetItems;
    unsigned long long _deferredScrollToTabType;
    SCGalleryPhotoLibraryFetcher *_photoLibraryFetcher;
    _Bool _requestingPhotoPermission;
    _Bool _loading;
    SCGalleryOperaPresenter *_galleryOperaPresenter;
    SCGalleryCellActionMenuHelper *_actionMenuHelper;
    SCGalleryCellActionMenuHelper *_photoAssetActionMenuHelper;
    SCGalleryCellActionMenuHelper *_featuredStoryActionMenuHelper;
    _Bool _visible;
    _Bool _focused;
    id <SCGalleryTabsControllerDelegate> _delegate;
    id <SCStartChatDelegate> _startChatDelegate;
    double _scrollContentBottomInset;
    unsigned long long _selectMode;
}

+ (int)context;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic) unsigned long long selectMode; // @synthesize selectMode=_selectMode;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) double scrollContentBottomInset; // @synthesize scrollContentBottomInset=_scrollContentBottomInset;
@property(readonly, nonatomic) UIView *tabsCollectionView; // @synthesize tabsCollectionView=_tabsCollectionView;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SCGalleryTabsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;
- (void)operaPresenterDidPresent:(id)arg1;
- (void)operaPresenterCancelledDismiss:(id)arg1;
- (id)_sourceViewFromView:(id)arg1;
- (void)operaPresenterBeganDismiss:(id)arg1;
- (void)operaPresenter:(id)arg1 didSwitchToNewCreatedItem:(id)arg2;
- (id)operaPresenter:(id)arg1 didOpenViewWithSnap:(id)arg2;
- (id)operaPresenter:(id)arg1 didOpenViewWithItem:(id)arg2;
- (id)_operaPresenterWithItems:(id)arg1 selectedIndex:(long long)arg2 fromView:(id)arg3;
- (void)_updateShowsImportFromCameraRollView;
- (id)_tabControllerToShowImportFromCameraRollView;
- (void)_checkEligibleCameraRollAssetItems;
- (_Bool)_shouldShowImportFromCameraRollView;
- (void)galleryCellActionMenuHelperDidSaveFeaturedStory:(id)arg1 item:(id)arg2;
- (void)galleryCellActionMenuHelperIsSavingFeaturedStory:(id)arg1 item:(id)arg2;
- (id)galleryCellActionMenuHelperShouldUpdateSourceView:(id)arg1 item:(id)arg2 snap:(id)arg3;
- (void)_updateMediaScenePathWithDefaultInterTabScenePathComponent:(unsigned long long)arg1 defaultIntraTabScenePathComponent:(unsigned long long)arg2;
- (id)_indexPathOfTabController:(id)arg1 inTabControllers:(id)arg2;
- (void)_enumerateTabControllers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_filteredTabControllers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_flattenFilteredTabControllers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)_interTabScenePathComponent:(id)arg1;
- (void)_notifyIsDraggingChange;
- (void)_notifyIsEditingChange;
- (void)_notifyScrollContentOffsetChange;
- (void)_updateTabBar;
- (void)_updateTableIndexControllerWithFocusedDisplayedTabController;
- (void)_updateTabControllersWithScrollContentInset;
- (void)_updateTabControllersWithVisible;
- (void)_updateTabControllersWithFocusedDisplayedTabController;
- (void)_updateFocusedDisplayedTabController;
- (void)_updateDisplayedTabControllers:(_Bool)arg1;
- (id)_newFocusedDisplayedTabController;
- (void)_scrollToDisplayedTabController:(id)arg1 animated:(_Bool)arg2;
- (id)_newDisplayedTabControllers;
- (void)_updateScrollingTabs:(_Bool)arg1;
- (id)_tabControllerWithTabType:(unsigned long long)arg1;
- (id)_visibleTabControllers;
- (void)_removePhotoLibraryFetcherListeners;
- (void)_addPhotoLibraryFetcherListeners;
- (void)_showInitialNeedsPhotoAccessIfNeeded;
- (void)_initializePhotoLibraryFetcher;
- (void)_loadTabController:(id)arg1;
- (id)_loadedTabControllers;
- (void)_applyDeferredData;
- (_Bool)_shouldDeferUpdating;
- (void)_updateDisplayedPrivateTabControllers;
- (void)privateGalleryManagerDidUnlock:(id)arg1;
- (void)privateGalleryManagerDidLock:(id)arg1;
- (void)privateGalleryManagerDidUpdatePassphrase:(id)arg1;
- (void)privateGalleryManagerDidSetup:(id)arg1;
- (void)galleryUserDefaultsManager:(id)arg1 didUpdateWithChangedAttributes:(id)arg2;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)galleryTabBarsController:(id)arg1 didSelectForTabController:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)tabController:(id)arg1 didSaveFeaturedStory:(id)arg2;
- (void)tabControllerDidDismissOpera:(id)arg1;
- (void)tabControllerDidPresentOpera:(id)arg1;
- (id)tabControllerViewControllerToPresentFrom;
- (_Bool)tabControllerCollectionViewIsFullyVisible:(id)arg1;
- (void)tabControllerDidPressLagunaImportButton:(id)arg1;
- (void)tabControllerDidPressLagunaMigrationButton:(id)arg1;
- (double)tabControllerTopInset:(id)arg1;
- (void)tabController:(id)arg1 didPopViewController:(id)arg2;
- (void)tabController:(id)arg1 didPushViewController:(id)arg2;
- (CDStruct_bac8f6e9)mediaScenePathForTabController:(id)arg1 withMediaScenePathComponent:(unsigned long long)arg2;
- (void)tabControllerDidEndEditing:(id)arg1;
- (void)tabControllerDidBeginEditing:(id)arg1;
- (void)tabControllerDidEndDecelerating:(id)arg1;
- (void)tabControllerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tabControllerWillBeginDragging:(id)arg1;
- (void)tabController:(id)arg1 didChangeSelectionMode:(unsigned long long)arg2 forGallerySnap:(id)arg3;
- (void)tabController:(id)arg1 didChangeSelectionMode:(unsigned long long)arg2 forGalleryItem:(id)arg3;
- (_Bool)tabController:(id)arg1 shouldDeselectGalleryItem:(id)arg2;
- (void)tabController:(id)arg1 didChangeDisplayedContent:(unsigned long long)arg2;
- (void)tabControllerDidChangeScrollContentOffset:(id)arg1;
- (void)tabControllerDidFinishLoading:(id)arg1;
- (void)tabController:(id)arg1 requestsSelectMode:(unsigned long long)arg2;
- (void)cameraRollTabControllerRequestsUpdateDisplay:(id)arg1;
- (void)_handleLongPress:(id)arg1 item:(id)arg2 selectionMode:(unsigned long long)arg3 fromView:(id)arg4;
- (id)_featuredStoryActionMenuHelper;
- (id)_viewControllerToPresentFrom;
- (void)tabController:(id)arg1 presentEditForItem:(id)arg2 lens:(id)arg3 editedImage:(id)arg4 fromView:(id)arg5;
- (void)tabController:(id)arg1 presentActionMenu:(long long)arg2 items:(id)arg3 fromView:(id)arg4;
- (void)tabController:(id)arg1 editSelected:(long long)arg2 selectionMode:(unsigned long long)arg3 items:(id)arg4 fromView:(id)arg5 longPress:(id)arg6;
- (void)tabController:(id)arg1 browseSelected:(long long)arg2 selectionMode:(unsigned long long)arg3 items:(id)arg4 fromView:(id)arg5;
- (_Bool)isTabVisible:(unsigned long long)arg1;
- (void)scrollToTab:(unsigned long long)arg1 galleryItem:(id)arg2 animated:(_Bool)arg3;
- (void)scrollToTab:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)displayedTabs;
- (_Bool)isPrivateTabFocused;
- (void)endEditing;
- (_Bool)isEditing;
- (_Bool)isTracking;
- (_Bool)isDragging;
- (void)dismissFullScreenPlayerIfNeeded;
@property(readonly, nonatomic) _Bool viewingSnapInFullScreen;
- (void)_selectGalleryItems:(id)arg1;
- (void)selectGalleryItem:(id)arg1 selectionMode:(unsigned long long)arg2;
- (id)selectedGallerySnaps;
- (id)selectedGalleryItems;
- (void)_setLoading:(_Bool)arg1;
@property(readonly, nonatomic, getter=isSelecting) _Bool selecting;
- (void)updateWithHeaderBottomY:(double)arg1 animated:(_Bool)arg2;
- (void)updateWithData:(id)arg1;
@property(readonly, nonatomic) CDStruct_bac8f6e9 currentMediaScenePath;
- (void)setScrollContentDistanceToTop:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double scrollContentDistanceToTop;
- (void)setScrollContentOffset:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double scrollContentOffset;
@property(readonly, nonatomic) double scrollContentTopInset;
- (void)updateTabBarCornerRadius:(double)arg1;
@property(readonly, nonatomic) double visibleTabBarsHeight;
@property(readonly, nonatomic) double tabBarsContainerHeight;
@property(readonly, nonatomic) UIView *tableIndexView;
@property(readonly, nonatomic) UIView *tabBarsContainerView;
- (void)galleryViewWillAppear;
- (void)galleryViewDidDisappear;
- (void)galleryViewHeightUpdated;
- (void)viewDidAppearOnce;
- (void)loadViewsIfNeeded;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

