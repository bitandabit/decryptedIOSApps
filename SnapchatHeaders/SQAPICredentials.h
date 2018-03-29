//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SQAPICredentials : NSObject
{
    NSString *_customerID;
    NSString *_accessToken;
    NSDate *_expirationDate;
}

@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *customerID; // @synthesize customerID=_customerID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)validForCustomer:(id)arg1 atTime:(id)arg2;
- (id)toArchive;
- (id)initWithCustomerID:(id)arg1 accessToken:(id)arg2 expiry:(id)arg3;
- (id)initFromArchive:(id)arg1;
- (id)initWithCustomerID:(id)arg1 accessToken:(id)arg2 expirationDate:(id)arg3;

@end

