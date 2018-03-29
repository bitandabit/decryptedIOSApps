//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCActionMenuViewControllerDelegate-Protocol.h"
#import "SCOperaTableViewOwner-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCActionMenuViewController, SCChatCardsLayerView, SCUserSession, UILongPressGestureRecognizer;

@interface SCChatCardsLayerViewController : SCOperaLayerViewController <SCActionMenuViewControllerDelegate, UIGestureRecognizerDelegate, SCOperaTableViewOwner, UITableViewDelegate, UITableViewDataSource>
{
    SCUserSession *_userSession;
    SCChatCardsLayerView *_layerView;
    NSArray *_messageViewModels;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SCActionMenuViewController *_actionMenuVC;
    _Bool _actionMenuShown;
    _Bool _actionMenuOpening;
    _Bool _hasFullyAppeared;
}

+ (double)headerHeight;
- (void).cxx_destruct;
- (_Bool)shouldLetOperaHandleTableViewGestures;
- (id)_messageViewModelForIndexPath:(id)arg1;
- (void)didPressAddToGroupButtonInChatBurger;
- (void)didSaveMediasToCameraRollFromViewModel:(id)arg1;
- (void)didRemoveSnapchatter:(id)arg1 conversationId:(id)arg2;
- (void)didAddSnapchatter:(id)arg1 friendSourceType:(long long)arg2 conversationId:(id)arg3;
- (void)didBatchSaveOrUnsaveMessageIds:(id)arg1 conversationId:(id)arg2 toSaved:(_Bool)arg3;
- (void)didSaveCustomSticker:(id)arg1;
- (void)didSaveOrUnsaveMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didPressSendToForForwardableViewModel:(id)arg1;
- (void)actionMenuDidDismiss;
- (void)actionMenuDidOpen;
- (void)_stopVideoPlaybackForVisibleCells;
- (void)_startVideoPlaybackForVisibleCells;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)longPress:(id)arg1;
- (void)dealloc;
- (void)viewWillResignActive;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

