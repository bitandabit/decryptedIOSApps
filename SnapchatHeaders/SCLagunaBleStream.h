//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBPeripheralDelegate-Protocol.h"

@class CBPeripheral, CBUUID, NSMutableData, NSString;
@protocol SCLagunaBleStreamDelegate;

@interface SCLagunaBleStream : NSObject <CBPeripheralDelegate>
{
    _Bool _streamIsOpen;
    _Bool _hasSpaceAvailable;
    CBPeripheral *_peripheral;
    id <SCLagunaBleStreamDelegate> _delegate;
    CBUUID *_serviceUUID;
    CBUUID *_txCharacteristicUUID;
    CBUUID *_rxCharacteristicUUID;
    NSMutableData *_writeBuffer;
}

@property(nonatomic) _Bool hasSpaceAvailable; // @synthesize hasSpaceAvailable=_hasSpaceAvailable;
@property(retain, nonatomic) NSMutableData *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property(retain, nonatomic) CBUUID *rxCharacteristicUUID; // @synthesize rxCharacteristicUUID=_rxCharacteristicUUID;
@property(retain, nonatomic) CBUUID *txCharacteristicUUID; // @synthesize txCharacteristicUUID=_txCharacteristicUUID;
@property(retain, nonatomic) CBUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(nonatomic) __weak id <SCLagunaBleStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(nonatomic) _Bool streamIsOpen; // @synthesize streamIsOpen=_streamIsOpen;
- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)_sendGenericError;
- (void)_writeNextPacket;
- (void)writeData:(id)arg1;
- (void)open;
- (id)initWithPeripheral:(id)arg1 serviceUUID:(id)arg2 txCharacteristicUUID:(id)arg3 rxCharacteristicUUID:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
