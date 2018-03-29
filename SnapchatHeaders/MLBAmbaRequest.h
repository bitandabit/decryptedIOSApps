//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBAuthRequest, MLBFirmwareUpdateUploadRequest, NSMutableArray;

@interface MLBAmbaRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MLBAuthRequest *authRequest; // @dynamic authRequest;
@property(retain, nonatomic) NSMutableArray *cancellationRequestArray; // @dynamic cancellationRequestArray;
@property(readonly, nonatomic) unsigned long long cancellationRequestArray_Count; // @dynamic cancellationRequestArray_Count;
@property(retain, nonatomic) MLBFirmwareUpdateUploadRequest *fwUpdateUploadRequest; // @dynamic fwUpdateUploadRequest;
@property(nonatomic) _Bool hasAuthRequest; // @dynamic hasAuthRequest;
@property(nonatomic) _Bool hasFwUpdateUploadRequest; // @dynamic hasFwUpdateUploadRequest;
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasWifiSharingRequest; // @dynamic hasWifiSharingRequest;
@property(retain, nonatomic) NSMutableArray *logRequestArray; // @dynamic logRequestArray;
@property(readonly, nonatomic) unsigned long long logRequestArray_Count; // @dynamic logRequestArray_Count;
@property(retain, nonatomic) NSMutableArray *mediaRequestArray; // @dynamic mediaRequestArray;
@property(readonly, nonatomic) unsigned long long mediaRequestArray_Count; // @dynamic mediaRequestArray_Count;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) _Bool wifiSharingRequest; // @dynamic wifiSharingRequest;

@end
