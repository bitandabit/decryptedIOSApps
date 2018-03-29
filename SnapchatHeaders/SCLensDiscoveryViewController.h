//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCLensDiscoveryDataProviderDelegate-Protocol.h"
#import "SCLensDiscoveryGroupCellDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SCLoadingIndicatorView, UIBarButtonItem, UITableView, UIView;
@protocol SCLensDiscoveryDataProvider, SCLensDiscoveryUIProviderProtocol;

@interface SCLensDiscoveryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SCLensDiscoveryDataProviderDelegate, SCLensDiscoveryGroupCellDelegate>
{
    SCLoadingIndicatorView *_progressIndicator;
    _Bool _keyboardShown;
    UIBarButtonItem *_backBarButtonItem;
    NSMutableDictionary *_cellsXOffsets;
    UITableView *_tableView;
    UIView *_topBar;
    id <SCLensDiscoveryUIProviderProtocol> _uiProvider;
    id <SCLensDiscoveryDataProvider> _dataProvider;
}

@property(retain) id <SCLensDiscoveryDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)lensDiscoveryDataProvider:(id)arg1 didFailToUpdateObjectsForCategoryAtIndex:(long long)arg2 canRetry:(_Bool)arg3 retryTimeout:(double)arg4;
- (void)lensDiscoveryDataProvider:(id)arg1 didUpdateObjectsForCategoryAtIndex:(long long)arg2;
- (void)lensDiscoveryDataProviderDidFailToUpdateCategories:(id)arg1 canRetry:(_Bool)arg2 retryTimeout:(double)arg3;
- (void)lensDiscoveryDataProviderDidUpdateCategories:(id)arg1;
- (void)lensDiscoveryCellProducer:(id)arg1 didDequeueLensDiscoveryCell:(id)arg2 forLens:(id)arg3;
- (_Bool)lensDiscoveryGroupCell:(id)arg1 isObjectNewWithId:(id)arg2 inCategoryWithId:(id)arg3;
- (void)lensDiscoveryGroupCell:(id)arg1 didChangeContentXOffset:(double)arg2;
- (void)lensDiscoveryGroupCell:(id)arg1 didSelectLens:(id)arg2 inCategoryWithId:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadCategoryAtIndex:(long long)arg1;
- (void)observeKeyboardAppearances;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)reloadData;
- (void)updateAndReloadData;
- (void)addKeyboardDismissalGestureToView:(id)arg1;
- (void)dismissKeyboard;
- (void)didCreateTopBar;
- (void)willReloadData;
- (id)selectedLensIds;
- (void)dismiss;
- (void)didSelectObject:(id)arg1 inCategoryWithId:(id)arg2;
- (id)backBarButtonItem;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDataProvider:(id)arg1 uiProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
