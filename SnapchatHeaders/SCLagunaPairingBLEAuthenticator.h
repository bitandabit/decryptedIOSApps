//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaPairingBLEAuthenticator-Protocol.h"

@class NSData, NSString, SCLagunaECDH, SCLagunaNumericComparison;
@protocol SCLagunaPairingBLEAuthenticatorDelegate;

@interface SCLagunaPairingBLEAuthenticator : NSObject <SCLagunaPairingBLEAuthenticator>
{
    id <SCLagunaPairingBLEAuthenticatorDelegate> _delegate;
    SCLagunaECDH *_ecdh;
    SCLagunaNumericComparison *_numericComparison;
    NSData *_sharedSecret;
}

@property(retain, nonatomic) NSData *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(retain, nonatomic) SCLagunaNumericComparison *numericComparison; // @synthesize numericComparison=_numericComparison;
@property(retain, nonatomic) SCLagunaECDH *ecdh; // @synthesize ecdh=_ecdh;
@property(nonatomic) __weak id <SCLagunaPairingBLEAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleEncryptionResponse:(id)arg1;
- (void)startConnecting;
- (id)initWithVerificationCode:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

