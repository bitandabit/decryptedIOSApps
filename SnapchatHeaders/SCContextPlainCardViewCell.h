//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCContextCardViewCell.h"

@class UIImage, UIView;

@interface SCContextPlainCardViewCell : SCContextCardViewCell
{
    UIImage *_image;
    UIView *_contextContentView;
}

@property(retain, nonatomic) UIView *contextContentView; // @synthesize contextContentView=_contextContentView;
@property(retain) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
