//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UILabel;

@interface FBInterstitialAdTextView : UIView
{
    UIColor *_textColor;
    NSString *_title;
    NSString *_subtitle;
    UILabel *_titleView;
    UILabel *_subtitleView;
}

@property(retain, nonatomic) UILabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlignment:(long long)arg1;
- (void)layoutSubviews;
- (id)init;

@end

