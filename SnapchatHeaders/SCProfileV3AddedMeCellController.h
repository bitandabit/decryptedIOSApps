//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellController.h"

@class SCItemViewModel, SCProfileV3ItemCellView, SCUserSession;
@protocol NavigationDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCProfileV3AddedMeCellController : SCProfileV3CellController
{
    SCUserSession *_userSession;
    SCItemViewModel *_viewModel;
    SCProfileV3ItemCellView *_cell;
    id <NavigationDelegate> _navigationDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
}

- (void).cxx_destruct;
- (void)cellWasTapped:(id)arg1;
- (id)getAnalyitcsSections;
- (struct CGSize)sizeForCell;
- (Class)cellClass;
- (id)cellReuseIdentifier;
- (void)attachCellView:(id)arg1;
- (void)_checkUnreadFriendRequestCount:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 startChatDelegate:(id)arg3 sendSnapNavigationControllerDelegate:(id)arg4;

@end

