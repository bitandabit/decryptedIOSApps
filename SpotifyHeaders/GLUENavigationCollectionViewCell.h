//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "GLUENavigationRow.h"

@class GLUELabel, GLUENavigationRowView, NSString;

@interface GLUENavigationCollectionViewCell : UICollectionViewCell <GLUENavigationRow>
{
    GLUENavigationRowView *_rowView;
}

+ (long long)exp_variantForComponentModel:(id)arg1;
+ (long long)spt_variantForComponentModel:(id)arg1;
@property(readonly, nonatomic) GLUENavigationRowView *rowView; // @synthesize rowView=_rowView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) unsigned long long state;
@property(nonatomic) long long icon;
@property(nonatomic) long long variant;
@property(readonly, nonatomic) GLUELabel *subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)exp_configureUsingComponentModel:(id)arg1;
- (void)spt_configureUsingComponentModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

