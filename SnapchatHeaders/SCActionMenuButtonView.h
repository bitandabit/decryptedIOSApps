//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionMenuButtonViewModel, UIImageView, UILabel, UITapGestureRecognizer;

@interface SCActionMenuButtonView : UIControl <UIGestureRecognizerDelegate>
{
    UIImageView *_imageIcon;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCActionMenuButtonViewModel *_buttonViewModel;
}

@property(readonly, nonatomic) SCActionMenuButtonViewModel *buttonViewModel; // @synthesize buttonViewModel=_buttonViewModel;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_didTap:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 buttonViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
