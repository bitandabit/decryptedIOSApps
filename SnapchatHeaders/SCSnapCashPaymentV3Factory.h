//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCSnapCashPaymentV3Factory : NSObject
{
}

+ (id)_amountForDisplay:(unsigned long long)arg1;
+ (id)_cashTagRangesFromCashTransaction:(id)arg1;
+ (id)labelSnapCashPaymentAsFailed:(id)arg1;
+ (id)createSnapCashPaymentInNewMessageInConversationId:(id)arg1 senderUsername:(id)arg2 senderId:(id)arg3 recipientUsername:(id)arg4 amount:(unsigned long long)arg5 cashTagRanges:(id)arg6 isSwipe:(_Bool)arg7;
+ (id)createSnapCashPaymentFromSOJU:(id)arg1 username:(id)arg2;

@end

