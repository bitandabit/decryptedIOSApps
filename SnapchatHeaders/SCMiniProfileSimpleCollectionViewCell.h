//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

@class UIImageView, UILabel;

@interface SCMiniProfileSimpleCollectionViewCell : SCMiniProfileCollectionViewCell
{
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 detailText:(id)arg2;
- (void)setImage:(id)arg1 text:(id)arg2 detailText:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

