//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CAGradientLayer, SPTDrivingNowPlayingCarouselCellViewModel, UILabel;

@interface SPTDrivingNowPlayingCarouselCell : UICollectionViewCell
{
    SPTDrivingNowPlayingCarouselCellViewModel *_viewModel;
    CAGradientLayer *_gradientLayer;
    UILabel *_titleLabel;
    UILabel *_artistLabel;
}

@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) SPTDrivingNowPlayingCarouselCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)colorFromURI:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupLayout;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

