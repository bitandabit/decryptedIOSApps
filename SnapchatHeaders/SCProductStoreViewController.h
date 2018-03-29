//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownSwipableViewController.h"

#import "SCProductCartStatusViewDelegate-Protocol.h"
#import "SCProductStorePageViewDelegate-Protocol.h"
#import "SCSnapcodeTabBarDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCExtendedHitButton, SCLoadingIndicatorView, SCProductCartStatusView, SCScanProductInfo, SCSnapcodeTabBar, SCUserSession, SOJUCommerceProductInfo, SOJUCommerceStoreInfo, UICollectionView, UILabel;

@interface SCProductStoreViewController : SCDownSwipableViewController <SCSnapcodeTabBarDelegate, SCProductStorePageViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, SCProductCartStatusViewDelegate>
{
    UICollectionView *_productImageCollection;
    UICollectionView *_productSubCategoryCollection;
    SCUserSession *_userSession;
    SCSnapcodeTabBar *_primaryTabBar;
    SCSnapcodeTabBar *_subCategoryTabBar;
    SCScanProductInfo *_productInfo;
    NSArray *_tabItemLabels;
    UICollectionView *_productPageCollection;
    SCLoadingIndicatorView *_activityIndicator;
    NSMutableArray *_productItemsForCollection;
    SCExtendedHitButton *_closeButton;
    UILabel *_storeLabel;
    double _collectionWidth;
    double _collectionHeight;
    long long _totalPages;
    NSArray *_categories;
    NSArray *_subCategories;
    _Bool _tabBarVisible;
    SOJUCommerceStoreInfo *_storeInfo;
    SOJUCommerceProductInfo *_demoProduct;
    SCProductCartStatusView *_cartStatusView;
    UILabel *_cartItemCount;
    SOJUCommerceProductInfo *_lastViewedProduct;
}

- (void).cxx_destruct;
- (id)productsForCategoryId:(id)arg1;
- (void)_openIntroPageViewForProduct:(id)arg1;
- (void)_didTapCloseButton;
- (void)_setupSubCategoriesTabs;
- (void)_setupProductPages;
- (void)_setupTabNavigation;
- (void)productCartStatusViewDidTapped:(id)arg1;
- (void)productStorePageView:(id)arg1 didSelectProduct:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)snapcodeTabBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithStoreInfo:(id)arg1 demoProduct:(id)arg2 userSession:(id)arg3;
- (id)initWithStoreInfo:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
