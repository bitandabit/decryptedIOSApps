//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCBubbleDataSourceDelegate-Protocol.h"
#import "SCChatConversationUpdaterListener-Protocol.h"

@class NSMutableArray, NSString, UIView, UIViewController;
@protocol SCBubbleChatKeyboardDelegate, SCBubbleDataSourceManagerDelegate, SCChatCellGestureDelegate, SCChatConversationViewModel, SCChatMessageActionHandler;

@interface SCBubbleDataSourceManagerV3 : NSObject <SCBubbleDataSourceDelegate, SCChatConversationUpdaterListener>
{
    id <SCBubbleDataSourceManagerDelegate> _delegate;
    UIViewController<SCChatCellGestureDelegate> *_parentVC;
    id <SCBubbleChatKeyboardDelegate> _keyboardDelegate;
    UIView *_containerView;
    id <SCChatConversationViewModel> _conversationViewModel;
    id <SCChatMessageActionHandler> _actionHandler;
    NSMutableArray *_bubbleDataSources;
}

@property(retain, nonatomic) NSMutableArray *bubbleDataSources; // @synthesize bubbleDataSources=_bubbleDataSources;
- (void).cxx_destruct;
- (void)bubbleDataSourceDidBeginExpiring:(id)arg1;
- (void)bubbleDataSourceDidExpire:(id)arg1;
- (void)didConversationViewModelChange:(id)arg1;
- (id)_indexPathsForUpdatedSaveStateViewModelsForUpdates:(id)arg1 oldViewModels:(id)arg2 newViewModels:(id)arg3;
- (void)_updateDataSourceForToggledSaveIndexPaths:(id)arg1 conversationViewModel:(id)arg2;
- (void)_updateDataSourceForModifiedIndexPaths:(id)arg1 conversationViewModel:(id)arg2;
- (void)_updateDataSourceForDeletedIndexPaths:(id)arg1 oldConversationViewModel:(id)arg2;
- (void)_createAndAppendDataSourceForViewModel:(id)arg1;
- (void)_updateDataSourceForInsertedIndexPaths:(id)arg1 conversationViewModel:(id)arg2;
- (id)bubbleDataSourceForViewModel:(id)arg1;
- (id)initWithDelegate:(id)arg1 parentVC:(id)arg2 containerView:(id)arg3 keyboardDelegate:(id)arg4 actionHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
