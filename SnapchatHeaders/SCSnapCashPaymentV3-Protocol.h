//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SCSnapCashPaymentV3 <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool sentByUser;
@property(readonly, nonatomic) _Bool didSwipePaymentRainPresent;
@property(readonly, nonatomic) _Bool isSwipeToSend;
@property(readonly, copy, nonatomic) NSString *signature;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, copy, nonatomic) NSNumber *amount;
@property(readonly, copy, nonatomic) NSArray *cashTagRanges;
@property(readonly, nonatomic) long long sendAction;
@property(readonly, nonatomic) long long sendStatus;
@property(readonly, nonatomic) long long paymentStatus;
@property(readonly, copy, nonatomic) NSString *recipientId;
@property(readonly, copy, nonatomic) NSString *recipientUsername;
@property(readonly, copy, nonatomic) NSString *senderId;
@property(readonly, copy, nonatomic) NSString *senderUsername;
@property(readonly, copy, nonatomic) NSString *cvv;
@property(readonly, copy, nonatomic) NSArray *blockers;
@property(readonly, copy, nonatomic) NSString *transactionId;
@property(readonly, copy, nonatomic) NSString *conversationId;
@end

