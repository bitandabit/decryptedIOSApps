//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeedTableViewCell.h"

#import "SCFeedChatActionCell-Protocol.h"
#import "SCFeedComponentViewDelegate-Protocol.h"
#import "SCFeedIconViewDelegate-Protocol.h"
#import "SCFeedSnapActionCell-Protocol.h"
#import "SCFeedStoryViewDelegate-Protocol.h"
#import "SCPannableCell-Protocol.h"

@class NSString, UIImageView, UIView;
@protocol SCFeedComponentBaseView;

@interface SCFeedSwipeableTableViewCell : SCFeedTableViewCell <SCFeedSnapActionCell, SCFeedChatActionCell, SCFeedComponentViewDelegate, SCPannableCell, SCFeedStoryViewDelegate, SCFeedIconViewDelegate>
{
    UIImageView *_swipeBackgroundIconView;
    UIView<SCFeedComponentBaseView> *_feedComponentView;
}

@property(retain, nonatomic) UIView<SCFeedComponentBaseView> *feedComponentView; // @synthesize feedComponentView=_feedComponentView;
- (void).cxx_destruct;
- (void)setDebugStringOnPress;
- (id)dismissFeedIconView;
- (struct CGRect)dismissBaseViewFrame;
- (id)dismissBaseView;
- (void)endPanning:(_Bool)arg1;
- (void)panOverWithOffset:(double)arg1 isDragging:(_Bool)arg2;
- (void)bounceWithMagnitude:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (double)bounceXOffsetWithMagnitude:(long long)arg1;
- (void)bounceWithCompletion:(CDUnknownBlockType)arg1;
- (void)bounce;
- (void)bounceRepeatedlyAfterDelays:(id)arg1;
- (void)bounceRepeatedlyIfNecessary;
- (void)resetNextVC:(id)arg1;
- (unsigned long long)cellPosition;
- (void)handlePressOnBitmoji;
- (void)handlePressOnStoryIcon;
- (id)cellViewModel;
- (void)snapTimerDidExpire;
- (void)snapSubstituteLabelDidShow;
- (void)handlePressOnSnapButton;
- (void)handlePressOnReplyButton;
- (void)removeSubstituteLabelAnimations;
- (void)showSnapSubstituteSubLabelBrieflyIfNecessary;
- (void)showSubstituteSubLabelBriefly;
- (void)resetBackgroundColorAnimated:(_Bool)arg1;
- (void)setTouchedBackgroundColorWithDismissPercentage:(double)arg1;
- (void)setTouchedBackgroundColor;
- (id)feedIconView;
- (void)updateFriendMojiView;
- (void)updateStoryReplayIconWithIdentifiers:(id)arg1;
- (void)updateReplyButtonWithIdentifer:(id)arg1 updateFriendMoji:(_Bool)arg2;
- (void)toggleBottomBorderVisibility:(_Bool)arg1;
- (void)setViewModel:(id)arg1;
- (_Bool)longPressGestureRecognizerShouldBegin;
- (_Bool)doubleTapGestureRecognizerShouldBegin;
- (_Bool)delayedTapGestureRecognizerShouldBegin;
- (_Bool)tapGestureRecognizerShouldBegin;
- (void)setUserSession:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (id)swipeableViewModel;
- (void)_initV10Views;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

