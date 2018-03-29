//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBAdUpdatableView.h"

@class FBAdTimer, FBCombinedSecondaryView, FBNativeAd, FBNativeAdViewAttributes, NSString, UILabel;

@interface FBAdBodyView : UIView <FBAdUpdatableView>
{
    _Bool _animationEnabled;
    _Bool _fullRatingView;
    _Bool _rotated;
    FBNativeAd *_nativeAd;
    UILabel *_descriptionLabel;
    double _additionalYSpacing;
    FBAdTimer *_rotationTimer;
    UIView *_firstContainerView;
    UIView *_secondContainerView;
    double _miscMargin;
    double _titleHeight;
    FBNativeAdViewAttributes *_attributes;
    FBCombinedSecondaryView *_secondaryCombinedView;
}

+ (void)initialize;
@property(nonatomic) __weak FBCombinedSecondaryView *secondaryCombinedView; // @synthesize secondaryCombinedView=_secondaryCombinedView;
@property(nonatomic) __weak FBNativeAdViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(nonatomic) double miscMargin; // @synthesize miscMargin=_miscMargin;
@property(nonatomic) __weak UIView *secondContainerView; // @synthesize secondContainerView=_secondContainerView;
@property(nonatomic) __weak UIView *firstContainerView; // @synthesize firstContainerView=_firstContainerView;
@property(nonatomic, getter=isRotated) _Bool rotated; // @synthesize rotated=_rotated;
@property(retain, nonatomic) FBAdTimer *rotationTimer; // @synthesize rotationTimer=_rotationTimer;
@property(nonatomic, getter=isFullRatingView) _Bool fullRatingView; // @synthesize fullRatingView=_fullRatingView;
@property(nonatomic) double additionalYSpacing; // @synthesize additionalYSpacing=_additionalYSpacing;
@property(nonatomic, getter=isAnimationEnabled) _Bool animationEnabled; // @synthesize animationEnabled=_animationEnabled;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak FBNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect spareSpace;
- (void)sizeToFit;
- (void)dealloc;
@property(nonatomic) __weak UILabel *socialContextLabel; // @dynamic socialContextLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @dynamic titleLabel;
- (void)updateBodyTitle:(id)arg1;
@property(nonatomic, getter=isSocialContextEnabled) _Bool socialContextEnabled; // @dynamic socialContextEnabled;
- (_Bool)socialContextEnabled;
@property(nonatomic, getter=isRatingEnabled) _Bool ratingEnabled; // @dynamic ratingEnabled;
- (void)animateRotationWithCurrentView:(id)arg1 otherView:(id)arg2;
- (void)rotate;
- (void)willMoveToWindow:(id)arg1;
- (struct CGRect)offscreenFrame;
- (struct CGRect)animationFrame;
- (struct CGRect)normalFrame;
- (void)layoutSubviews;
- (void)updateView:(_Bool)arg1;
- (void)calculateValues;
- (id)initWithFrame:(struct CGRect)arg1 nativeAd:(id)arg2 attributes:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

