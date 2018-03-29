//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchResultsUpdating-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBTweakCategory, NSArray, NSString, UISearchController, UITableView;
@protocol _FBTweakCollectionViewControllerDelegate;

@interface _FBTweakCollectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchResultsUpdating>
{
    UITableView *_tableView;
    NSArray *_sortedCollections;
    UISearchController *_searchController;
    FBTweakCategory *_tweakCategory;
    id <_FBTweakCollectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_FBTweakCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBTweakCategory *tweakCategory; // @synthesize tweakCategory=_tweakCategory;
- (void).cxx_destruct;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_keyboardFrameChanged:(id)arg1;
- (void)_done;
- (void)reloadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithTweakCategory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
