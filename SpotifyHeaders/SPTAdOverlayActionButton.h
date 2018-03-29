//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class SPTTheme;

@interface SPTAdOverlayActionButton : UIButton
{
    double _titleLabelLetterSpacing;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) double titleLabelLetterSpacing; // @synthesize titleLabelLetterSpacing=_titleLabelLetterSpacing;
- (void).cxx_destruct;
- (id)attributedStringForTitle:(id)arg1 state:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

