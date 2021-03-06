//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCButton, UIImageView, UILabel, UIView;
@protocol SCLagunaSettingsInAppPurchaseCellDelegate;

@interface SCLagunaSettingsInAppPurchaseCell : UITableViewCell
{
    UIImageView *_spectaclesIcon;
    UIImageView *_spectaclesTitle;
    UILabel *_subtitle;
    UILabel *_info;
    SCButton *_shopButton;
    UIImageView *_sampleVideo;
    UIView *_featuresSectionBackground;
    UIImageView *_pressFeatureImage;
    UIImageView *_syncFeatureImage;
    UILabel *_pressFeatureTitle;
    UILabel *_pressFeatureDescription;
    UILabel *_syncFeatureTitle;
    UILabel *_syncFeatureDescription;
    UIImageView *_productSpreadImage;
    UILabel *_productSpreadInfo;
    SCButton *_getYoursButton;
    id <SCLagunaSettingsInAppPurchaseCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLagunaSettingsInAppPurchaseCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tapShopButton;
- (id)_imageFromPath:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

