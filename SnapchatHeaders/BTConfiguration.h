//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BTJSON;

@interface BTConfiguration : NSObject
{
    BTJSON *_json;
}

+ (void)setBetaPaymentOption:(id)arg1 isEnabled:(_Bool)arg2;
+ (_Bool)isBetaEnabledPaymentOption:(id)arg1;
@property(readonly, nonatomic) BTJSON *json; // @synthesize json=_json;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;
- (id)init;

@end
