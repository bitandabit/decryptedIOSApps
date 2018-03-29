//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTBarButtonItemManagerObserver.h"
#import "SPTConcertsEntityViewModelObserver.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"

@class NSString, NSURL, SPTConcertsEntityDataSource, SPTConcertsEntityHeaderContentController, SPTConcertsEntityViewDelegate, SPTConcertsEntityViewModel, SPTConcertsLogger, SPTEntityHeaderViewController, SPTInfoView, SPTProgressView, UICollectionView, UICollectionViewFlowLayout;

@interface SPTConcertsEntityViewController : UIViewController <SPContentInsetViewController, SPTNavigationControllerNavigationBarState, SPTConcertsEntityViewModelObserver, SPTBarButtonItemManagerObserver, SPTPageController>
{
    _Bool _shareIsEnabled;
    SPTConcertsEntityDataSource *_dataSource;
    SPTConcertsEntityViewDelegate *_viewDelegate;
    SPTConcertsEntityViewModel *_viewModel;
    SPTConcertsLogger *_logger;
    SPTInfoView *_infoView;
    SPTProgressView *_loadingProgressView;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    SPTEntityHeaderViewController *_headerViewController;
    SPTConcertsEntityHeaderContentController *_headerContentViewController;
    id <SPContextMenuActionsFactory> _contextMenuActionFactory;
    id <SPTBarButtonItemManager> _barButtonItemManager;
}

@property(nonatomic) _Bool shareIsEnabled; // @synthesize shareIsEnabled=_shareIsEnabled;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) id <SPContextMenuActionsFactory> contextMenuActionFactory; // @synthesize contextMenuActionFactory=_contextMenuActionFactory;
@property(retain, nonatomic) SPTConcertsEntityHeaderContentController *headerContentViewController; // @synthesize headerContentViewController=_headerContentViewController;
@property(retain, nonatomic) SPTEntityHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SPTProgressView *loadingProgressView; // @synthesize loadingProgressView=_loadingProgressView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(readonly, nonatomic) SPTConcertsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTConcertsEntityViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTConcertsEntityViewDelegate *viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(readonly, nonatomic) SPTConcertsEntityDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (unsigned long long)preferredNavigationBarState;
- (void)shareButtonTapped:(id)arg1;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (void)sp_updateContentInsets;
- (void)updateForEntityViewModel:(id)arg1;
- (void)entityViewModel:(id)arg1 showViewState:(long long)arg2;
- (void)entityViewModel:(id)arg1 showLoadingIndicator:(_Bool)arg2;
- (CDUnknownBlockType)changeToContentViewAnimations;
- (CDUnknownBlockType)changeToInfoViewAnimations;
- (void)updateInfoContentUsingInfoViewModel:(id)arg1;
- (void)updateToViewState:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadHeaderView;
- (void)loadLoadingProgressView;
- (void)loadInfoView;
- (void)configureCollectionView;
- (void)loadCollectionView;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 dataSource:(id)arg2 viewDelegate:(id)arg3 contextMenuActionFactory:(id)arg4 barButtonItemManager:(id)arg5 shareIsEnabled:(_Bool)arg6 concertsLogger:(id)arg7;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
