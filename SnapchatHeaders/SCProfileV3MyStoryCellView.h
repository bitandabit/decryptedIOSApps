//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellView.h"

#import "SCProfileHeaderStoryViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MASConstraint, NSString, SCExpandedButton, SCFriendLongPressGestureRecognizer, SCMyStoryViewCountView, SCProfileHeaderStoryIconView, SCProfileHeaderStoryView, SCProfileV3MyStoryCellViewModel, SCStorySaveButton, UIColor, UIImageView, UILabel, UIView;
@protocol SCProfileV3MyStoryCellDelegate;

@interface SCProfileV3MyStoryCellView : SCProfileV3CellView <UIGestureRecognizerDelegate, SCProfileHeaderStoryViewDelegate>
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UILabel *_nameLabel;
    UILabel *_subLabel;
    SCStorySaveButton *_saveButton;
    SCMyStoryViewCountView *_viewCount;
    SCMyStoryViewCountView *_screenshotCount;
    UIView *_lineSeparator;
    SCFriendLongPressGestureRecognizer *_longPressGestureRecognizer;
    SCProfileV3MyStoryCellViewModel *_viewModel;
    _Bool _expanded;
    SCExpandedButton *_actionButton;
    MASConstraint *_centerNameLabelConstraint;
    MASConstraint *_saveButtonConstraint;
    MASConstraint *_saveButtonConstraintNameLabel;
    MASConstraint *_actionButtonConstraint;
    SCProfileHeaderStoryView *_storyAvatarView;
    SCProfileHeaderStoryIconView *_storyIconView;
    UIImageView *_addToStoryView;
    id <SCProfileV3MyStoryCellDelegate> _storyDelegate;
}

+ (id)cellReuseIdentifier;
@property(nonatomic) __weak id <SCProfileV3MyStoryCellDelegate> storyDelegate; // @synthesize storyDelegate=_storyDelegate;
- (void).cxx_destruct;
- (void)didFinishSharedStoryUploadWithPreviousMode:(unsigned long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_longPress:(id)arg1;
- (void)mySharedStoryInfoPressed;
- (void)savePressed;
- (void)addToStoryButtonPressed;
- (void)actionButtonPressed;
- (void)addToMyStoryPressed;
- (void)storyIconPressed;
- (void)saveStorySucceeded:(_Bool)arg1;
- (void)updateSaveStoryProgress:(double)arg1;
- (void)updateSubLabelWithStatusText:(id)arg1 textColor:(id)arg2;
- (void)updateSubLabelWithAssociatedStories:(id)arg1;
- (void)_updateViewCount;
- (void)setExpanded:(_Bool)arg1;
- (void)setViewModel:(id)arg1;
- (id)lineSeparator;
- (id)saveButton;
- (id)dismissBaseView;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)backgroundColor;
- (double)cornerRadius;
- (void)willDisplayCell;
- (void)_constrainLeftView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

