//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTShowsFormatEntityViewCell.h"

#import "SPTShowsFormatCellViewModelConfigurable.h"

@class NSLayoutConstraint, NSString, SPTLayoutConstraintBuilder, SPTShowsFormatCellViewModel, SPTShowsFormatLoopedAssetLayer, UIView;

@interface SPTShowsFormatEntityViewVideoCell : SPTShowsFormatEntityViewCell <SPTShowsFormatCellViewModelConfigurable>
{
    _Bool _didSetupConstraints;
    SPTShowsFormatLoopedAssetLayer *_videoLayer;
    UIView *_overlayView;
    NSLayoutConstraint *_textLabelVerticalConstraint;
    NSLayoutConstraint *_detailTextLabelVerticalConstraint;
    SPTLayoutConstraintBuilder *_accessoryViewLayout;
    SPTShowsFormatCellViewModel *_viewModel;
}

@property(retain, nonatomic) SPTShowsFormatCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *accessoryViewLayout; // @synthesize accessoryViewLayout=_accessoryViewLayout;
@property(retain, nonatomic) NSLayoutConstraint *detailTextLabelVerticalConstraint; // @synthesize detailTextLabelVerticalConstraint=_detailTextLabelVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textLabelVerticalConstraint; // @synthesize textLabelVerticalConstraint=_textLabelVerticalConstraint;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) SPTShowsFormatLoopedAssetLayer *videoLayer; // @synthesize videoLayer=_videoLayer;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)updateAccessoryViewConstraints;
- (void)updateConstraints;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)setAccessoryView:(id)arg1;
- (void)didTapContextMenuButton:(id)arg1;
- (void)configureWithViewModel:(id)arg1 glueImageLoader:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

