//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCSearchActionable-Protocol.h"
#import "SCSearchViewportConfigurable-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;
@protocol SCSearchActionHandling;

@interface SCStoryManagementSnapCollectionViewCell : SCSearchCollectionViewCell <SCSearchActionable, SCSearchViewportConfigurable>
{
    UIView *_containerView;
    UILabel *_timestampLabel;
    UIImageView *_viewersIcon;
    UILabel *_viewersCountLabel;
    UIImageView *_capturesIcon;
    UILabel *_capturesCountLabel;
    id <SCSearchActionHandling> _actionHandler;
    id _viewModel;
    struct CGRect _viewportFrame;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
- (id)viewModel;
@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_updateWithOffsetFromCenter:(double)arg1;
- (void)viewportDidUpdateViewportFrame:(struct CGRect)arg1 dragging:(_Bool)arg2 decelerating:(_Bool)arg3;
- (void)setViewModel:(id)arg1;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
- (_Bool)shouldShowBackgroundView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
