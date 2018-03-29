//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatViewLifeCycleListener-Protocol.h"

@class NSString, SCChat, SCChatSendBlockAssigner, SCChatViewModelForChat, SCUserSession;
@protocol SCChatViewModelReducerListener, SCChatViewModelReducerVisibilityDelegate;

@interface SCChatViewModelReducer : NSObject <SCChatViewLifeCycleListener>
{
    SCChat *_chat;
    id <SCChatViewModelReducerListener> _delegate;
    _Bool _hasPendingUpdate;
    SCUserSession *_userSession;
    SCChatSendBlockAssigner *_blockAssigner;
    id <SCChatViewModelReducerVisibilityDelegate> _visibilityDelegate;
    SCChatViewModelForChat *_chatViewModel;
}

+ (void)addViewModel:(id)arg1 toArray:(id)arg2 updateCount:(id)arg3;
@property(readonly, nonatomic) SCChatViewModelForChat *chatViewModel; // @synthesize chatViewModel=_chatViewModel;
@property(nonatomic) __weak id <SCChatViewModelReducerVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) __weak SCChatSendBlockAssigner *blockAssigner; // @synthesize blockAssigner=_blockAssigner;
- (void).cxx_destruct;
- (void)_updateHeightForMessageViewModels;
- (id)_viewModels:(id)arg1 getMessageViewModelAt:(long long)arg2;
- (_Bool)_viewModels:(id)arg1 resetLastMessageInSavedGroupAt:(long long)arg2;
- (_Bool)_viewModels:(id)arg1 resetFirstMessageInSavedGroupAt:(long long)arg2;
- (id)getIndexPathArrayFrom:(id)arg1 to:(id)arg2;
- (void)updateChatViewSize:(struct CGSize)arg1;
- (void)stackedViewModel:(id)arg1 didChildrenChangeAt:(id)arg2;
- (void)viewModelChangedForSaveAt:(id)arg1;
- (void)viewModelChangedAt:(id)arg1;
- (_Bool)isSaved:(id)arg1;
- (void)updateWithNewViewModels:(id)arg1;
- (void)updateWith:(id)arg1 snapShot:(id)arg2;
- (void)updateBelowTheFoldWithChat:(id)arg1 snapShot:(id)arg2;
- (id)chat;
- (void)refreshIfPendingUpdateExists;
- (void)refresh;
- (void)viewDidSwipeIn;
- (void)viewDidSwipeOut;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)setChatViewModel:(id)arg1;
- (void)setReducerDelegate:(id)arg1;
- (void)_invalidateDateString;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

