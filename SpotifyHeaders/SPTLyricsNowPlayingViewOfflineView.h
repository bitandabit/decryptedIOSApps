//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SPTLyricsNowPlayingViewOfflineView : UIView
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)iconImageViewFrame;
- (struct CGRect)secondaryLabelFrame;
- (struct CGRect)primaryLabelFrame;
- (id)setupIconImage;
- (id)setupSecondaryLabel;
- (id)setupPrimaryLabel;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

