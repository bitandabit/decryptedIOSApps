//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

#import "SPContentInsetViewController.h"
#import "SPObjectRepresentation.h"
#import "SPTEntityHeaderBarButtonItemsProtocol.h"
#import "SPTEntityTableHeaderViewNavigationBarProvider.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "SPTProfileCountsViewDelegate.h"
#import "SPTProfileViewModelDelegate.h"
#import "SPViewController.h"
#import "UITableViewDelegate.h"

@class NSString, NSURL, SPTEntityTableHeaderView, SPTInfoView, SPTProfileBodyContainerView, SPTProfileCountsView, SPTProfileDataSource, SPTProfileInfoViewController, SPTProfileLogger, SPTProfileViewModel, SPTTableView, SPTViewLogger;

@interface SPTProfileViewController : SPViewController <SPTProfileViewModelDelegate, SPTProfileCountsViewDelegate, SPObjectRepresentation, SPViewController, SPTEntityTableHeaderViewNavigationBarProvider, SPContentInsetViewController, SPTImageLoaderDelegate, SPTNavigationControllerNavigationBarState, SPTEntityHeaderBarButtonItemsProtocol, UITableViewDelegate, SPTPageController>
{
    _Bool _hasSetupContentOffset;
    SPTProfileViewModel *_viewModel;
    SPTViewLogger *_viewLogger;
    SPTProfileLogger *_logger;
    id <SPTFindFriendsFeature> _findFriendsFeature;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTBrowseRedirectButtonProvider> _browseRedirectButtonProvider;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTProfileDataSource *_dataSource;
    id <GLUETheme> _theme;
    id <SPTImageLoader> _imageLoader;
    SPTProfileCountsView *_countsView;
    SPTInfoView *_emptyContentView;
    SPTEntityTableHeaderView *_entityHeaderView;
    SPTProfileBodyContainerView *_profileBodyContainerView;
    SPTTableView *_tableView;
    SPTProfileInfoViewController *_infoViewController;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
}

@property(nonatomic) _Bool hasSetupContentOffset; // @synthesize hasSetupContentOffset=_hasSetupContentOffset;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) SPTProfileInfoViewController *infoViewController; // @synthesize infoViewController=_infoViewController;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTProfileBodyContainerView *profileBodyContainerView; // @synthesize profileBodyContainerView=_profileBodyContainerView;
@property(retain, nonatomic) SPTEntityTableHeaderView *entityHeaderView; // @synthesize entityHeaderView=_entityHeaderView;
@property(retain, nonatomic) SPTInfoView *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
@property(retain, nonatomic) SPTProfileCountsView *countsView; // @synthesize countsView=_countsView;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTProfileDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) __weak id <SPTBrowseRedirectButtonProvider> browseRedirectButtonProvider; // @synthesize browseRedirectButtonProvider=_browseRedirectButtonProvider;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(nonatomic) __weak id <SPTFindFriendsFeature> findFriendsFeature; // @synthesize findFriendsFeature=_findFriendsFeature;
@property(retain, nonatomic) SPTProfileLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) SPTProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (id)URI;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (id)provideNavigationBarForHeaderView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapHeaderCountsButtonWithType:(unsigned long long)arg1;
- (void)viewModel:(id)arg1 followUpdateDidFailWithError:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateProfileImageURL:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateFollowData:(id)arg2;
- (id)profileFindFriendsButton;
- (id)profileFollowButton;
- (void)viewModel:(id)arg1 setLoading:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailAllRequestsWithError:(id)arg2;
- (void)viewModelDidFinishAllRequests:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (id)provideSettingsButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
- (void)sp_updateBottomContentInset:(double)arg1;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)settingsButtonTapped;
- (void)navigateToFollowSuggestionsButtonTapped;
- (void)followButtonTapped;
- (void)showEmptyContentView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyTheme;
- (void)configureRightBarButtonItems:(id)arg1;
- (void)addConstraints;
- (id)provideContextMenuButton;
- (void)addNavbarButtonsWithScannables;
- (void)addNavbarButtonsWithoutScannables;
- (void)updateHeaderView;
- (void)viewContextMenuButtonTapped:(id)arg1;
- (_Bool)shouldShowScannables;
- (void)setupCountsView;
- (void)setupHeaderView;
- (void)setupTableView;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 logger:(id)arg3 theme:(id)arg4 imageLoaderFactory:(id)arg5 contextMenuFeature:(id)arg6 browseRedirectButtonProvider:(id)arg7 findFriendsFeature:(id)arg8 linkDispatcher:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

