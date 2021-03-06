//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProductGenericViewController.h"

#import "SCCommerceLoggerPageMetricsDataSource-Protocol.h"
#import "SCPaymentsCardCreateUpdateViewControllerDelegate-Protocol.h"
#import "SCPaymentsContactViewControllerDelegate-Protocol.h"
#import "SCPaymentsSelectEditListViewControllerDelegate-Protocol.h"
#import "SCScanProductOrderMessageDelegate-Protocol.h"
#import "SCShippingAddressCreateUpdateViewControllerDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSNumberFormatter, NSString, SCCommerceCheckout, SCCommerceManager, SCLoadingIndicatorView, SCPaymentsContactDetails, SCPaymentsMethodWrapper, SCPaymentsShippingAddress, SCProductCheckoutProgressView, SCProductCheckoutSummaryViewCell, SCScanCardButton, SCScanProductOrderMessage, SOJUCommerceCheckoutShippingOption, SOJUCommerceStoreInfo, UIImageView, UILabel, UITableView, UIView, UIVisualEffectView;
@protocol SCProductCheckoutViewControllerUnlockDelegate;

@interface SCProductCheckoutViewController : SCProductGenericViewController <SCScanProductOrderMessageDelegate, SCPaymentsContactViewControllerDelegate, SCPaymentsSelectEditListViewControllerDelegate, SCShippingAddressCreateUpdateViewControllerDelegate, SCPaymentsCardCreateUpdateViewControllerDelegate, TTTAttributedLabelDelegate, SCCommerceLoggerPageMetricsDataSource, UITableViewDataSource, UITableViewDelegate>
{
    SOJUCommerceStoreInfo *_storeInfo;
    UIView *_storeDetailsView;
    UILabel *_storeTitle;
    UILabel *_orderQuantityLabel;
    UIView *_selectionOverlayView;
    UIImageView *_confettiImageView;
    UIView *_productTopView;
    UIView *_productBottomView;
    UILabel *_productQuantityLabel;
    UIImageView *_productImageView;
    SCScanProductOrderMessage *_orderConfirmationMessage;
    int _orderQuantity;
    _Bool _requestingCheckout;
    _Bool _hasNoExistingPaymentMethods;
    _Bool _hasNoExistingShippingAddresses;
    SCProductCheckoutProgressView *_progressView;
    SCLoadingIndicatorView *_pageLoadingIndicator;
    UIVisualEffectView *_loadingBackgroundView;
    NSString *_cartToken;
    NSString *_partner;
    NSString *_requestId;
    NSString *_currency;
    NSString *_metricsDisplayId;
    unsigned long long _theme;
    _Bool _initialDataLoading;
    _Bool _shippingRateLoading;
    _Bool _paymentLoading;
    _Bool _initialContactRequestComplete;
    _Bool _initialPaymentRequestComplete;
    _Bool _initialAddressRequestComplete;
    _Bool _checkoutUpdateRequestActive;
    _Bool _cancelLeftSwipe;
    id <SCProductCheckoutViewControllerUnlockDelegate> _unlockDelegate;
    UIImageView *_storeIconImageView;
    SCLoadingIndicatorView *_storeIconImageLoadingView;
    UITableView *_productTableView;
    SCPaymentsContactDetails *_contactDetails;
    SCPaymentsShippingAddress *_shippingAddress;
    SCPaymentsMethodWrapper *_paymentCard;
    SCLoadingIndicatorView *_activityIndicator;
    SCScanCardButton *_placeOrderButton;
    SCCommerceCheckout *_checkout;
    NSNumberFormatter *_currencyFormatter;
    NSArray *_shippingRates;
    SOJUCommerceCheckoutShippingOption *_shippingRate;
    NSString *_shippingMethod;
    SCProductCheckoutSummaryViewCell *_summaryView;
    UILabel *_productTitle;
    SCCommerceManager *_commerceManager;
}

@property(retain, nonatomic) SCCommerceManager *commerceManager; // @synthesize commerceManager=_commerceManager;
@property(retain, nonatomic) UILabel *productTitle; // @synthesize productTitle=_productTitle;
@property(retain, nonatomic) SCProductCheckoutSummaryViewCell *summaryView; // @synthesize summaryView=_summaryView;
@property _Bool cancelLeftSwipe; // @synthesize cancelLeftSwipe=_cancelLeftSwipe;
@property(nonatomic) _Bool checkoutUpdateRequestActive; // @synthesize checkoutUpdateRequestActive=_checkoutUpdateRequestActive;
@property(nonatomic) _Bool initialAddressRequestComplete; // @synthesize initialAddressRequestComplete=_initialAddressRequestComplete;
@property(nonatomic) _Bool initialPaymentRequestComplete; // @synthesize initialPaymentRequestComplete=_initialPaymentRequestComplete;
@property(nonatomic) _Bool initialContactRequestComplete; // @synthesize initialContactRequestComplete=_initialContactRequestComplete;
@property(nonatomic) _Bool hasNoExistingShippingAddresses; // @synthesize hasNoExistingShippingAddresses=_hasNoExistingShippingAddresses;
@property(nonatomic) _Bool hasNoExistingPaymentMethods; // @synthesize hasNoExistingPaymentMethods=_hasNoExistingPaymentMethods;
@property(nonatomic) _Bool paymentLoading; // @synthesize paymentLoading=_paymentLoading;
@property(nonatomic) _Bool shippingRateLoading; // @synthesize shippingRateLoading=_shippingRateLoading;
@property(nonatomic) _Bool initialDataLoading; // @synthesize initialDataLoading=_initialDataLoading;
@property(retain, nonatomic) NSString *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) SOJUCommerceCheckoutShippingOption *shippingRate; // @synthesize shippingRate=_shippingRate;
@property(retain, nonatomic) NSArray *shippingRates; // @synthesize shippingRates=_shippingRates;
@property(retain, nonatomic) NSNumberFormatter *currencyFormatter; // @synthesize currencyFormatter=_currencyFormatter;
@property(retain, nonatomic) SCCommerceCheckout *checkout; // @synthesize checkout=_checkout;
@property(retain, nonatomic) SCScanCardButton *placeOrderButton; // @synthesize placeOrderButton=_placeOrderButton;
@property(retain, nonatomic) SCLoadingIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) SCPaymentsMethodWrapper *paymentCard; // @synthesize paymentCard=_paymentCard;
@property(retain, nonatomic) SCPaymentsShippingAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) SCPaymentsContactDetails *contactDetails; // @synthesize contactDetails=_contactDetails;
@property(retain, nonatomic) UITableView *productTableView; // @synthesize productTableView=_productTableView;
@property(retain, nonatomic) SCLoadingIndicatorView *storeIconImageLoadingView; // @synthesize storeIconImageLoadingView=_storeIconImageLoadingView;
@property(retain, nonatomic) UIImageView *storeIconImageView; // @synthesize storeIconImageView=_storeIconImageView;
@property(nonatomic) __weak id <SCProductCheckoutViewControllerUnlockDelegate> unlockDelegate; // @synthesize unlockDelegate=_unlockDelegate;
- (void).cxx_destruct;
- (id)displayId;
- (id)_shippingMethodDisplayTitle:(id)arg1;
- (void)_updateCheckoutButtonState;
- (void)_hideBlurView;
- (void)_showBlurView;
- (void)_downloadConfettiGifIfNecessary;
- (id)_getPaymentMethodError;
- (void)_highlightCellIfValidationError:(id)arg1;
- (void)_updateCheckout:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_quantityText;
- (void)_showError:(id)arg1 title:(id)arg2;
- (id)_unlockItemsForSuccessfulCheckout;
- (void)_resetShippingRate;
- (void)_updateCheckoutWithShippingRate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didGetShippingRates:(id)arg1;
- (_Bool)_shouldShowShippingMethodCell;
- (void)_prepopulateCheckoutFieldsIfAvailable;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)paymentsSelectEditListViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)paymentsCardCreationEditViewController:(id)arg1 didCreatePaymentsMethod:(id)arg2;
- (void)paymentsShippingAddressViewController:(id)arg1 didAddAddress:(id)arg2;
- (void)paymentsContactViewControllerDidSave:(id)arg1 contact:(id)arg2;
- (void)_dismissToPdp;
- (id)_currentQuantityText;
- (void)_closeSelection;
- (void)_didClickShippingMethod;
- (void)_didClickPaymentMethod;
- (void)handleTapFromConfirmation:(id)arg1;
- (void)_showConfirmation:(id)arg1;
- (void)checkoutButtonShowProgress:(_Bool)arg1;
- (void)_enableCheckout;
- (void)_disableCheckout;
- (void)_cancelCheckout;
- (void)scanProductOrderMessageDidTapDismiss:(id)arg1;
- (void)scanProductOrderMessageDidTapViewReceipt:(id)arg1 order:(id)arg2;
- (void)_didClickOrder;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)currentShipping;
- (id)currentTax;
- (id)_subTotalOfCartItems;
- (void)_updateSummaryView;
- (id)_createBottomCell:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)_configurePaymentMethodCell:(id)arg1;
- (void)_configureShippingMethodCell:(id)arg1;
- (void)_configureShippingAddressCell:(id)arg1;
- (void)_configureContactsCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)_getPaymentMethodWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAccountInfoAndSetupCheckoutWithCompletion:(CDUnknownBlockType)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (void)leftButtonPressed;
- (_Bool)disableLeftSwipe;
- (id)getTitle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 headerStyle:(unsigned long long)arg2 partner:(id)arg3 storeInfo:(id)arg4 checkout:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

