//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

@class SCButton, UILabel;

@interface SCSearchFindFriendsCell : SCSearchCollectionViewCell
{
    UILabel *_textLabel;
    SCButton *_findFriendsButton;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_findFriendsButtonClicked;
- (double)backgroundShapeViewShadowOpacity;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
