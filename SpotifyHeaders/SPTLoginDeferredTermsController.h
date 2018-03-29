//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, SPTCoreTime;

@interface SPTLoginDeferredTermsController : NSObject
{
    id <SPTLoginDeferredTermsControllerDelegate> _delegate;
    NSDate *_acceptanceExpiryDate;
    id <SPTKeystoreDataSource> _keystore;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    SPTCoreTime *_coreTime;
}

@property(readonly, nonatomic) SPTCoreTime *coreTime; // @synthesize coreTime=_coreTime;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTKeystoreDataSource> keystore; // @synthesize keystore=_keystore;
@property(retain, nonatomic) NSDate *acceptanceExpiryDate; // @synthesize acceptanceExpiryDate=_acceptanceExpiryDate;
@property(nonatomic) __weak id <SPTLoginDeferredTermsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool deferredAcceptanceEnabled;
@property(readonly, nonatomic) _Bool canDeferAcceptance;
- (long long)graceDaysForLicenseAcceptance;
@property(readonly, nonatomic) long long remainingGraceDays;
@property(readonly, nonatomic) _Bool acceptanceExpiryDateExpired;
- (void)clearAcceptanceExpiryDate;
- (void)setExpirationDate:(id)arg1;
- (id)defaultExpirationDate;
- (void)deferAcceptance;
- (void)refreshAcceptanceTimeLimitAnd:(CDUnknownBlockType)arg1;
- (id)initWithKeyStore:(id)arg1 productState:(id)arg2 localSettings:(id)arg3 coreTime:(id)arg4;

@end

