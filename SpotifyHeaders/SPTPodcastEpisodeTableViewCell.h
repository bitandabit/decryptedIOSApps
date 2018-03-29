//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "GLUEStatefulItem.h"
#import "GLUEStyleable.h"

@class GLUEStatefulStyle, NSString, NSURL, SPTLayoutConstraintBuilder, SPTPodcastEpisodeView, SPTTheme, UIView;

@interface SPTPodcastEpisodeTableViewCell : UITableViewCell <GLUEStatefulItem, GLUEStyleable>
{
    NSURL *_imageURL;
    GLUEStatefulStyle *_style;
    unsigned long long _state;
    SPTPodcastEpisodeView *_episodeView;
    SPTLayoutConstraintBuilder *_layout;
    SPTTheme *_catTheme;
}

@property(retain, nonatomic) SPTTheme *catTheme; // @synthesize catTheme=_catTheme;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTPodcastEpisodeView *episodeView; // @synthesize episodeView=_episodeView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) GLUEStatefulStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (void)updateStateBasedStyle;
- (void)glue_applyStyle:(id)arg1;
- (void)applyStateStyle:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isActive) _Bool active;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(retain, nonatomic) UIView *editingTrailingAccessoryView;
@property(retain, nonatomic) UIView *trailingAccessoryView;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader;
@property(copy, nonatomic) NSString *episodeDescription;
@property(nonatomic) double listeningProgress;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) long long episodeOfflineSyncStatus;
- (void)prepareForReuse;
- (struct CGSize)intrinsicContentSize;
- (void)setupLayoutWithTheme:(id)arg1;
- (void)setupEpisodeViewWithTheme:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

