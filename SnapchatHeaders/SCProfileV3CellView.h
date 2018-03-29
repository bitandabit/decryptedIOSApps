//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UITapGestureRecognizer;
@protocol SCProfileV3CellViewDelegate;

@interface SCProfileV3CellView : UICollectionViewCell
{
    UITapGestureRecognizer *_tapGesture;
    id <SCProfileV3CellViewDelegate> _delegate;
}

+ (id)cellReuseIdentifier;
@property(nonatomic) __weak id <SCProfileV3CellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) UIColor *selectedBackgroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (void)willDisplayCell;
@property(readonly, nonatomic) double cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end

