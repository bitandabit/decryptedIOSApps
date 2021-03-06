//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAvatarViewDelegate-Protocol.h"
#import "SCChatConversationUpdaterListener-Protocol.h"
#import "SCChatStoryIconUpdater-Protocol.h"
#import "SCChatViewLifeCycleListener-Protocol.h"
#import "SCHeaderDataSource-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"

@class FriendStories, NSString, SCAvatarView, SCHeader, SCHeaderAccessoryView, SCSingleIconConfigurer, SCUserSession, UIButton, UILabel, UIView;
@protocol SCChatConversationViewModel, SCChatHeaderRecipientBarDelegate, SCChatStoryDelegate, SCChatViewHeaderDataSource;

@interface SCChatViewHeader : NSObject <SCChatViewLifeCycleListener, SCChatConversationUpdaterListener, SCHeaderDataSource, SCStoriesModelUpdateListener, SCChatStoryIconUpdater, SCAvatarViewDelegate>
{
    SCUserSession *_userSession;
    UIView *_parentView;
    UIView *_rightButtonCircleView;
    UIView *_recipientBar;
    id <SCChatViewHeaderDataSource> _dataSource;
    SCHeaderAccessoryView *_chatHeaderAccessoryView;
    id <SCChatStoryDelegate> _chatHeaderStoryDelegate;
    id <SCChatHeaderRecipientBarDelegate> _chatHeaderRecipientBarDelegate;
    FriendStories *_friendStories;
    SCSingleIconConfigurer *_singleIconConfigurer;
    NSString *_lastUnviewedStoryIdSeen;
    UIView *_containerView;
    SCAvatarView *_storyAvatarView;
    id <SCChatConversationViewModel> _chatViewModel;
    SCHeader *_header;
    UIButton *_rightButton;
    UILabel *_sccpActiveLabel;
}

+ (id)rightButtonCircleBorderColor;
+ (id)headerBorderColor;
@property(retain, nonatomic) UILabel *sccpActiveLabel; // @synthesize sccpActiveLabel=_sccpActiveLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) id <SCChatConversationViewModel> chatViewModel; // @synthesize chatViewModel=_chatViewModel;
- (void).cxx_destruct;
- (void)_handleTapOnStoryIcon;
- (id)identifier;
- (_Bool)shouldDisplayStoryHeader;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (long long)_friendStoriesViewingType;
- (void)_preloadStories;
- (void)_displayThumbnail;
- (void)_prepareThumbnail;
- (void)_updateFriendStories:(id)arg1;
- (id)storyDismissView;
- (long long)chatStoryHeaderViewType;
- (void)_cleanupForRecipientBarRemoval;
- (void)_updateLayoutForRecipientBarRemoval;
- (void)setChatHeaderRecipientBarDelegate:(id)arg1;
- (void)removeRecipientBar:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRecipientBar:(id)arg1;
- (void)_updateRightButtonCircleWithVerticalTranslationUp:(double)arg1;
- (void)_updateScaleWithProgress:(double)arg1;
- (void)_updateAlphaWithProgress:(double)arg1;
- (void)displayWithVerticalTranslationUp:(double)arg1;
- (void)setHeaderViewsScale:(double)arg1 includeContentView:(_Bool)arg2;
- (void)setButtonsAlpha:(double)arg1;
- (void)setHeaderAlpha:(double)arg1;
- (void)setHeaderContentAlpha:(double)arg1;
- (void)setHeaderViewsAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)viewForTitleInHeader:(id)arg1;
- (id)chatHeaderAccessoryView;
- (id)imageForCustomRightButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)didConversationViewModelChange:(id)arg1;
- (void)enableInteraction;
- (void)disableInteraction;
- (void)updateHeaderTitleForNewDisplayName:(id)arg1;
- (void)viewModelDidUpdate;
- (void)reloadStoryIcon;
- (void)reloadHeader;
- (void)viewDidFullyDisappear;
- (id)rightButtonCircleView;
- (void)_initRightButton;
- (void)updateSCCPLabelWithState:(id)arg1;
- (void)_initSCCPStatusLabel;
- (id)headerView;
- (double)recipientBarHeight;
- (id)headerSuperview;
- (id)headerContentView;
- (void)setHeaderFrame:(struct CGRect)arg1;
- (struct CGRect)headerFrame;
- (id)headerBottom;
- (void)_initHeaderWithDelegate:(id)arg1;
- (void)initHeader;
- (void)dealloc;
- (id)initWithHeaderDelegate:(id)arg1 headerDataSource:(id)arg2 chatHeaderStoryDelegate:(id)arg3 parentView:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

