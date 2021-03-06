//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAlertViewActionController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;

@interface SCAlertViewActionListController : NSObject <UITableViewDelegate, UITableViewDataSource, SCAlertViewActionController>
{
    long long _rowCount;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _promptActionHandler;
    NSString *_accessibilityIdentifier;
    UITableView *_tableView;
    CDUnknownBlockType _didSelectBlock;
    CDUnknownBlockType _cellConfig;
    struct CGSize _listViewSize;
}

+ (id)actionWithCellConfig:(CDUnknownBlockType)arg1 rowCount:(long long)arg2 promptActionHandler:(CDUnknownBlockType)arg3;
+ (id)actionWithCellConfig:(CDUnknownBlockType)arg1 rowCount:(long long)arg2 actionHandler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType cellConfig; // @synthesize cellConfig=_cellConfig;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct CGSize listViewSize; // @synthesize listViewSize=_listViewSize;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, copy, nonatomic) CDUnknownBlockType promptActionHandler; // @synthesize promptActionHandler=_promptActionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)requiresAdditionalPaddingIfLastItem;
- (struct UIEdgeInsets)edgeInsets;
- (void)becomeFirstResponder;
- (_Bool)adjustsSizeToMatchStandard;
- (unsigned long long)alertViewActionType;
- (id)actionView;
- (struct CGSize)actionViewSize;
- (void)registerDidSelectBlock:(CDUnknownBlockType)arg1;
- (void)_setupTable;
- (id)initWithCellConfig:(CDUnknownBlockType)arg1 rowCount:(long long)arg2 promptActionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCellConfig:(CDUnknownBlockType)arg1 rowCount:(long long)arg2 actionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

