//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface SCBrushSizeAffordance : UIView
{
    UIColor *_color;
    NSString *_emoji;
}

@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setWidth:(double)arg1 withCenter:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

