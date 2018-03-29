//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCLabeledGrowingButton, UIButton;
@protocol SCOperaInteractionButtonsLayerViewDelegate;

@interface SCOperaInteractionButtonsLayerView : UIView <SCOperaLayerView>
{
    id <SCOperaInteractionButtonsLayerViewDelegate> _delegate;
    UIButton *_editButton;
    SCLabeledGrowingButton *_sendButton;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCLabeledGrowingButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) __weak id <SCOperaInteractionButtonsLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendButtonPressed:(id)arg1;
- (void)editButtonPressed:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupViewForLayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

