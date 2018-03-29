//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIImage;

@interface SPTGaiaOfferModel : NSObject
{
    long long _offerType;
    UIImage *_offerImage;
    NSURL *_offerURL;
}

@property(readonly, nonatomic) NSURL *offerURL; // @synthesize offerURL=_offerURL;
@property(readonly, nonatomic) UIImage *offerImage; // @synthesize offerImage=_offerImage;
@property(readonly, nonatomic) long long offerType; // @synthesize offerType=_offerType;
- (void).cxx_destruct;
- (id)initWithOfferType:(long long)arg1 image:(id)arg2 url:(id)arg3;

@end

