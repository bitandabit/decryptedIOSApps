//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchBar.h"

#import "SPTThemableView.h"

@class NSString, UIColor;

@interface SPTSearchBar : UISearchBar <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _keyboardAppearance;
}

+ (id)searchBar;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)removeBackgroundViewHack;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)textFieldInView:(id)arg1;
- (void)setFont:(id)arg1;
- (id)font;
@property(retain, nonatomic) UIColor *searchFieldBackgroundColor;
@property(retain, nonatomic) UIColor *searchFieldTextColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
