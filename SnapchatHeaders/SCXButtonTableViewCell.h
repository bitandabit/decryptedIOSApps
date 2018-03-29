//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIButton;
@protocol SCXButtonTableViewCellDelegate;

@interface SCXButtonTableViewCell : UITableViewCell
{
    id <SCXButtonTableViewCellDelegate> _delegate;
    UIButton *_xButton;
    UIActivityIndicatorView *_indicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIButton *xButton; // @synthesize xButton=_xButton;
@property(nonatomic) __weak id <SCXButtonTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setIsWorking:(_Bool)arg1;
- (void)setSubText:(id)arg1;
- (void)setText:(id)arg1;
- (void)xButtonPressed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

