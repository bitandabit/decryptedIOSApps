//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFeedIconBaseView-Protocol.h"

@class NSCache, SCFriendsFeedIcon, UIImageView;

@interface SCCheetahFeedSimplifiedSublabelIconView : UIView <SCFeedIconBaseView>
{
    UIImageView *_iconImageView;
    SCFriendsFeedIcon *_friendsFeedIcon;
    NSCache *_feedIconCache;
}

- (void).cxx_destruct;
- (void)_updateIconImageViewWithImageName:(id)arg1;
- (_Bool)isVisible;
- (void)updateWithFeedIcon:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (id)iconImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

