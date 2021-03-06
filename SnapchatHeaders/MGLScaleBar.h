//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, MGLDistanceFormatter, NSArray, UIColor;

@interface MGLScaleBar : UIView
{
    double _metersPerPoint;
    NSArray *_labels;
    NSArray *_bars;
    UIView *_containerView;
    MGLDistanceFormatter *_formatter;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    CALayer *_borderLayer;
    double _borderWidth;
    struct MGLRow _row;
}

@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(nonatomic) struct MGLRow row; // @synthesize row=_row;
@property(retain, nonatomic) MGLDistanceFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *bars; // @synthesize bars=_bars;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) double metersPerPoint; // @synthesize metersPerPoint=_metersPerPoint;
- (void).cxx_destruct;
- (void)layoutLabels;
- (void)layoutBars;
- (void)updateLabels;
- (void)layoutSubviews;
- (void)updateVisibility;
- (struct MGLRow)preferredRow;
- (_Bool)usesMetricSystem;
- (_Bool)usesRightToLeftLayout;
- (double)unitsPerPoint;
- (double)maximumWidth;
- (double)actualWidth;
- (struct CGSize)intrinsicContentSize;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

