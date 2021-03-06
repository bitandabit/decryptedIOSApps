//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTextChatViewModelV2.h"

#import "SCPaymentChatCellViewConfig-Protocol.h"

@class NSArray, NSString;

@interface SCPaymentChatViewModelV2 : SCTextChatViewModelV2 <SCPaymentChatCellViewConfig>
{
    NSArray *_cashTagRanges;
    NSString *_amountForDisplay;
    NSString *_recipientUsername;
    NSString *_text;
    _Bool _isSwipeToSend;
    _Bool _isBlocked;
    _Bool _isReleased;
    _Bool _isRetriableAfterFailToSend;
    _Bool _isSent;
    _Bool _isUnread;
    long long _paymentStatus;
}

+ (id)statusLabelColor;
+ (id)cashBackgroundColor;
+ (id)cashTagColor;
+ (id)statusSublabelFont;
+ (id)statusTextFont;
+ (id)savedStatusTextFont;
@property(readonly, nonatomic) long long paymentStatus; // @synthesize paymentStatus=_paymentStatus;
- (void).cxx_destruct;
- (id)statusSubtext;
- (id)_otherDisplayName;
- (id)actionText;
- (id)attributedTextWithFont:(id)arg1;
- (id)rawText;
- (_Bool)shouldResolveBlockers;
- (id)subLabelText;
- (id)statusIconImage;
- (id)attributedStatusSubtext;
- (id)attributedActionText;
- (_Bool)shouldAnimateSwipeToSendReceiverSparkles;
- (_Bool)shouldShowStatusSubtext;
- (_Bool)shouldShowChatLabel;
- (_Bool)shouldShowFailedImageView;
- (_Bool)shouldShowActivity;
- (_Bool)shouldShowCashBackground;
- (double)bodyContentWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeight;
- (void)_setupV3:(id)arg1;
- (void)_setupV2:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

