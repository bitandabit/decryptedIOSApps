//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBPeripheral, NSData, NSNumber, SCLagunaRequestMessage, VLKEncryptionSetupRequest;
@protocol SCLagunaPeripheralDelegate;

@protocol SCLagunaPeripheral <NSObject>
- (NSNumber *)RSSI;
- (CBPeripheral *)peripheral;
- (void)setDelegate:(id <SCLagunaPeripheralDelegate>)arg1;
- (id <SCLagunaPeripheralDelegate>)delegate;
- (void)sendEncryptionRequest:(VLKEncryptionSetupRequest *)arg1;
- (void)sendRequest:(SCLagunaRequestMessage *)arg1;
- (void)setupEncryptionWithKey:(NSData *)arg1;
- (void)openStream;
@end

