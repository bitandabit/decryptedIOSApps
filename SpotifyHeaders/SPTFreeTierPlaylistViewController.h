//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTFreeTierPlaylistCellConfiguratorDelegate.h"
#import "SPTFreeTierPlaylistViewModelDelegate.h"
#import "SPTFreeTierRecommendedPlaylistFooterViewControllerDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUEEntityRowStyle, NSLayoutConstraint, NSString, NSURL, SPTFreeTierPlaylistBarButtonManager, SPTFreeTierPlaylistCellConfigurator, SPTFreeTierPlaylistFooterProvider, SPTFreeTierPlaylistHeaderViewController, SPTFreeTierPlaylistLogger, SPTFreeTierPlaylistSponsoredLogoCellStyle, SPTProgressView, SPTTableView, UIViewController<SPTFreeTierRecommendedPlaylistFooterViewController>;

@interface SPTFreeTierPlaylistViewController : UIViewController <SPTFreeTierPlaylistCellConfiguratorDelegate, SPTFreeTierRecommendedPlaylistFooterViewControllerDelegate, SPTNavigationControllerNavigationBarState, SPContentInsetViewController, UITableViewDataSource, UITableViewDelegate, SPTPageController, SPTFreeTierPlaylistViewModelDelegate>
{
    NSURL *_playlistURL;
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
    id <SPTImageLoader> _imageLoader;
    id <SPTFreeTierEducationTooltipPresenter> _tooltipPresenter;
    SPTFreeTierPlaylistBarButtonManager *_playlistBarButtonManager;
    id <SPContextMenuFeature> _contextMenuService;
    SPTFreeTierPlaylistFooterProvider *_footerProvider;
    SPTFreeTierPlaylistLogger *_logger;
    SPTTableView *_tableView;
    UIViewController<SPTFreeTierRecommendedPlaylistFooterViewController> *_footerViewController;
    SPTFreeTierPlaylistHeaderViewController *_headerViewController;
    SPTProgressView *_progressView;
    GLUEEntityRowStyle *_trackRowStyle;
    SPTFreeTierPlaylistSponsoredLogoCellStyle *_sponsorshipStyle;
    SPTFreeTierPlaylistCellConfigurator *_cellConfigurator;
    NSLayoutConstraint *_bottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) SPTFreeTierPlaylistCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) SPTFreeTierPlaylistSponsoredLogoCellStyle *sponsorshipStyle; // @synthesize sponsorshipStyle=_sponsorshipStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTFreeTierPlaylistHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) UIViewController<SPTFreeTierRecommendedPlaylistFooterViewController> *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTFreeTierPlaylistFooterProvider *footerProvider; // @synthesize footerProvider=_footerProvider;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(readonly, nonatomic) SPTFreeTierPlaylistBarButtonManager *playlistBarButtonManager; // @synthesize playlistBarButtonManager=_playlistBarButtonManager;
@property(readonly, nonatomic) id <SPTFreeTierEducationTooltipPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (void)cellConfiguratorContextMenuButtonTapped:(id)arg1;
- (void)playlistSponsorshipDidChange;
- (void)freeTierPlaylistViewModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistViewModelDidChange:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
- (void)updateFooterViewIfLoaded;
- (void)footerViewControllerUpdated:(id)arg1;
- (void)hideProgressViewWithError:(id)arg1;
- (void)setupConstraints;
- (void)initializeInterface;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)initWithPlaylistURL:(id)arg1 playlistViewModel:(id)arg2 imageLoader:(id)arg3 tooltipPresenter:(id)arg4 theme:(id)arg5 playlistBarButtonManager:(id)arg6 contextMenuService:(id)arg7 footerProvider:(id)arg8 logger:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

