//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCOnDemandGeofilterDataControllerNotificationListener-Protocol.h"
#import "SCOnDemandGeofilterWebViewControllerDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, SCAlertViewActionTextFieldController, SCCardContainerView, SCHeader, SCLoadingIndicatorView, SCOnDemandGeofilterPillButton, SOJUUnlockablesOndemandAggregatedMetricStatsWithMinimum, SOJUUnlockablesOndemandLineItem, UIColor, UITableView;
@protocol SCOnDemandGeofilterLayoutProvider;

@interface SCOnDemandGeofilterReviewViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <UITableViewDelegate, UITableViewDataSource, SCHeaderDelegate, SCHeaderDataSource, TTTAttributedLabelDelegate, UITextFieldDelegate, SCOnDemandGeofilterWebViewControllerDelegate, SCOnDemandGeofilterDataControllerListener, SCOnDemandGeofilterDataControllerNotificationListener>
{
    SCHeader *_header;
    UITableView *_tableView;
    SOJUUnlockablesOndemandLineItem *_onDemandLineItem;
    unsigned long long _status;
    UIColor *_statusColor;
    NSString *_statusInfo;
    NSArray *_sectionDataModels;
    SCOnDemandGeofilterPillButton *_submitButton;
    SCAlertViewActionTextFieldController *_textFieldEmailAction;
    SCAlertViewActionTextFieldController *_discountCodeAlertTextField;
    SOJUUnlockablesOndemandAggregatedMetricStatsWithMinimum *_usageMetrics;
    NSString *_userEmail;
    _Bool _isUpdatingLineItem;
    SCLoadingIndicatorView *_activityIndicator;
    _Bool _fromMyGeofiltersView;
    _Bool _autoApprovalState;
    id <SCOnDemandGeofilterLayoutProvider> _layoutProvider;
    SCCardContainerView *_cardContainerView;
}

@property(retain, nonatomic) SCCardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
- (void).cxx_destruct;
- (void)presentPaymentProcessingAlertView;
- (void)_presentRemoveDiscountCodeAlertView;
- (void)_presentErrorAlertViewForDiscountCodeReference:(id)arg1;
- (void)_presentDiscountCodeAlertView;
- (id)mobilePaymentEventWithLineItem:(id)arg1;
- (void)purchaseDeferredNotification:(id)arg1;
- (void)purchaseFailedNotification:(id)arg1;
- (void)purchasingNotification:(id)arg1;
- (void)_presentRejectionReasonModalWithNote:(id)arg1;
- (void)_updateReviewViewControllerBasedOnFetchLineItem:(id)arg1;
- (_Bool)_isValidEmail:(id)arg1;
- (void)_updateUsageMetricsTableViewData;
- (void)_fetchUsageMetrics;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateCardBackground:(double)arg1;
- (id)updateValidatedItem:(id)arg1;
- (id)submissionLineItem;
- (void)_resetViewHeirarchyToDetailView;
- (void)_dismissReviewViewAndResetViewHeirarchy;
- (void)dataController:(id)arg1 didSubmitGeofilterWithId:(id)arg2 success:(_Bool)arg3 approved:(_Bool)arg4 error:(id)arg5;
- (void)_submitGeofilter;
- (void)_presentSubmissionAlertView;
- (void)_presentValidationFailedAlertViewWithLineItemValidationError:(id)arg1;
- (void)_submitPurchase;
- (_Bool)_autoRejected;
- (_Bool)_autoApproved;
- (_Bool)shouldEnableCollectPaymentFirst;
- (void)_didTapSubmitButton;
- (void)submitCancellation;
- (void)_presentCancellationAlertView;
- (void)_presentPaymentMethods;
- (void)_updateTableViewData;
- (void)updateOnDemandLineItem;
- (void)_presentOrderCopyIdAlertView;
- (void)_presentCreativeStudioViewController;
- (void)_presentMapViewController;
- (void)_presentScheduleSettingViewControllerBeginningRow:(unsigned long long)arg1;
- (void)_presentNameSettingViewController;
- (void)_presentAutoRejectedAlertView;
- (void)_presentInvalidEmailAddressAlertView;
- (void)_presentEmailAddressAlertView;
- (_Bool)shouldEnableCancellation;
- (_Bool)shouldShowManageSection;
- (_Bool)shouldShowMetrics;
- (_Bool)shouldShowRejectionReason;
- (id)_manageSectionDataModel:(id)arg1;
- (id)_paymentSectionDataModel:(id)arg1;
- (id)_detailSectionDataModel:(id)arg1;
- (id)_usageMetricsSectionDataModel:(id)arg1;
- (id)_rejectionReasonSectionDataModel:(id)arg1;
- (id)_screenShotSectionDataModel:(id)arg1;
- (id)_sectionDataModelBasedOn:(id)arg1 usageMetrics:(id)arg2;
- (void)setupBasedOn:(id)arg1;
- (id)_viewForDefaultTableHeaderWithText:(id)arg1;
- (_Bool)unsubmitted;
- (double)_heightForThumbnailPreviewCell;
- (void)updateBuilderSelectState:(id)arg1;
- (void)_logAndUpdateBeforeDismissWithExitEvent:(long long)arg1;
- (id)submitButtonString;
- (id)statusMessageInReviewView:(id)arg1;
- (void)setFromMyGeofiltersView:(_Bool)arg1;
- (void)_updateSessionLineItemPaymentAndOfferWithLineItem:(id)arg1;
- (void)updatePrice:(id)arg1;
- (void)dataController:(id)arg1 didUpdateCurrentEditingLineItem:(id)arg2 shouldUpdatePrice:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOffer:(id)arg2 success:(_Bool)arg3 validationErrors:(id)arg4;
- (void)dataController:(id)arg1 didUploadAssetMetadata:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchLineItem:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchNotificationLineItem:(id)arg2;
- (void)webViewWasDismissed;
- (void)_presentWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updateScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)leftSwipeSucceed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)didReceivedReceipt;
- (id)initWithGeofilterSession:(id)arg1 unlockablesOndemandLineItem:(id)arg2 fromMyGeofiltersView:(_Bool)arg3;
- (id)initWithGeofilterSession:(id)arg1 unlockablesOndemandLineItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
