//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCAffordanceArrowView, UILabel;

@interface SCOperaOurStoryViewersArrowView : UIView
{
    SCAffordanceArrowView *_arrowView;
    UILabel *_textLabel;
    _Bool _isArrowUp;
    double _textVisiblePercentage;
}

+ (double)heightWithoutText;
@property(nonatomic) _Bool isArrowUp; // @synthesize isArrowUp=_isArrowUp;
@property(nonatomic) double textVisiblePercentage; // @synthesize textVisiblePercentage=_textVisiblePercentage;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

