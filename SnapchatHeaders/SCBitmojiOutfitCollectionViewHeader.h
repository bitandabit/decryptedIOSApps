//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class SCBitmojiOutfitBrand, UIImageView, UILabel;

@interface SCBitmojiOutfitCollectionViewHeader : UICollectionReusableView
{
    UIImageView *_logoView;
    UIImageView *_backgroundView;
    UILabel *_brandLabel;
    SCBitmojiOutfitBrand *_brand;
}

@property(retain, nonatomic) SCBitmojiOutfitBrand *brand; // @synthesize brand=_brand;
- (void).cxx_destruct;
- (void)setText:(id)arg1 color:(id)arg2;
- (void)setBackground:(id)arg1;
- (void)setLogo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

