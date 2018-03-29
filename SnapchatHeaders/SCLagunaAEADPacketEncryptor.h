//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface SCLagunaAEADPacketEncryptor : NSObject
{
    void *_ctxt;
    NSData *_aEncryptionKey;
    NSData *_aTxNonce;
    NSData *_aRxNonce;
}

@property(retain, nonatomic) NSData *aRxNonce; // @synthesize aRxNonce=_aRxNonce;
@property(retain, nonatomic) NSData *aTxNonce; // @synthesize aTxNonce=_aTxNonce;
@property(retain, nonatomic) NSData *aEncryptionKey; // @synthesize aEncryptionKey=_aEncryptionKey;
@property(nonatomic) void *ctxt; // @synthesize ctxt=_ctxt;
- (void).cxx_destruct;
- (id)encryptMessage:(id)arg1;
- (id)decryptMessage:(id)arg1;
- (_Bool)connectionReady;
- (_Bool)setRxNonce:(id)arg1;
- (_Bool)setTxNonce:(id)arg1;
- (_Bool)setEncryptionKey:(id)arg1;
- (void)dealloc;
- (void)_attemptSetupEncryptor;

@end

