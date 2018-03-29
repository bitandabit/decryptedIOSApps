//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaPairingBLEAuthenticator-Protocol.h"

@class NSData, NSString, SCLagunaECDH, SCLagunaRequestMessage, SCLagunaWhiteboxAuthenticator;
@protocol SCLagunaPairingBLEAuthenticatorDelegate;

@interface SCLagunaMalibuPairingBLEAuthenticator : NSObject <SCLagunaPairingBLEAuthenticator>
{
    _Bool _disableEncryption;
    _Bool _enableProdAuthentication;
    _Bool _triedProdKey;
    _Bool _triedDevKey;
    id <SCLagunaPairingBLEAuthenticatorDelegate> _delegate;
    SCLagunaECDH *_ecdh;
    SCLagunaWhiteboxAuthenticator *_authenticator;
    NSData *_candidateCode;
    NSData *_appNonce;
    NSData *_peerNonce;
    NSData *_sharedSecret;
    SCLagunaRequestMessage *_peerVerificationRequest;
}

@property(nonatomic) _Bool triedDevKey; // @synthesize triedDevKey=_triedDevKey;
@property(nonatomic) _Bool triedProdKey; // @synthesize triedProdKey=_triedProdKey;
@property(retain, nonatomic) SCLagunaRequestMessage *peerVerificationRequest; // @synthesize peerVerificationRequest=_peerVerificationRequest;
@property(retain, nonatomic) NSData *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(retain, nonatomic) NSData *peerNonce; // @synthesize peerNonce=_peerNonce;
@property(retain, nonatomic) NSData *appNonce; // @synthesize appNonce=_appNonce;
@property(retain, nonatomic) NSData *candidateCode; // @synthesize candidateCode=_candidateCode;
@property(retain, nonatomic) SCLagunaWhiteboxAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(retain, nonatomic) SCLagunaECDH *ecdh; // @synthesize ecdh=_ecdh;
@property(nonatomic) __weak id <SCLagunaPairingBLEAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableProdAuthentication; // @synthesize enableProdAuthentication=_enableProdAuthentication;
@property(nonatomic) _Bool disableEncryption; // @synthesize disableEncryption=_disableEncryption;
- (void).cxx_destruct;
- (void)handleResponse:(id)arg1;
- (void)_tryPeerVerification;
- (void)startConnecting;
- (id)initWithCandidateCode:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
