//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTPageController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, NSURL, SPTConcertsListingLogger, SPTConcertsListingModel, SPTConcertsTestManager, SPTTableView, SPTViewLogger;

@interface SPTConcertsGroupedListingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPTPageController>
{
    SPTConcertsListingModel *_model;
    SPTTableView *_tableView;
    long long _defaultStatusBarStyle;
    id <GLUETheme> _theme;
    id <SPTConcertsURLOpener> _URLOpener;
    SPTConcertsTestManager *_testManager;
    SPTConcertsListingLogger *_concertsListingLogger;
    SPTViewLogger *_viewLogger;
}

@property(readonly, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) SPTConcertsListingLogger *concertsListingLogger; // @synthesize concertsListingLogger=_concertsListingLogger;
@property(readonly, nonatomic) SPTConcertsTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTConcertsURLOpener> URLOpener; // @synthesize URLOpener=_URLOpener;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) long long defaultStatusBarStyle; // @synthesize defaultStatusBarStyle=_defaultStatusBarStyle;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTConcertsListingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)logConcertSelectionForConcert:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureAdornment:(id)arg1 atIndexPath:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1;
- (id)setupAdornmentForCell:(id)arg1;
- (void)setupContentViewForCell:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEventEntityModel:(id)arg1 URLOpener:(id)arg2 testManager:(id)arg3 concertsListingLogger:(id)arg4 viewLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

