//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellView.h"

@class SCStackView;

@interface SCProfileV3MyStoryStackCellView : SCProfileV3CellView
{
    SCStackView *_individualStories;
}

+ (id)cellReuseIdentifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupStackViews:(id)arg1;
- (void)setStackCells:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

