//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface SCHovaTabBarBarView : UIView
{
    _Bool _darkModeEnabled;
    CAShapeLayer *_shapeLayer;
    struct CGSize _previousBoundsSize;
}

+ (Class)layerClass;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) _Bool darkModeEnabled; // @synthesize darkModeEnabled=_darkModeEnabled;
- (void).cxx_destruct;
- (id)normalBackgroundColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

