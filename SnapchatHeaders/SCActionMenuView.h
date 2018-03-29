//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SCActionMenuButtonsContainerView, SCActionMenuMessageStateView, SCActionMenuTopContainerView, SCMessageChatViewModel;
@protocol SCActionMenuRenderableCellContentView, SCActionMenuViewDelegate;

@interface SCActionMenuView : UIView
{
    UIView *_contentViewHolder;
    SCActionMenuMessageStateView *_messageStateView;
    SCActionMenuButtonsContainerView *_buttonsContainerView;
    SCActionMenuTopContainerView *_topContainerView;
    struct UIEdgeInsets _contentPadding;
    SCMessageChatViewModel *_viewModel;
    UIView<SCActionMenuRenderableCellContentView> *_contentView;
    UIView *_parentView;
    _Bool _menuOpened;
    struct CGPoint _leftMidPoint;
    _Bool _currentlyAnimating;
    _Bool _isStale;
    id <SCActionMenuViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCActionMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView<SCActionMenuRenderableCellContentView> *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_uninstallAllConstraints;
- (void)didDismiss;
- (void)_renderMenuMaximized;
- (void)_renderMenuMinimized;
- (void)_performBlockWithAnimationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)collapseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshWithViewModel:(id)arg1 group:(id)arg2 buttonViewModels:(id)arg3;
- (void)renderWithViewModel:(id)arg1 group:(id)arg2 contentView:(id)arg3 buttonViewModels:(id)arg4 parentView:(id)arg5;
- (_Bool)didGestureEndOnButton:(id)arg1;
- (_Bool)didLongPress:(id)arg1;
@property(readonly, nonatomic) NSArray *viewsToDropShadow;
- (struct UIEdgeInsets)actionMenuPadding;
- (id)initWithFrame:(struct CGRect)arg1;

@end

