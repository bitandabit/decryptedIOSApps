//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface SCTypingBubbleView : UIView
{
    UIImageView *_imageView;
    CAShapeLayer *_leftDot;
    CAShapeLayer *_middleDot;
    CAShapeLayer *_rightDot;
}

- (void).cxx_destruct;
- (void)resumeAnimating;
- (void)pauseAnimating;
- (void)stopAnimating;
- (void)_startTypingAnimation;
- (void)startAnimating;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

