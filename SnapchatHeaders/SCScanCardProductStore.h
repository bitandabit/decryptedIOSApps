//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class NSString, SCLoadingIndicatorView, SCUserSession, SOJUCommerceProductInfo, SOJUCommerceStoreInfo, UIImageView, UILabel, UIView;

@interface SCScanCardProductStore : SCScanCardTableViewCell
{
    UIView *_headerBackgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSString *_scanData;
    double _totalCardHeight;
    SCLoadingIndicatorView *_imageLoadingIndicator;
    SOJUCommerceStoreInfo *_storeInfo;
    SOJUCommerceProductInfo *_demoProductInfo;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SOJUCommerceProductInfo *demoProductInfo; // @synthesize demoProductInfo=_demoProductInfo;
- (void).cxx_destruct;
- (void)_makeCardVisible;
- (void)_didTapOpenButton;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)loadData;
- (id)initWithStoreInfo:(id)arg1 userSession:(id)arg2;

@end

