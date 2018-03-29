//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTFeatureSettingsPage;

@interface SPTIAPFeatureSettingsPage : NSObject
{
    id <SPTIAPController> _iapController;
    id <InAppPurchaseController> _legacyController;
    SPTFeatureSettingsPage *_page;
}

@property(retain, nonatomic) SPTFeatureSettingsPage *page; // @synthesize page=_page;
@property(retain, nonatomic) id <InAppPurchaseController> legacyController; // @synthesize legacyController=_legacyController;
@property(retain, nonatomic) id <SPTIAPController> iapController; // @synthesize iapController=_iapController;
- (void).cxx_destruct;
- (id)inAppPurchaseModel;
- (void)addItem:(id)arg1;
- (void)createItems:(id)arg1 newStackEnabled:(_Bool)arg2 alertController:(id)arg3;
- (void)updateAvailableProductsIfNeeded;
- (id)initWithIAPController:(id)arg1 legacyController:(id)arg2 featureFlags:(id)arg3 featureSettingsItemFactory:(id)arg4 alertController:(id)arg5;

@end

