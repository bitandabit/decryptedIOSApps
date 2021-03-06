//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SCProfileV3ActionBarButtonView, UILongPressGestureRecognizer, UIView;
@protocol SCProfileV3ActionBarDelegate;

@interface SCProfileV3ActionBarCellView : SCProfileV3CellView <UIGestureRecognizerDelegate>
{
    UIView *_buttonContainer;
    SCProfileV3ActionBarButtonView *_bitmojiButton;
    SCProfileV3ActionBarButtonView *_trophyButton;
    SCProfileV3ActionBarButtonView *_shareButton;
    UIView *_leftDivider;
    UIView *_rightDivider;
    UILongPressGestureRecognizer *_buttonTapGesture;
    NSArray *_buttons;
    SCProfileV3ActionBarButtonView *_selectedButton;
    struct CGRect _originalFrameInWindow;
    id <SCProfileV3ActionBarDelegate> _actionBarDelegate;
}

+ (id)cellReuseIdentifier;
@property(nonatomic) __weak id <SCProfileV3ActionBarDelegate> actionBarDelegate; // @synthesize actionBarDelegate=_actionBarDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setupForUser:(_Bool)arg1 hasBitmoji:(_Bool)arg2;
- (id)selectedBackgroundColor;
- (id)backgroundColor;
- (void)layoutSubviews;
- (void)_handleButtonTap:(id)arg1;
- (id)_buttonForGesture:(id)arg1;
- (void)_setButtonSelected:(_Bool)arg1 button:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

