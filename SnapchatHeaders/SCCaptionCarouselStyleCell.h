//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCCaptionStyleLabel, SOJUCaptionStyle, UIActivityIndicatorView;

@interface SCCaptionCarouselStyleCell : UICollectionViewCell
{
    SOJUCaptionStyle *_style;
    SCCaptionStyleLabel *_label;
    UIActivityIndicatorView *_styleLoadingView;
}

+ (double)estimatedWidthWithCaptionStyle:(id)arg1;
@property(readonly, copy, nonatomic) SOJUCaptionStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setCellWithCaptionStyle:(id)arg1 isSelected:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;

@end

