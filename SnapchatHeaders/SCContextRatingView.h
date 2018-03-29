//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCContextRatingViewModel, UILabel;

@interface SCContextRatingView : UIView
{
    UIView *_attributionView;
    UIView *_ratingImageValueView;
    UILabel *_ratingCountLabel;
    SCContextRatingViewModel *_model;
}

@property(nonatomic) __weak SCContextRatingViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)resizeSubviews;
- (double)height;
- (void)setRating:(id)arg1 withAttributionView:(id)arg2 ratingView:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

