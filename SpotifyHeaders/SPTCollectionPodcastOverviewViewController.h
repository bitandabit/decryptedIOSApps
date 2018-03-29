//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTCollectionEntityListObserver.h"
#import "SPTPageController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, NSURL, SPTCollectionPodcastInfoViewProvider, SPTCollectionPodcastOverviewNavigationViewModel, SPTCollectionPodcastViewModel, SPTCollectionTableViewController, SPTInfoView, SPTTableView, UITableView;

@interface SPTCollectionPodcastOverviewViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPContentInsetViewController, SPTCollectionEntityListObserver, SPTPageController>
{
    SPTCollectionPodcastOverviewNavigationViewModel *_viewModel;
    SPTCollectionTableViewController *_rootViewController;
    SPTCollectionPodcastViewModel *_collectionPodcastViewModel;
    SPTCollectionPodcastInfoViewProvider *_infoViewProvider;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPodcastTestManager> _podcastTestManager;
    UITableView *_tableView;
    SPTTableView *_headerTableView;
    SPTInfoView *_infoView;
    id <SPTCollectionLogger> _logger;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTTableView *headerTableView; // @synthesize headerTableView=_headerTableView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTCollectionPodcastInfoViewProvider *infoViewProvider; // @synthesize infoViewProvider=_infoViewProvider;
@property(nonatomic) __weak SPTCollectionPodcastViewModel *collectionPodcastViewModel; // @synthesize collectionPodcastViewModel=_collectionPodcastViewModel;
@property(retain, nonatomic) SPTCollectionTableViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) SPTCollectionPodcastOverviewNavigationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)spt_referrerIdentifier;
- (void)removeEmptyStateInfoView;
- (void)handleEmptyStateInfoView;
- (void)entityListDidReload:(id)arg1;
- (id)URI;
- (void)sp_updateContentInsets;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupHeaderTable;
- (double)cellHeight;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOverViewNavigationViewModel:(id)arg1 collectionPodcastViewModel:(id)arg2 rootViewController:(id)arg3 infoViewProvider:(id)arg4 logger:(id)arg5 linkDispatcher:(id)arg6 podcastTestManager:(id)arg7;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

