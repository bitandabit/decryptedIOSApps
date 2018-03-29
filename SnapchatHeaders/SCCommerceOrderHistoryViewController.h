//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPaymentsGenericTableViewController.h"

#import "SCCommerceLoggerPageMetricsDataSource-Protocol.h"

@class NSMutableArray, NSString, SCLoadingIndicatorView, SCUserSession, UIVisualEffectView;

@interface SCCommerceOrderHistoryViewController : SCPaymentsGenericTableViewController <SCCommerceLoggerPageMetricsDataSource>
{
    NSMutableArray *_orderList;
    NSMutableArray *_ordersByDate;
    UIVisualEffectView *_loadingBackgroundView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    NSString *_metricsDisplayId;
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)displayId;
- (void)_hideBlurView;
- (void)_showBlurView;
- (_Bool)_hasMorePages;
- (void)_fetchMorePages;
- (void)_sortOrdersByDate:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_loadingCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_setupTableView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 orderList:(id)arg2;

@end

