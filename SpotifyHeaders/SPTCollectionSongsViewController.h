//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPObjectRepresentation.h"
#import "SPTBarButtonItemManagerObserver.h"
#import "SPTCollectionFilterBarDelegate.h"
#import "SPTCollectionFilterSearchBarDelegate.h"
#import "SPTCollectionSongsModelDelegate.h"
#import "SPTExplicitContentEnabledStateObserver.h"
#import "SPTOfflineSwitchDelegate.h"
#import "SPTPageController.h"
#import "SPTProductStateObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUEEntityRowStyle, NSObject<SPTCollectionSongsModel>, NSString, NSURL, SPTCollectionFilterBar, SPTCollectionFilterSearchBar, SPTCollectionShuffleButtonContainer, SPTInfoView, SPTNavigationManager, SPTNetworkConnectivityController, SPTProgressView, SPTTableViewOfflineSwitchCell, SPTViewLogger, UITableView;

@interface SPTCollectionSongsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPObjectRepresentation, SPTCollectionFilterBarDelegate, SPTProductStateObserver, SPTOfflineSwitchDelegate, SPTBarButtonItemManagerObserver, SPTCollectionFilterSearchBarDelegate, SPTExplicitContentEnabledStateObserver, SPTCollectionSongsModelDelegate, SPContentInsetViewController, SPTPageController>
{
    _Bool _hideAvailableOffline;
    _Bool _userDefaultsLoaded;
    _Bool _shouldShowLocalFilesFilter;
    _Bool _hasLoggedDataDidLoad;
    NSObject<SPTCollectionSongsModel> *_model;
    UITableView *_tableView;
    SPTInfoView *_infoView;
    id <SPTShelves> _shelves;
    SPTCollectionFilterBar *_filterBar;
    SPTCollectionFilterSearchBar *_filterSearchBar;
    id <SPTLocalSettings> _localSettings;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTProductState> _productState;
    SPTCollectionShuffleButtonContainer *_shuffleButtonContainer;
    SPTTableViewOfflineSwitchCell *_offlineSwitchCell;
    id <SPTCollectionLogger> _logger;
    id <SPTNUXModifying> _NUXModifier;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTBrowseRedirectButtonProvider> _browseRedirectButtonProvider;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTCollectionTestManager> _collectionFeatureTestManager;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTProgressView *_progressView;
    id <GLUETheme> _theme;
    id <SPTSpiderGestureRegistry> _spiderGestureRegistry;
    SPTNavigationManager *_navigationManager;
    SPTViewLogger *_viewLogger;
    GLUEEntityRowStyle *_trackRowStyle;
}

@property(retain, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(nonatomic) _Bool hasLoggedDataDidLoad; // @synthesize hasLoggedDataDidLoad=_hasLoggedDataDidLoad;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) __weak SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(nonatomic) __weak id <SPTSpiderGestureRegistry> spiderGestureRegistry; // @synthesize spiderGestureRegistry=_spiderGestureRegistry;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) __weak id <SPTCollectionTestManager> collectionFeatureTestManager; // @synthesize collectionFeatureTestManager=_collectionFeatureTestManager;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) __weak id <SPTBrowseRedirectButtonProvider> browseRedirectButtonProvider; // @synthesize browseRedirectButtonProvider=_browseRedirectButtonProvider;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(nonatomic) _Bool shouldShowLocalFilesFilter; // @synthesize shouldShowLocalFilesFilter=_shouldShowLocalFilesFilter;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(retain, nonatomic) id <SPTNUXModifying> NUXModifier; // @synthesize NUXModifier=_NUXModifier;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTTableViewOfflineSwitchCell *offlineSwitchCell; // @synthesize offlineSwitchCell=_offlineSwitchCell;
@property(retain, nonatomic) SPTCollectionShuffleButtonContainer *shuffleButtonContainer; // @synthesize shuffleButtonContainer=_shuffleButtonContainer;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic, getter=isUserDefaultsLoaded) _Bool userDefaultsLoaded; // @synthesize userDefaultsLoaded=_userDefaultsLoaded;
@property(nonatomic) _Bool hideAvailableOffline; // @synthesize hideAvailableOffline=_hideAvailableOffline;
@property(retain, nonatomic) SPTCollectionFilterSearchBar *filterSearchBar; // @synthesize filterSearchBar=_filterSearchBar;
@property(retain, nonatomic) SPTCollectionFilterBar *filterBar; // @synthesize filterBar=_filterBar;
@property(nonatomic) __weak id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSObject<SPTCollectionSongsModel> *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)updateRightBarButtonItem;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (unsigned long long)offlineSwitchCellOfflineAvailability:(id)arg1;
- (void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (id)spt_referrerIdentifier;
- (void)logViewDataDidLoadIfLoadedAndNotAlreadyLogged;
- (id)shufflePlayCell;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)refreshShuffleMode;
- (id)URI;
- (void)loadLocalSettings;
- (_Bool)filterBarActive;
- (void)contextMenuButtonPressed:(id)arg1;
- (void)setFilterEditing:(_Bool)arg1;
- (void)setFilterTextChanged:(id)arg1;
- (void)filterSearchBarContextButtonTapped:(id)arg1;
- (void)filterSearchBarTextWillEndEditing:(id)arg1;
- (void)filterSearchBarTextWillBeginEditing:(id)arg1;
- (void)filterSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)filterBarContextButtonTapped:(id)arg1;
- (void)filterBarTextWillEndEditing:(id)arg1;
- (void)filterBarTextWillBeginEditing:(id)arg1;
- (void)filterBar:(id)arg1 textDidChange:(id)arg2;
- (void)updateInfoView;
- (void)modifyInfoViewForEmptyStaticFilterContext;
- (void)modifyInfoViewForEmptyFilterContext;
- (void)modifyInfoViewForNUX;
- (_Bool)isOfflineSwitchCellIndexPath:(id)arg1;
- (_Bool)isShufflePlayCellIndexPath:(id)arg1;
- (id)trackIndexForTableIndexPath:(id)arg1;
- (unsigned long long)trackSectionForSection:(unsigned long long)arg1;
- (long long)offlineSyncStatusForTrackAtIndexPath:(id)arg1;
- (id)viewEventURI;
- (id)URL;
- (void)songsModel:(id)arg1 setLoading:(_Bool)arg2;
- (void)songsModelDidUpdate:(id)arg1;
- (void)songsModelDidUpdatePlayingIndexPath:(id)arg1;
- (id)provideContextMenuOptions;
- (void)contextMenuButtonTapped:(id)arg1;
- (void)shufflePlay:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configureMultipleAccessoriesViewForCell:(id)arg1 status:(long long)arg2 accessoryLabelType:(long long)arg3;
- (void)setupTrailingAccessoryForCell:(id)arg1 indexPath:(id)arg2;
- (id)contentViewForCell:(id)arg1;
- (void)configureTrackCell:(id)arg1 withItem:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)sp_updateContentInsets;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 contextMenuFeature:(id)arg2 productState:(id)arg3 shelves:(id)arg4 localSettings:(id)arg5 networkConnectivityController:(id)arg6 collectionLogger:(id)arg7 NUXModifier:(id)arg8 abbaFeatureFlags:(id)arg9 shouldShowLocalFilesFilter:(_Bool)arg10 barButtonItemManager:(id)arg11 browseRedirectButtonProvider:(id)arg12 collectionTestManager:(id)arg13 modalPresentationController:(id)arg14 spiderMenu:(id)arg15 viewLogger:(id)arg16 navigationManager:(id)arg17 collectionTestManager:(id)arg18 explicitContentAccessManager:(id)arg19;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

