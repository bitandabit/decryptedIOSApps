//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class SPTSearchBar, SPTTheme, UILabel;

@interface SPTTasteCollectionHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SPTSearchBar *_searchBar;
    double _minHeaderHeight;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) double minHeaderHeight; // @synthesize minHeaderHeight=_minHeaderHeight;
@property(retain, nonatomic) SPTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updatePreferredMaxLayoutWidth;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setupTheme;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
