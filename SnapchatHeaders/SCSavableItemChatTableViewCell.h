//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMessageChatTableViewCell.h"

@class CAShapeLayer, SCBubbleView, SCSavedChatNotificationView;

@interface SCSavableItemChatTableViewCell : SCMessageChatTableViewCell
{
    _Bool _isAnimating;
    _Bool _shouldAnimateOnSave;
    CAShapeLayer *_backgroundLayer;
    SCBubbleView *_bubbleView;
    SCSavedChatNotificationView *_savedNotifView;
}

@property(retain, nonatomic) SCSavedChatNotificationView *savedNotifView; // @synthesize savedNotifView=_savedNotifView;
@property(nonatomic) __weak SCBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) _Bool shouldAnimateOnSave; // @synthesize shouldAnimateOnSave=_shouldAnimateOnSave;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_resetForBubbleView:(id)arg1;
- (void)_setUpForMoveBackForBubbleView:(id)arg1;
- (void)_setUpForMoveToTheRightForBubbleView:(id)arg1;
- (void)_setUpForMoveBack;
- (void)_setUpForMoveToTheRight;
- (void)animateSavedOrUnsavedWithBubbleView:(id)arg1;
- (void)animateSavedOrUnsaved;
- (void)_resetAnimation;
- (double)maximumAnimationWidth;
- (void)updateSavedLabelToSaved:(_Bool)arg1;
- (void)setUpNotifViewForSavedState;
- (void)renderMetadata;
- (double)senderLineWidth;
- (void)renderRoundCorners;
- (void)layoutSubviews;
- (unsigned long long)_savedPayloadCornerMask;
- (void)setViewModel:(id)arg1;
- (void)initSavedNotifView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (id)savableItemViewModel;

@end

