//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SCOperaShowActionMenuToolTipsView : UIView
{
    UIView *_toolTipsFadeoutView;
    UILabel *_teachingTitle;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (void)_setupTooltip;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setToolTipsVisible:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

