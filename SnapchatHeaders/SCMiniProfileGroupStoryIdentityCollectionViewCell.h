//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

@class SCGroupStoryDescriptionLabel, SCStoryAvatarView, UIImageView, UILabel;
@protocol SCMiniProfileGroupStoryIdentityCollectionViewCellDelegate;

@interface SCMiniProfileGroupStoryIdentityCollectionViewCell : SCMiniProfileCollectionViewCell
{
    SCStoryAvatarView *_storyAvatarView;
    UIImageView *_previewImageView;
    UILabel *_titleLabel;
    SCGroupStoryDescriptionLabel *_subtitleLabel;
    UIImageView *_subtitleIconImageView;
    id <SCMiniProfileGroupStoryIdentityCollectionViewCellDelegate> _delegate;
}

+ (id)subtitleFont;
+ (double)height;
- (void).cxx_destruct;
- (void)_setupStoryAvatarViewWithUserSession:(id)arg1 contexts:(id)arg2 friendStories:(id)arg3;
- (void)didTapPreview:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setUserSession:(id)arg1 contexts:(id)arg2 groupStory:(id)arg3 previewImage:(id)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
