//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLagunaResponseMessage.h"

@class SCLagunaRpcResponse;

@interface SCLagunaMalibuRpcResponseMessage : SCLagunaResponseMessage
{
    SCLagunaRpcResponse *_rpcResponse;
}

+ (id)_descriptionForFailureReason:(int)arg1;
+ (unsigned long long)_convertMLBAPState:(int)arg1;
@property(readonly, nonatomic) SCLagunaRpcResponse *rpcResponse; // @synthesize rpcResponse=_rpcResponse;
- (void).cxx_destruct;
- (_Bool)shipmodeSet;
- (_Bool)contentCleared;
- (id)mediaCount;
- (id)encryptionSetupNonce;
- (id)peerVerificationTag;
- (id)peerVerificationCiphertext;
- (id)peerVerificationNonce;
- (id)peerPublicKey;
- (_Bool)wifiOn;
- (_Bool)hasWifiState;
- (long long)bluetoothEvent;
- (_Bool)hasBluetoothEvent;
- (_Bool)receivedUserAssociationDoneMessage;
- (id)backgroundUpdateFailureReason;
- (id)backgroundUpdateParameters;
- (id)firmwareDigest;
- (_Bool)patchApplied;
- (_Bool)hasPatchApplied;
- (long long)firmwareUpdateResponseType;
- (_Bool)hasFirmwareUpdateResponse;
- (id)coulombCounterTemperature;
- (id)wifiTemperature;
- (id)ambaTemperature;
- (id)nordicTemperature;
- (long long)deviceColor;
- (_Bool)hasDeviceColor;
- (id)hardwareVersion;
- (id)firmwareVersion;
- (id)serialNumber;
- (id)lastCloudUploadTime;
- (_Bool)setWifiAPListResponse;
- (id)knownWifiAPList;
- (id)cloudUploadClientId;
- (_Bool)requestAuthzCode;
- (_Bool)charging;
- (_Bool)hasCharging;
- (id)voltageLevel;
- (id)batteryLevel;
- (long long)responseStatus;
- (id)description;
- (id)initWithRpcResponse:(id)arg1 request:(id)arg2;

@end

