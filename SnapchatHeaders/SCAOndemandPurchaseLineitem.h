//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAOndemandEventBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCAOndemandPurchaseLineitem : SCAOndemandEventBase <MapSerializable, NSCopying>
{
    NSNumber *offerAmountValue;
    NSNumber *viewTimeSec;
    NSNumber *offerSequenceId;
    NSNumber *offerArea;
    NSNumber *discountCodeValue;
    NSNumber *purchaseable;
    NSNumber *creativeDefaultTextBoxesDeleted;
    NSNumber *creativeTextBoxesAdded;
    NSNumber *creativeImagesImported;
    NSNumber *creativeBitmojiAdded;
    NSNumber *creativeFriendmojiAdded;
    NSString *lineItemId;
    NSString *fence;
    NSString *offerCountry;
    NSString *viewportSouthEast;
    NSString *viewportNorthWest;
    NSString *offerId;
    NSString *odgRulesVersion;
    NSString *featuredEventId;
    NSString *discountCodeType;
    NSString *creativeTemplateUsed;
    NSString *creativeColorUsed;
    NSString *creativeSessionId;
    NSString *creativeTextInfo;
    NSString *creativeBitmojiIds;
    NSString *creativeFriendmojiIds;
    NSDate *scheduledStartTime;
    NSDate *scheduledEndTime;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getScheduledEndTime;
- (void)setScheduledEndTime:(id)arg1;
- (id)getScheduledStartTime;
- (void)setScheduledStartTime:(id)arg1;
- (id)getCreativeFriendmojiIds;
- (void)setCreativeFriendmojiIds:(id)arg1;
- (id)getCreativeBitmojiIds;
- (void)setCreativeBitmojiIds:(id)arg1;
- (id)getCreativeTextInfo;
- (void)setCreativeTextInfo:(id)arg1;
- (id)getCreativeSessionId;
- (void)setCreativeSessionId:(id)arg1;
- (id)getCreativeColorUsed;
- (void)setCreativeColorUsed:(id)arg1;
- (id)getCreativeTemplateUsed;
- (void)setCreativeTemplateUsed:(id)arg1;
- (id)getDiscountCodeType;
- (void)setDiscountCodeType:(id)arg1;
- (id)getFeaturedEventId;
- (void)setFeaturedEventId:(id)arg1;
- (id)getOdgRulesVersion;
- (void)setOdgRulesVersion:(id)arg1;
- (id)getOfferId;
- (void)setOfferId:(id)arg1;
- (id)getViewportNorthWest;
- (void)setViewportNorthWest:(id)arg1;
- (id)getViewportSouthEast;
- (void)setViewportSouthEast:(id)arg1;
- (id)getOfferCountry;
- (void)setOfferCountry:(id)arg1;
- (id)getFence;
- (void)setFence:(id)arg1;
- (id)getLineItemId;
- (void)setLineItemId:(id)arg1;
- (long long)getCreativeFriendmojiAdded;
- (void)setCreativeFriendmojiAdded:(long long)arg1;
- (long long)getCreativeBitmojiAdded;
- (void)setCreativeBitmojiAdded:(long long)arg1;
- (long long)getCreativeImagesImported;
- (void)setCreativeImagesImported:(long long)arg1;
- (long long)getCreativeTextBoxesAdded;
- (void)setCreativeTextBoxesAdded:(long long)arg1;
- (long long)getCreativeDefaultTextBoxesDeleted;
- (void)setCreativeDefaultTextBoxesDeleted:(long long)arg1;
- (_Bool)getPurchaseable;
- (void)setPurchaseable:(_Bool)arg1;
- (double)getDiscountCodeValue;
- (void)setDiscountCodeValue:(double)arg1;
- (double)getOfferArea;
- (void)setOfferArea:(double)arg1;
- (long long)getOfferSequenceId;
- (void)setOfferSequenceId:(long long)arg1;
- (long long)getViewTimeSec;
- (void)setViewTimeSec:(long long)arg1;
- (double)getOfferAmountValue;
- (void)setOfferAmountValue:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

