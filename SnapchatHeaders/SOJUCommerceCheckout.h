//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUCommerceCheckout-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCommerceContactDetails, SOJUCommerceCurrencyAmount, SOJUCommerceDiscountInfo, SOJUCommerceShippingAddress;

@interface SOJUCommerceCheckout : NSObject <SOJUCommerceCheckout>
{
    NSString *_idValue;
    NSString *_partner;
    NSString *_storeId;
    SOJUCommerceCurrencyAmount *_totalPrice;
    NSString *_emailDeprecated;
    SOJUCommerceContactDetails *_contactDetails;
    NSString *_webUrl;
    NSArray *_lineItems;
    NSArray *_taxItems;
    SOJUCommerceShippingAddress *_shippingAddress;
    NSArray *_shippingOptions;
    NSString *_shippingOptionId;
    NSNumber *_shouldUseWebview;
    NSString *_discountCode;
    SOJUCommerceDiscountInfo *_discountInfo;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUCommerceDiscountInfo *discountInfo; // @synthesize discountInfo=_discountInfo;
@property(readonly, copy, nonatomic) NSString *discountCode; // @synthesize discountCode=_discountCode;
@property(readonly, copy, nonatomic) NSNumber *shouldUseWebview; // @synthesize shouldUseWebview=_shouldUseWebview;
@property(readonly, copy, nonatomic) NSString *shippingOptionId; // @synthesize shippingOptionId=_shippingOptionId;
@property(readonly, copy, nonatomic) NSArray *shippingOptions; // @synthesize shippingOptions=_shippingOptions;
@property(readonly, copy, nonatomic) SOJUCommerceShippingAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(readonly, copy, nonatomic) NSArray *taxItems; // @synthesize taxItems=_taxItems;
@property(readonly, copy, nonatomic) NSArray *lineItems; // @synthesize lineItems=_lineItems;
@property(readonly, copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(readonly, copy, nonatomic) SOJUCommerceContactDetails *contactDetails; // @synthesize contactDetails=_contactDetails;
@property(readonly, copy, nonatomic) NSString *emailDeprecated; // @synthesize emailDeprecated=_emailDeprecated;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(readonly, copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(readonly, copy, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 partner:(id)arg2 storeId:(id)arg3 totalPrice:(id)arg4 emailDeprecated:(id)arg5 contactDetails:(id)arg6 webUrl:(id)arg7 lineItems:(id)arg8 taxItems:(id)arg9 shippingAddress:(id)arg10 shippingOptions:(id)arg11 shippingOptionId:(id)arg12 shouldUseWebview:(id)arg13 discountCode:(id)arg14 discountInfo:(id)arg15;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)shouldUseWebviewValue;
- (long long)partnerEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

