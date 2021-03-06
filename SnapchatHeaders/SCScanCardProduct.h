//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

#import "SCCommerceLoggerPageMetricsDataSource-Protocol.h"
#import "SCScanCardProductProtocol-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCScanCardButton, SCScanProductInfo, SCUserSession, SOJUScannableActionMarcoAction, UIActivityIndicatorView, UIImageView, UILabel, UIView;
@protocol SCScanCardProductDelegate;

@interface SCScanCardProduct : SCScanCardTableViewCell <SCScanCardProductProtocol, SCCommerceLoggerPageMetricsDataSource>
{
    UIView *_headerBackgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_storeLabel;
    UILabel *_priceLabel;
    UILabel *_soldOutLabel;
    SCScanCardButton *_openButton;
    NSString *_scanData;
    UIActivityIndicatorView *_buttonIndicator;
    double _totalCardHeight;
    SCUserSession *_userSession;
    NSString *_productId;
    SCScanProductInfo *_productInfo;
    SOJUScannableActionMarcoAction *_productData;
    NSString *_titleInfo;
    NSString *_storeInfo;
    NSString *_priceInfo;
    NSString *_imageLink;
    NSString *_metricsDisplayId;
    SCLoadingIndicatorView *_imageLoadingIndicator;
    id <SCScanCardProductDelegate> _productDelegate;
}

+ (struct CGSize)_soldOutSize;
+ (struct CGSize)_priceSizeForProduct:(id)arg1;
+ (struct CGSize)_storeSizeForProduct:(id)arg1;
+ (struct CGSize)_titleSizeForProduct:(id)arg1;
+ (id)_priceTextForProduct:(id)arg1;
+ (id)_storeTextForProduct:(id)arg1;
+ (id)_titleTextForProduct:(id)arg1;
@property(nonatomic) __weak id <SCScanCardProductDelegate> productDelegate; // @synthesize productDelegate=_productDelegate;
- (void).cxx_destruct;
- (id)displayId;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)_setupFields;
- (void)_didTapOpenButton;
- (_Bool)isValid;
- (void)didMoveToSuperview;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)loadData;
- (void)stopLoadingProgress;
- (id)initWithProductData:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

