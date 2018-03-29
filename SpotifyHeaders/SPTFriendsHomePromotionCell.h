//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "GLUEStyleable.h"

@class GLUEImageView, GLUELabel, NSString;

@interface SPTFriendsHomePromotionCell : UITableViewCell <GLUEStyleable>
{
    GLUEImageView *_backgroundImageView;
    GLUEImageView *_promotionImageView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
}

@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEImageView *promotionImageView; // @synthesize promotionImageView=_promotionImageView;
@property(readonly, nonatomic) GLUEImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)configureWithGlueImageLoader:(id)arg1 promotionImageURL:(id)arg2 backgroundImageURL:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

