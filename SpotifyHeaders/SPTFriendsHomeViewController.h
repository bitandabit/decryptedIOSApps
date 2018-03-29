//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPTFriendsHomeViewModelDelegate.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPageController.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NSURL, SPTFriendsHomeLogger, SPTFriendsHomeViewDataSource, SPTFriendsHomeViewModel, SPTInfoView, SPTProgressView;

@interface SPTFriendsHomeViewController : SPTableViewController <SPTFriendsHomeViewModelDelegate, UITableViewDelegate, SPTOfflineModeStateObserver, SPTPageController>
{
    SPTFriendsHomeViewModel *_viewModel;
    id <SPTOfflineModeState> _offlineModeState;
    SPTFriendsHomeViewDataSource *_dataSource;
    SPTProgressView *_progressView;
    SPTInfoView *_offlineView;
    SPTInfoView *_errorView;
    NSArray *_infoViews;
}

@property(retain, nonatomic) NSArray *infoViews; // @synthesize infoViews=_infoViews;
@property(retain, nonatomic) SPTInfoView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) SPTInfoView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTFriendsHomeViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTFriendsHomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)provideListenersViewController:(id)arg1 forContextURI:(id)arg2;
- (void)pushFriendsListForListeners:(id)arg1 forContextURI:(id)arg2;
- (void)didTapFacepileOnContentItem:(id)arg1;
- (void)viewModel:(id)arg1 didLoadData:(id)arg2 error:(id)arg3;
- (void)retryButtonPressed;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)displayOfflineView;
- (void)displayInfoViewForError:(id)arg1;
- (void)hideInfoViews;
- (void)loadData;
- (id)setupInfoViewForType:(long long)arg1 withRetryButton:(_Bool)arg2;
- (void)loadTableView;
@property(readonly, nonatomic) SPTFriendsHomeLogger *logger;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 offlineModeState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
