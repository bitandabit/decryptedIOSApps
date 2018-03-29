//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMessageChatTableViewCell.h"

#import "SCActionMenuRenderableCell-Protocol.h"

@class SCSnapMediaCardView, UILabel, UIView;

@interface SCSnapChatTableViewCellV2 : SCMessageChatTableViewCell <SCActionMenuRenderableCell>
{
    SCSnapMediaCardView *_mediaCardView;
    UILabel *_replayNotificationLabel;
    UILabel *_screenshotNotificationLabel;
    UILabel *_screenRecordingNotificationLabel;
    UIView *_animatingSnapView;
}

+ (id)notificationLabelFont;
- (void).cxx_destruct;
- (id)thumbnailViewForMediaId:(id)arg1;
- (void)resetWithOriginalContent;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (void)didEndDisplay;
- (void)onLongPress;
- (void)onTap;
- (_Bool)_isViewModelGroupChat:(id)arg1;
- (void)_setupNotificationLabels;
- (void)setMediaCardViewOpacity:(double)arg1;
- (struct CGRect)getSnapIconViewRect;
- (double)senderLineHeight;
- (void)renderPayload;
- (void)layoutSubviews;
- (id)snapViewModel;
- (void)_adjustLabelsForViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4 userSession:(id)arg5;

@end
