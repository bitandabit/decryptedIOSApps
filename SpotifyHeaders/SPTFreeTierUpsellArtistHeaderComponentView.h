//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

@class GLUELabel, SPTFreeTierUpsellGLUETheme, SPTFreeTierUpsellHeaderLabelsStyle;

@interface SPTFreeTierUpsellArtistHeaderComponentView : EXP_HUBComponentView
{
    SPTFreeTierUpsellGLUETheme *_theme;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    SPTFreeTierUpsellHeaderLabelsStyle *_headerLabelsStyle;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(retain, nonatomic) SPTFreeTierUpsellHeaderLabelsStyle *headerLabelsStyle; // @synthesize headerLabelsStyle=_headerLabelsStyle;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTFreeTierUpsellGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)themeUpdated;
- (void)configureWithModel:(id)arg1;
- (void)addLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
