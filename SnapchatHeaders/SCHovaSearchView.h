//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchView.h"

@class NSDictionary, SCPreviewTooltipBalloon, UILabel, UIView;
@protocol SCHovaSearchViewDataSource;

@interface SCHovaSearchView : SCSearchView
{
    SCPreviewTooltipBalloon *_toolTipBalloon;
    _Bool _transitioningPlaceholder;
    id <SCHovaSearchViewDataSource> _dataSource;
    long long _placeholderTransitionDirection;
    NSDictionary *_transitionPlaceholderLabels;
    long long _visibleIndex;
    UIView *_textShadowView;
    struct _NSRange _previousVisibleRange;
}

+ (id)placeholderLabelTextAttributes;
@property(retain, nonatomic) UIView *textShadowView; // @synthesize textShadowView=_textShadowView;
@property(nonatomic) long long visibleIndex; // @synthesize visibleIndex=_visibleIndex;
@property(nonatomic) struct _NSRange previousVisibleRange; // @synthesize previousVisibleRange=_previousVisibleRange;
@property(retain, nonatomic) NSDictionary *transitionPlaceholderLabels; // @synthesize transitionPlaceholderLabels=_transitionPlaceholderLabels;
@property(nonatomic) long long placeholderTransitionDirection; // @synthesize placeholderTransitionDirection=_placeholderTransitionDirection;
@property(nonatomic, getter=isTransitioningPlaceholder) _Bool transitioningPlaceholder; // @synthesize transitioningPlaceholder=_transitioningPlaceholder;
@property(nonatomic) __weak id <SCHovaSearchViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)showSearchToolTipForPage:(long long)arg1;
- (_Bool)hasOngoingToolTip;
- (void)setPlaceholderAlpha:(double)arg1;
- (_Bool)shouldLazyLoadTextField;
- (double)defaultSearchButtonPercentStroked;
@property(readonly, nonatomic) UILabel *visiblePlaceholderLabel;
- (double)placeholderTranslationForDirection:(long long)arg1;
- (void)reloadPlaceHolderTransitionLabelForIndex:(long long)arg1;
- (id)placeholderTransitionLabelForIndex:(long long)arg1;
- (void)updatePercentOverscrolled:(double)arg1;
- (void)layoutSubviews;
- (void)reloadLabelsWithVisiblePlaceholderRange:(struct _NSRange)arg1;
- (void)updateWithVisiblePlaceholderRange:(struct _NSRange)arg1 percentVisible:(double *)arg2;

@end

