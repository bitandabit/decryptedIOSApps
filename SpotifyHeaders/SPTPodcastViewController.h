//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTNavigationControllerTransitioning.h"
#import "SPTPageController.h"
#import "SPTPodcastHeaderDescriptionViewDelegate.h"
#import "SPTPodcastTestManagerObserver.h"
#import "SPTPodcastVideoViewControllerTransitionDelegate.h"
#import "SPTPodcastViewModelDelegate.h"
#import "SPTShareableContext.h"
#import "SPTShowContextMenuControllerDelegate.h"
#import "SPTTableViewCellHeightComputerDelegate.h"

@class GLUEButton, NSDate, NSString, NSURL, SPTCollectionToolbarHeaderView, SPTEntityTableHeaderView, SPTInfoView, SPTPodcastHeaderDescriptionView, SPTPodcastLogger, SPTPodcastVideoPlayerView, SPTPodcastVideoViewControllerTransition, SPTPodcastViewModel, SPTProgressView, SPTShowContextMenuController, UIBarButtonItem, UIButton, UIImage, UIView;

@interface SPTPodcastViewController : SPTableViewController <SPContentInsetViewController, SPTNavigationControllerNavigationBarState, SPTPodcastViewModelDelegate, SPTImageLoaderDelegate, SPTShowContextMenuControllerDelegate, SPTTableViewCellHeightComputerDelegate, SPTPodcastVideoViewControllerTransitionDelegate, SPTShareableContext, SPTPodcastHeaderDescriptionViewDelegate, SPTPodcastTestManagerObserver, SPTNavigationControllerTransitioning, SPTPageController>
{
    _Bool _enteredEditMode;
    _Bool _isAudioMode;
    _Bool _isVideoMode;
    _Bool _dataLoaded;
    _Bool _firstTimeShowing;
    SPTPodcastViewModel *_viewModel;
    SPTEntityTableHeaderView *_headerView;
    id <SPTImageLoader> _imageLoader;
    id <GLUEImageLoader> _glueImageLoader;
    GLUEButton *_headerFollowButton;
    id <SPTPodcastEpisodeCellConfigurator> _cellConfigurator;
    id <SPTVideoFeature> _vpFeature;
    id <SPTVideoSurfaceManager> _surfaceManager;
    SPTShowContextMenuController *_showContextMenuController;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    id <GLUETheme> _theme;
    CDUnknownBlockType _contextResponseHandler;
    SPTCollectionToolbarHeaderView *_toolbarSectionHeader;
    UIView *_filterHeader;
    SPTPodcastHeaderDescriptionView *_headerDescriptionView;
    UIBarButtonItem *_filterButton;
    NSDate *_statusBarHideTime;
    UIImage *_headerImage;
    UIImage *_videoPlayingHeaderImage;
    SPTProgressView *_progressView;
    SPTPodcastVideoPlayerView *_videoPlayerView;
    SPTInfoView *_infoView;
    UIButton *_contextMenuButtonPad;
    UIBarButtonItem *_contextMenuBarButtonItem;
    UIBarButtonItem *_likeBarButtonItem;
    SPTPodcastVideoViewControllerTransition *_videoTransition;
    SPTPodcastLogger *_logger;
    id <SPTCollectionLogger> _collectionLogger;
    struct CGPoint _filterHeaderOrigin;
}

@property(nonatomic) _Bool firstTimeShowing; // @synthesize firstTimeShowing=_firstTimeShowing;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPodcastVideoViewControllerTransition *videoTransition; // @synthesize videoTransition=_videoTransition;
@property(retain, nonatomic) UIBarButtonItem *likeBarButtonItem; // @synthesize likeBarButtonItem=_likeBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *contextMenuBarButtonItem; // @synthesize contextMenuBarButtonItem=_contextMenuBarButtonItem;
@property(retain, nonatomic) UIButton *contextMenuButtonPad; // @synthesize contextMenuButtonPad=_contextMenuButtonPad;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTPodcastVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool isVideoMode; // @synthesize isVideoMode=_isVideoMode;
@property(nonatomic) _Bool isAudioMode; // @synthesize isAudioMode=_isAudioMode;
@property(nonatomic) _Bool enteredEditMode; // @synthesize enteredEditMode=_enteredEditMode;
@property(retain, nonatomic) UIImage *videoPlayingHeaderImage; // @synthesize videoPlayingHeaderImage=_videoPlayingHeaderImage;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) NSDate *statusBarHideTime; // @synthesize statusBarHideTime=_statusBarHideTime;
@property(retain, nonatomic) UIBarButtonItem *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) SPTPodcastHeaderDescriptionView *headerDescriptionView; // @synthesize headerDescriptionView=_headerDescriptionView;
@property(retain, nonatomic) UIView *filterHeader; // @synthesize filterHeader=_filterHeader;
@property(nonatomic) struct CGPoint filterHeaderOrigin; // @synthesize filterHeaderOrigin=_filterHeaderOrigin;
@property(retain, nonatomic) SPTCollectionToolbarHeaderView *toolbarSectionHeader; // @synthesize toolbarSectionHeader=_toolbarSectionHeader;
@property(copy, nonatomic) CDUnknownBlockType contextResponseHandler; // @synthesize contextResponseHandler=_contextResponseHandler;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(readonly, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) SPTShowContextMenuController *showContextMenuController; // @synthesize showContextMenuController=_showContextMenuController;
@property(retain, nonatomic) id <SPTVideoSurfaceManager> surfaceManager; // @synthesize surfaceManager=_surfaceManager;
@property(nonatomic) __weak id <SPTVideoFeature> vpFeature; // @synthesize vpFeature=_vpFeature;
@property(retain, nonatomic) id <SPTPodcastEpisodeCellConfigurator> cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) GLUEButton *headerFollowButton; // @synthesize headerFollowButton=_headerFollowButton;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTEntityTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTPodcastViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)podcastTestManagerDidUpdate:(id)arg1;
- (void)playURIInContext:(id)arg1;
- (void)evaluatePendingContextResponseHandlerWithViewModel:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)didTapPodcastDescriptionText;
- (void)podcastVideoViewControllerTransitionDidFinish:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForPopOperationToViewController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPushOperationFromViewController:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1 indexPath:(id)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 forEpisode:(id)arg2;
- (void)setupContentViewForCell:(id)arg1;
- (void)configureVideoCell:(id)arg1 atIndexPath:(id)arg2;
- (id)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)editOfflinedEpisodesForShow:(id)arg1;
- (void)followShow:(id)arg1 follow:(_Bool)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (id)URI;
- (void)viewModelPodcastLatestPlayedEpisode:(id)arg1 atIndexPath:(id)arg2;
- (void)viewModelPodcastDidUpdatePlayingEpisode:(id)arg1;
- (void)showInfoViewWithError:(id)arg1;
- (void)viewModelFinishedLoadingWithoutPlayerStateChange:(id)arg1;
- (void)viewModel:(id)arg1 podcastDidFinishLoadingWithError:(id)arg2;
- (void)presentAlertVideoNotAvailable;
- (_Bool)isMediaTypeSupported:(unsigned long long)arg1;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
- (unsigned long long)preferredNavigationBarState;
- (void)scrollViewDidScrollInVideoMode:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)videoPlayerInitialFrame;
- (void)updateVideoViewAnimated:(_Bool)arg1;
- (void)setupVideoView;
- (void)hideVideoPlayerView;
- (void)showVideoPlayerViewAnimated:(_Bool)arg1;
- (void)videoSurfaceTapped:(id)arg1;
- (void)updateContextMenuButtonPad;
- (void)updateHeaderViewImage;
- (void)collapseHeaderViewOnEnteringViewIfFollowed;
- (void)updateHeaderFollowButton;
- (void)updateHeaderView;
- (id)headerMetadataText;
- (void)enableContextMenuButton;
- (void)setupContextMenuButtons;
- (void)setupHeaderFollowButton;
- (void)setupDescriptionPage;
- (void)setupHeaderView;
- (void)filterAction:(id)arg1;
- (void)enableFilterHeader;
- (void)setupFilterHeader;
- (void)followButtonTapped:(id)arg1;
- (void)reloadActiveRow;
- (void)setupTableView;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)completionRatioForEpisode:(id)arg1;
- (id)playStateViewForVideo:(id)arg1;
- (void)offlineAccessoryButtonTapped:(id)arg1;
- (void)cellContextMenuTapped:(id)arg1;
- (void)invokeHeaderContextMenu:(id)arg1;
- (void)updateBarButtons;
- (void)editDoneButtonTapped;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPodcastViewModel:(id)arg1 imageLoader:(id)arg2 glueImageLoader:(id)arg3 vpFeature:(id)arg4 logger:(id)arg5 collectionLogger:(id)arg6 showContextMenuController:(id)arg7 episodeCellConfigurator:(id)arg8 collectionTestManager:(id)arg9 podcastTestManager:(id)arg10 podcastContextMenuProvider:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

