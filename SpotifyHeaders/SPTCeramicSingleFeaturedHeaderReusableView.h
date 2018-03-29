//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "SPTCeramicCollectionViewHeader.h"
#import "SPTThemableView.h"

@class NSString, SPTTheme, UILabel, UIView;

@interface SPTCeramicSingleFeaturedHeaderReusableView : UICollectionReusableView <SPTThemableView, SPTCeramicCollectionViewHeader>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_titleLabel;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
@property(retain, nonatomic) NSString *title;
- (void)populateHeaderWithBlock:(id)arg1;
- (void)layoutSubviews;
- (void)buildAccessibilityLabels;
- (void)setupTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIView *accessoryView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *descriptionText;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *headerAlignment;
@property(retain, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

