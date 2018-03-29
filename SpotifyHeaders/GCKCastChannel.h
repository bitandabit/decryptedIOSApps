//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCKDeviceManager, NSString;

@interface GCKCastChannel : NSObject
{
    _Bool _isConnected;
    NSString *_protocolNamespace;
    GCKDeviceManager *_deviceManager;
}

@property(nonatomic) __weak GCKDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(copy, nonatomic) NSString *protocolNamespace; // @synthesize protocolNamespace=_protocolNamespace;
- (void).cxx_destruct;
- (id)description;
- (void)didDisconnect;
- (void)didConnect;
- (id)generateRequestNumber;
- (long long)generateRequestID;
- (_Bool)sendBinaryMessage:(id)arg1 toDestinationID:(id)arg2;
- (_Bool)sendBinaryMessage:(id)arg1 error:(id *)arg2;
- (_Bool)sendBinaryMessage:(id)arg1;
- (_Bool)sendTextMessage:(id)arg1 toDestinationID:(id)arg2;
- (_Bool)sendTextMessage:(id)arg1 error:(id *)arg2;
- (_Bool)sendTextMessage:(id)arg1;
- (void)didReceiveBinaryMessage:(id)arg1;
- (void)didReceiveTextMessage:(id)arg1;
- (void)receiveMessage:(id)arg1;
- (void)disconnect;
- (void)connect;
- (id)init;
- (id)initWithNamespace:(id)arg1;

@end
