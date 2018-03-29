//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSString, SPTFriendsHomeViewModel;

@interface SPTFriendsHomeViewDataSource : NSObject <UITableViewDataSource>
{
    SPTFriendsHomeViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTFriendsHomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configureBannerCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)registerCellReuseForTableView:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

