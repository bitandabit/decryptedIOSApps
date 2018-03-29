//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, SPTUIBlurView, UITableView, UITapGestureRecognizer;

@interface SPTHomeModalMenuView : UIView
{
    _Bool _animating;
    id <SPTHomeModalMenuViewDelegate> _delegate;
    UITableView *_tableView;
    SPTUIBlurView *_blurView;
    UIView *_tableViewWrapperView;
    CAGradientLayer *_maskLayer;
    UITapGestureRecognizer *_tapgestureRecognizer;
}

+ (id)menuView;
@property(retain, nonatomic) UITapGestureRecognizer *tapgestureRecognizer; // @synthesize tapgestureRecognizer=_tapgestureRecognizer;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIView *tableViewWrapperView; // @synthesize tableViewWrapperView=_tableViewWrapperView;
@property(retain, nonatomic) SPTUIBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SPTHomeModalMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewTapped:(id)arg1;
- (void)animateTableViewOpen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupTableViewAnimation;
- (void)animateFadeIn:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setOpen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

