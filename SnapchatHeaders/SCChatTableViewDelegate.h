//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatCellMediaDelegate-Protocol.h"
#import "SCChatViewLifeCycleListener-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCChatViewModelForChat, SCChatViewModelReducer, SCUserSession;
@protocol SCChatCellGestureDelegate, UIScrollViewDelegate;

@interface SCChatTableViewDelegate : NSObject <UITableViewDelegate, SCChatViewLifeCycleListener, SCChatCellMediaDelegate>
{
    SCChatViewModelForChat *_chatViewModel;
    id <UIScrollViewDelegate> _scrollDelegate;
    id <SCChatCellGestureDelegate> _gestureDelegate;
    SCUserSession *_userSession;
    SCChatViewModelReducer *_viewModelReducer;
    double _reloadingOldChatsTableHeight;
}

- (void).cxx_destruct;
- (void)_fetchMediaCardsWithTextMessage:(id)arg1;
- (void)_fetchMediaWithStoryMediaMessage:(id)arg1;
- (void)_fetchMediaWithBatchedMediaMessage:(id)arg1;
- (void)_fetchMediaWithBaseMediaMessage:(id)arg1;
- (void)_fetchMediaWithStoryReplyMediaMessage:(id)arg1;
- (void)_fetchMediaWithStorySnapMessage:(id)arg1;
- (void)_fetchStoryWithSearchDynamicStoriesMessage:(id)arg1 forCell:(id)arg2;
- (void)stopAudioVideoNotePlayer;
- (void)stopVideoPlaybackForCells:(id)arg1;
- (void)startVideoPlaybackForCells:(id)arg1;
- (void)stopAnimationForCells:(id)arg1;
- (void)startAnimationForCells:(id)arg1;
- (void)clearMediaForCells:(id)arg1;
- (_Bool)hasLoadingCellInTableView:(id)arg1;
- (void)loadHistoryIfLoadingCellIsVisibleInTableView:(id)arg1;
- (void)loadVideoForVisibleCells:(id)arg1;
- (void)tableView:(id)arg1 loadMoreMessagesWithRetry:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableViewDidLoadOldMessages:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_fetchMediaWithReplyMessageViewModel:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setChatViewModel:(id)arg1;
- (id)initWithScrollDelegate:(id)arg1 gestureDelegate:(id)arg2 viewModelReducer:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

