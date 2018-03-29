//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSearchViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTContextMenuPresenterDelegate.h"
#import "SPTExplicitContentEnabledStateObserver.h"
#import "SPTScrollToTopViewController.h"
#import "SPTSearchBarStateObserver.h"
#import "SPTSearchPlayerDelegate.h"
#import "SearchViewModelDelegate.h"
#import "UITableViewDelegate.h"

@class NSString, SPTInfoView, SPTNetworkConnectivityController, SPTTableView, UIActivityIndicatorView;

@interface SPTSearchLegacyResultsViewController : SPTSearchViewController <SearchViewModelDelegate, SPTSearchPlayerDelegate, SPTContextMenuPresenterDelegate, UITableViewDelegate, SPContentInsetViewController, SPTScrollToTopViewController, SPTExplicitContentEnabledStateObserver, SPTSearchBarStateObserver>
{
    _Bool _presentedInPopover;
    _Bool _isPresentingContextMenu;
    SPTTableView *_tableView;
    UIActivityIndicatorView *_loadingView;
    SPTInfoView *_infoView;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPContextMenuFeature> _contextMenu;
    id <SPTPodcastContextMenuProvider> _episodeContextMenuProvider;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuOptions> _contextMenuOptions;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTSearchBarStateObservable> _searchBarStateObservableObject;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    NSString *_referrerIdentifier;
}

@property(copy, nonatomic, getter=spt_referrerIdentifier) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(nonatomic) _Bool isPresentingContextMenu; // @synthesize isPresentingContextMenu=_isPresentingContextMenu;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(nonatomic) __weak id <SPTSearchBarStateObservable> searchBarStateObservableObject; // @synthesize searchBarStateObservableObject=_searchBarStateObservableObject;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> episodeContextMenuProvider; // @synthesize episodeContextMenuProvider=_episodeContextMenuProvider;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic, getter=isPresentedInPopover) _Bool presentedInPopover; // @synthesize presentedInPopover=_presentedInPopover;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)spt_scrollToTop;
- (void)dismissBarButtonItemTapped;
- (void)searchBarDidUpdateFocus:(_Bool)arg1;
- (void)searchBarDidUpdateSearchString:(id)arg1 searchTag:(id)arg2;
- (void)showSearchResultsAndScrollTableViewToTop:(_Bool)arg1;
- (_Bool)shouldShowSearchResults;
- (_Bool)hasSearchResults;
- (void)updateViewWithError:(id)arg1 scrollResultsViewToTop:(_Bool)arg2;
- (id)searchResultsView;
- (void)infoViewErrorButtonTapped;
- (void)configureInfoView:(id)arg1 forSearchInfoType:(unsigned long long)arg2;
- (void)showInfoViewOfSearchInfoType:(unsigned long long)arg1;
- (void)hideInfoView;
- (void)layoutOverlayViewsAnimated:(_Bool)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)setTopContentInset:(double)arg1;
- (void)hideSearchLoadingView;
- (void)showSearchLoadingView;
- (void)showSearchLoadingViewAfterDelay:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)goOnlineButtonTapped;
- (_Bool)shouldLoadNextDatasetWhenScrolling;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableHeaderOrFooterTapped;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)createGoOnlineButton;
- (id)tableHeaderView;
- (void)setupTableView;
- (void)setupInfoAndLoadingViews;
- (_Bool)isCellDisabledForModel:(id)arg1;
- (void)resetContentOffset;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (id)provideContextMenuOptions;
- (void)searchPlayer:(id)arg1 didChangeURL:(id)arg2 isPlaying:(_Bool)arg3;
- (void)searchViewModel:(id)arg1 embeddedCollectionViewDidSelectModel:(id)arg2;
- (void)searchViewModel:(id)arg1 contextMenuButtonTappedInCellAtIndexPath:(id)arg2;
- (id)searchViewModel:(id)arg1 indexPathForCell:(id)arg2;
- (void)searchViewModel:(id)arg1 didUpdateWithError:(id)arg2;
- (id)provideCurrentCatalogForSearchViewModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 player:(id)arg2 shelves:(id)arg3 productState:(id)arg4 session:(id)arg5 navigationRouter:(id)arg6 contextMenu:(id)arg7 episodeContextMenuProvider:(id)arg8 imageLoader:(id)arg9 networkConnectivityController:(id)arg10 searchBarStateObservableObject:(id)arg11 explicitContentAccessManager:(id)arg12 barButtonItemManager:(id)arg13 logCenter:(id)arg14 referrerIdentifier:(id)arg15;
@property(readonly, nonatomic) _Bool shouldDismissKeyboardWhenTappingHeaderOrFooter;
@property(readonly, nonatomic) _Bool shouldDismissKeyboardWhenSelectingSearchResultRow;
@property(readonly, nonatomic) _Bool shouldDismissKeyboardWhenScrollingContent;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

