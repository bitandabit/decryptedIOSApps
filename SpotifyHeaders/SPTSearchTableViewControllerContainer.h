//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTSearch2RootViewControllerProtocol.h"

@class NSString, SPTSearchTableViewController;

@interface SPTSearchTableViewControllerContainer : UIViewController <SPTSearch2RootViewControllerProtocol>
{
    _Bool _automaticallyAdjustsInsets;
    SPTSearchTableViewController *_searchViewController;
    struct UIEdgeInsets _insets;
}

@property(readonly, nonatomic) SPTSearchTableViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) _Bool automaticallyAdjustsInsets; // @synthesize automaticallyAdjustsInsets=_automaticallyAdjustsInsets;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
- (void)resetSearch;
- (void)focusSearchBar;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) unsigned long long cancelButtonVisibility; // @dynamic cancelButtonVisibility;
- (void)viewDidLayoutSubviews;
- (id)initWithSearchTableViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

