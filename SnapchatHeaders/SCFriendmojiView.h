//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTimeProfilable-Protocol.h"

@class NSString, NSTimer, UILabel;

@interface SCFriendmojiView : UIView <SCTimeProfilable>
{
    UILabel *_label;
    NSString *_currentlyDisplayedEmoji;
    NSTimer *_timer;
}

+ (int)context;
+ (id)_friendmojiTextForFriend:(id)arg1 viewType:(long long)arg2;
+ (_Bool)hasFriendmojiTextForFriend:(id)arg1;
+ (id)createPhoneWithArrowFriendMoji;
+ (id)createFriendmojiViewWithFriend:(id)arg1 andViewType:(long long)arg2;
+ (id)createFriendmojiViewWithFriend:(id)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *currentlyDisplayedEmoji; // @synthesize currentlyDisplayedEmoji=_currentlyDisplayedEmoji;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (_Bool)setLabelToText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)willMoveToSuperview:(id)arg1;
- (void)animateStreakIndicator;
- (_Bool)updateWithFriend:(id)arg1 andLineHeight:(unsigned long long)arg2 andViewType:(long long)arg3;
- (_Bool)updateWithFriend:(id)arg1 andViewType:(long long)arg2;
- (_Bool)updateWithFriend:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithEmoji:(id)arg1 height:(unsigned long long)arg2;
- (id)initWithFriend:(id)arg1 andLineHeight:(unsigned long long)arg2 andViewType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

