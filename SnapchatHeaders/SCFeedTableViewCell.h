//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCUserSession;
@protocol SCFeedCellViewModel, SCFeedGestureDelegate;

@interface SCFeedTableViewCell : UITableViewCell
{
    SCUserSession *_userSession;
    id <SCFeedGestureDelegate> _gestureDelegate;
    id <SCFeedCellViewModel> _viewModel;
    long long _cellViewPosition;
}

+ (id)showedSubstituteSubLabelIdentifiers;
@property(nonatomic) long long cellViewPosition; // @synthesize cellViewPosition=_cellViewPosition;
@property(retain, nonatomic) id <SCFeedCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SCFeedGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)longPressGestureRecognizerShouldBegin;
- (_Bool)doubleTapGestureRecognizerShouldBegin;
- (_Bool)delayedTapGestureRecognizerShouldBegin;
- (_Bool)tapGestureRecognizerShouldBegin;
- (void)handleLongPress:(id)arg1;
- (void)handleDelayedTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)updateStoryReplayIconWithIdentifiers:(id)arg1;
- (void)updateReplyButtonWithIdentifer:(id)arg1 updateFriendMoji:(_Bool)arg2;
- (void)toggleBottomBorderVisibility:(_Bool)arg1;
- (id)snapForSnapId:(id)arg1;
- (id)snapToHandle;
- (id)conversationId;
- (id)identifier;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

