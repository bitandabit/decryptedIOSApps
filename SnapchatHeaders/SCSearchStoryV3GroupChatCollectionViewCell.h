//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCSearchActionable-Protocol.h"

@class NSString, SCSingleIconConfigurer, SCStoryIconView, UIImageView, UILabel;
@protocol SCSearchActionHandling;

@interface SCSearchStoryV3GroupChatCollectionViewCell : SCSearchCollectionViewCell <SCSearchActionable>
{
    SCStoryIconView *_storyIconView;
    UIImageView *_storyTypeIconView;
    UILabel *_nameLabel;
    UILabel *_posterNamesLabel;
    UILabel *_storyTypeLabel;
    SCSingleIconConfigurer *_singleIconConfigurer;
    id _viewModel;
    id <SCSearchActionHandling> _actionHandler;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)viewModel;
- (void).cxx_destruct;
- (void)_updateWithViewModel:(id)arg1;
- (void)handleLongPressAction;
- (_Bool)hasOverridedLongPressAction;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

