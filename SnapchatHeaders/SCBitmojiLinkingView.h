//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, UIButton;
@protocol SCBitmojiLinkingViewDelegate;

@interface SCBitmojiLinkingView : UIView
{
    UIButton *_linkButton;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCBitmojiLinkingViewDelegate> _delegate;
}

+ (id)view:(id)arg1;
- (void).cxx_destruct;
- (id)_attributedLinkButtonTitle:(id)arg1;
- (void)setLinkButtonSelected:(_Bool)arg1;
- (void)linkButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

