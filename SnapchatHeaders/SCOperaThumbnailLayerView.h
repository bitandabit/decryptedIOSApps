//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCSingleIconView;

@interface SCOperaThumbnailLayerView : UIView <SCOperaLayerView>
{
    SCSingleIconView *_iconView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)updateThumbnailVisible:(_Bool)arg1 animationDuration:(double)arg2 delay:(double)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)updateToPercentage:(double)arg1;
- (void)setupViewForLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
