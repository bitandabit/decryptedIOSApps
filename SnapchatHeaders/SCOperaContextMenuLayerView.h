//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCScrollUpAffordanceView;

@interface SCOperaContextMenuLayerView : UIView <SCOperaLayerView>
{
    SCScrollUpAffordanceView *_arrowView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1 arrowText:(id)arg2;
+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) SCScrollUpAffordanceView *arrowView; // @synthesize arrowView=_arrowView;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setArrowAffordanceText:(id)arg1;
- (void)_setupArrowViewWithArrowText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 arrowText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

