//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCProfileMenuItemViewModel;

@interface SCProfileMenuItemTableViewCell : UITableViewCell
{
    SCProfileMenuItemViewModel *_viewModel;
    CDUnknownBlockType _actionBlock;
}

- (void).cxx_destruct;
- (void)_handleAction;
- (id)_createButtonView:(id)arg1 isActive:(_Bool)arg2;
- (id)_createToggleView:(_Bool)arg1 isActive:(_Bool)arg2;
- (void)_addGestureRecognizerToView:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;

@end

