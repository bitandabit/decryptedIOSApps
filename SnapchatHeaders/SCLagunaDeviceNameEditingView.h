//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTextViewDelegate-Protocol.h"

@class NSString, SCTextView, UILabel;
@protocol SCLagunaDeviceNameEditingViewDelegate;

@interface SCLagunaDeviceNameEditingView : UIView <SCTextViewDelegate>
{
    SCTextView *_textView;
    UILabel *_emojiLabel;
    NSString *_emoji;
    NSString *_displayNameWithoutEmoji;
    id <SCLagunaDeviceNameEditingViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textViewShouldReturn:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isCurrentTextLongEnough;
- (_Bool)isCurrentTextUnchanged;
- (_Bool)isCurrentTextEmpty;
- (id)currentTextWithEmoji;
- (id)currentText;
- (void)reset;
- (void)_initTextView;
- (void)_initEmojiLabel;
- (id)initWithFrame:(struct CGRect)arg1 emoji:(id)arg2 displayNameWithoutEmoji:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

