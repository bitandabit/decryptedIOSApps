//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "GLUEStyleable.h"
#import "SPTThemableView.h"

@class GLUELabel, NSArray, NSString, UIImageView;

@interface SPTTableViewSectionHeaderView : UITableViewHeaderFooterView <GLUEStyleable, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _tableViewThemeStyle;
    long long _size;
    UIImageView *_imageView;
    GLUELabel *_titleLabel;
    NSArray *_managedConstraints;
}

+ (double)headerHeightForSize:(long long)arg1 theme:(id)arg2;
+ (id)styleForSize:(long long)arg1 theme:(id)arg2;
+ (double)preferredHeightForSize:(long long)arg1;
+ (double)preferredHeight;
+ (id)shuffleIncludesHeaderCellForTableView:(id)arg1;
+ (void)registerShuffleIncludeHeaderViewOnTableView:(id)arg1;
@property(copy, nonatomic) NSArray *managedConstraints; // @synthesize managedConstraints=_managedConstraints;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long tableViewThemeStyle; // @synthesize tableViewThemeStyle=_tableViewThemeStyle;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyBackgroundColor;
- (void)applyStyling;
- (void)removeViewConstraints;
- (void)buildSmallLayout:(id)arg1 style:(id)arg2;
- (void)buildLargeLayout:(id)arg1 style:(id)arg2;
- (void)addViewConstraintsForStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)applyThemeLayout;
- (void)setSubviewLayoutConstraintsForTheme;
- (void)layoutSubviews;
- (id)detailTextLabel;
- (id)textLabel;
@property(copy, nonatomic) NSString *title;
- (id)initWithReuseIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isShuffleIncludesCell) _Bool shuffleIncludesCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

