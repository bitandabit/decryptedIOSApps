//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "SCSearchActionable-Protocol.h"
#import "SCSearchViewModelConfigurable-Protocol.h"

@class NSString, SCSearchActionModel, UIButton, UILabel;
@protocol SCSearchActionHandling;

@interface SCCheetahSendToHeaderView : UICollectionReusableView <SCSearchActionable, SCSearchViewModelConfigurable>
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_actionButton;
    SCSearchActionModel *_actionModel;
    id <SCSearchActionHandling> _actionHandler;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

