//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaBleStreamDelegate-Protocol.h"
#import "SCLagunaMessageBufferDelegate-Protocol.h"
#import "SCLagunaPeripheral-Protocol.h"

@class CBPeripheral, NSMutableArray, NSNumber, NSString, SCLagunaBleStream, SCLagunaECBPacketEncryptor, SCLagunaMessageBuffer;
@protocol SCLagunaPeripheralDelegate;

@interface SCLagunaPeripheral : NSObject <SCLagunaBleStreamDelegate, SCLagunaMessageBufferDelegate, SCLagunaPeripheral>
{
    id <SCLagunaPeripheralDelegate> _delegate;
    CBPeripheral *_peripheral;
    NSNumber *_RSSI;
    SCLagunaMessageBuffer *_messageBuffer;
    SCLagunaBleStream *_stream;
    NSMutableArray *_requests;
    long long _previousRequestCount;
    SCLagunaECBPacketEncryptor *_encryptor;
}

@property(retain, nonatomic) SCLagunaECBPacketEncryptor *encryptor; // @synthesize encryptor=_encryptor;
@property(nonatomic) long long previousRequestCount; // @synthesize previousRequestCount=_previousRequestCount;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) SCLagunaBleStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) SCLagunaMessageBuffer *messageBuffer; // @synthesize messageBuffer=_messageBuffer;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(nonatomic) __weak id <SCLagunaPeripheralDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)streamDidError:(id)arg1;
- (void)streamDidReadData:(id)arg1;
- (void)streamDidOpen;
- (void)messageBufferReceivedData:(id)arg1 messageType:(unsigned long long)arg2;
- (void)openStream;
- (void)sendEncryptionRequest:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)setupEncryptionWithKey:(id)arg1;
- (void)_handleEncryptionResponseData:(id)arg1;
- (void)_handleNrfResponseData:(id)arg1;
- (id)initWithPeripheral:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

