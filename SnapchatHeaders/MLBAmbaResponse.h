//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBAuthResponse, MLBFirmwareUpdateUploadResponse, MLBLogResponse, MLBMediaResponse;

@interface MLBAmbaResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MLBAuthResponse *authResponse; // @dynamic authResponse;
@property(retain, nonatomic) MLBFirmwareUpdateUploadResponse *fwUpdateUploadResponse; // @dynamic fwUpdateUploadResponse;
@property(nonatomic) _Bool hasAuthResponse; // @dynamic hasAuthResponse;
@property(nonatomic) _Bool hasFwUpdateUploadResponse; // @dynamic hasFwUpdateUploadResponse;
@property(nonatomic) _Bool hasLogResponse; // @dynamic hasLogResponse;
@property(nonatomic) _Bool hasMediaResponse; // @dynamic hasMediaResponse;
@property(nonatomic) _Bool hasRequestComplete; // @dynamic hasRequestComplete;
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasWifiSharingStatus; // @dynamic hasWifiSharingStatus;
@property(retain, nonatomic) MLBLogResponse *logResponse; // @dynamic logResponse;
@property(retain, nonatomic) MLBMediaResponse *mediaResponse; // @dynamic mediaResponse;
@property(nonatomic) _Bool requestComplete; // @dynamic requestComplete;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) int wifiSharingStatus; // @dynamic wifiSharingStatus;

@end

