//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface SCUserCashStatus : NSObject <NSCoding>
{
    _Bool _attemptedToLoadProofTokenFromKeychain;
    _Bool _hasAcceptedCashTOSWithSnapchat;
    _Bool _hasAcceptedCashTOSWithSquare;
    _Bool _pendingUpdateToSnapchatServerForTOS;
    _Bool _pendingUpdateToSquareServerForTOS;
    _Bool _hasVerifiedPhoneNumberWithSquare;
    _Bool _requiresPasscodeToMakePayment;
    _Bool _isCashActive;
    _Bool _shouldUpdateFromSquare;
    _Bool _hasValidCard;
    NSString *_scEligibilityStatus;
    NSString *_cardBrand;
    NSString *_cardProofToken;
    NSString *_cardSuffix;
}

@property(nonatomic) _Bool hasValidCard; // @synthesize hasValidCard=_hasValidCard;
@property(copy, nonatomic) NSString *cardSuffix; // @synthesize cardSuffix=_cardSuffix;
@property(copy, nonatomic) NSString *cardProofToken; // @synthesize cardProofToken=_cardProofToken;
@property(copy, nonatomic) NSString *cardBrand; // @synthesize cardBrand=_cardBrand;
@property(nonatomic) _Bool shouldUpdateFromSquare; // @synthesize shouldUpdateFromSquare=_shouldUpdateFromSquare;
@property(copy, nonatomic) NSString *scEligibilityStatus; // @synthesize scEligibilityStatus=_scEligibilityStatus;
@property(nonatomic) _Bool isCashActive; // @synthesize isCashActive=_isCashActive;
@property(nonatomic) _Bool requiresPasscodeToMakePayment; // @synthesize requiresPasscodeToMakePayment=_requiresPasscodeToMakePayment;
@property(nonatomic) _Bool hasVerifiedPhoneNumberWithSquare; // @synthesize hasVerifiedPhoneNumberWithSquare=_hasVerifiedPhoneNumberWithSquare;
@property(nonatomic) _Bool pendingUpdateToSquareServerForTOS; // @synthesize pendingUpdateToSquareServerForTOS=_pendingUpdateToSquareServerForTOS;
@property(nonatomic) _Bool pendingUpdateToSnapchatServerForTOS; // @synthesize pendingUpdateToSnapchatServerForTOS=_pendingUpdateToSnapchatServerForTOS;
@property(nonatomic) _Bool hasAcceptedCashTOSWithSquare; // @synthesize hasAcceptedCashTOSWithSquare=_hasAcceptedCashTOSWithSquare;
@property(nonatomic) _Bool hasAcceptedCashTOSWithSnapchat; // @synthesize hasAcceptedCashTOSWithSnapchat=_hasAcceptedCashTOSWithSnapchat;
- (void).cxx_destruct;
- (long long)cashButtonBehavior;
- (void)updateCashStatusWithDictionary:(id)arg1;
- (void)handleCashStatusFailureWithError:(id)arg1;
- (_Bool)shouldDisplaySendCashConfirmation;
- (void)setDontDisplaySendCashConfirmation;
- (id)json;
- (void)updateWithJsonDictionary:(id)arg1;
- (_Bool)hasCardAndProofToken;
- (void)clearCardInfo;
- (void)saveCardProofToken;
- (void)loadCardProofTokenForUsername:(id)arg1;
- (_Bool)isNotEligible;
- (_Bool)isPotentiallyEligible;
- (_Bool)isIneligibleAsNonUSUser;
- (_Bool)isFullyEligible;
- (void)markAsAcceptedSquareTOS;
- (void)updateFromSquareWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)updateWithSnapCashBlockers:(id)arg1;
- (void)updateWithBlockers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

