//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTPageController.h"
#import "SPTRadioPlaybackObserver.h"
#import "SPTRadioStationsObserver.h"
#import "SPTSearchExternalViewControllerDelegate.h"
#import "SPTStationsCreateBarDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NSURL, SPTInfoView, SPTProgressView, SPTRadioLogger, SPTRadioPlaybackService, SPTRadioStationsService, SPTSearchExternalViewController, SPTStationsCreateBar, UIViewController;

@interface SPTStationsListViewController : SPTableViewController <UITableViewDataSource, UITableViewDelegate, SPTRadioStationsObserver, SPTImageLoaderDelegate, SPTStationsCreateBarDelegate, SPTSearchExternalViewControllerDelegate, SPTRadioPlaybackObserver, UINavigationControllerDelegate, SPContentInsetViewController, SPTPageController>
{
    _Bool _isDeletingStation;
    NSArray *_userSavedStations;
    SPTRadioStationsService *_stationService;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioLogger *_loggingService;
    SPTProgressView *_progressView;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTImageLoader> _imageLoader;
    id <SPTSearchService> _search;
    id <SPTLocalSettings> _localSettings;
    SPTStationsCreateBar *_createBarView;
    SPTSearchExternalViewController *_searchViewController;
    UIViewController *_searchTableViewController;
    SPTInfoView *_infoView;
    id <SPTAlertController> _alertController;
}

@property(nonatomic) _Bool isDeletingStation; // @synthesize isDeletingStation=_isDeletingStation;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIViewController *searchTableViewController; // @synthesize searchTableViewController=_searchTableViewController;
@property(retain, nonatomic) SPTSearchExternalViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) SPTStationsCreateBar *createBarView; // @synthesize createBarView=_createBarView;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTSearchService> search; // @synthesize search=_search;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTRadioLogger *loggingService; // @synthesize loggingService=_loggingService;
@property(retain, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
@property(copy, nonatomic) NSArray *userSavedStations; // @synthesize userSavedStations=_userSavedStations;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)searchViewControllerDidScroll:(id)arg1;
- (id)provideInitialViewControllerForSearchViewController:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectEntityWithURL:(id)arg2 itemName:(id)arg3 creatorName:(id)arg4 sourceName:(id)arg5 imageURL:(id)arg6;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)filterBarTextDidEndEditing:(id)arg1;
- (void)filterBarTextDidBeginEditing:(id)arg1;
- (void)filterBarContextButtonTapped:(id)arg1;
- (void)filterBar:(id)arg1 textDidChange:(id)arg2;
- (void)radioStationService:(id)arg1 userSavedStationsChanged:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)URI;
- (void)sp_updateContentInsets;
- (_Bool)isStationCurrentlyPlaying:(id)arg1;
- (void)hideInfoView;
- (void)showInfoView;
- (void)updateInfoViewWithError:(id)arg1;
- (void)hideSearchTableView;
- (void)showSearchTableView;
- (void)digestUpdatedSavedStationsList:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStationService:(id)arg1 playbackService:(id)arg2 imageLoaderFactory:(id)arg3 search:(id)arg4 localSettings:(id)arg5 loggingService:(id)arg6 alertController:(id)arg7;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
