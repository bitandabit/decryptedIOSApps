//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCShapeView, UIColor;

@interface SCSearchRoundedCornerView : UIView
{
    SCShapeView *_topLeftCornerView;
    SCShapeView *_topRightCornerView;
    SCShapeView *_bottomLeftCornerView;
    SCShapeView *_bottomRightCornerView;
    SCShapeView *_borderShapeView;
    _Bool _shouldRedrawBorder;
    struct CGRect _previousRect;
    UIView *_contentView;
    double _borderWidth;
    UIColor *_borderColor;
    unsigned long long _rectCorner;
    double _cornerRadius;
}

@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) unsigned long long rectCorner; // @synthesize rectCorner=_rectCorner;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_redrawBorderIfNeeded;
- (void)_setShouldRedrawBorder;
- (void)layoutSubviews;
- (id)initWithCornerRadius:(double)arg1 rectCorner:(unsigned long long)arg2 cornerColor:(id)arg3;

@end

