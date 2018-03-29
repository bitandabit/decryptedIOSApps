//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellController.h"

@class SCProfileV3AddFriendsCellView, SCUserSession;
@protocol NavigationDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCProfileV3AddFriendsCellController : SCProfileV3CellController
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    SCProfileV3AddFriendsCellView *_cell;
}

- (void).cxx_destruct;
- (void)_updateUnreadAddedFriends:(id)arg1;
- (id)getAnalyitcsSections;
- (void)cellWasTapped:(id)arg1;
- (struct CGSize)sizeForCell;
- (Class)cellClass;
- (id)cellReuseIdentifier;
- (void)attachCellView:(id)arg1;
- (void)_setupView;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 startChatDelegate:(id)arg3 sendSnapNavigationControllerDelegate:(id)arg4;

@end

