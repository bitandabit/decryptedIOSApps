//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "GLUEReusable.h"
#import "GLUEStatefulItem.h"
#import "GLUEStyleable.h"
#import "SPTCellImageLoadingContextCompatibleCell.h"

@class GLUEImageView, GLUELabel, GLUEStatefulStyle, NSString, SPTOfflineSyncStatusView, SPTTrackAccessoryLabel, UIView;

@interface SPTShowsFormatEntityViewCell : UICollectionViewCell <GLUEStatefulItem, GLUEStyleable, GLUEReusable, SPTCellImageLoadingContextCompatibleCell>
{
    _Bool _didSetupConstraints;
    GLUEImageView *_imageView;
    GLUELabel *_textLabel;
    GLUELabel *_detailTextLabel;
    UIView *_accessoryView;
    SPTTrackAccessoryLabel *_trackAccessoryLabel;
    UIView *_animationContentView;
    long long _offlineSyncStatus;
    GLUEStatefulStyle *_style;
    unsigned long long _state;
    SPTOfflineSyncStatusView *_offlineSyncStatusView;
}

@property(readonly, nonatomic) SPTOfflineSyncStatusView *offlineSyncStatusView; // @synthesize offlineSyncStatusView=_offlineSyncStatusView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) GLUEStatefulStyle *style; // @synthesize style=_style;
@property(nonatomic) long long offlineSyncStatus; // @synthesize offlineSyncStatus=_offlineSyncStatus;
@property(readonly, nonatomic) UIView *animationContentView; // @synthesize animationContentView=_animationContentView;
@property(retain, nonatomic) SPTTrackAccessoryLabel *trackAccessoryLabel; // @synthesize trackAccessoryLabel=_trackAccessoryLabel;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) GLUELabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) GLUELabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updateStateStyle;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
- (void)glue_applyStateStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

