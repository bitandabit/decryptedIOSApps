//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAppProtocolConnector.h"

@class NSMutableSet, NSString;

@interface SPTAppProtocolEAConnector : NSObject <SPTAppProtocolConnector>
{
    _Bool _acceptingConnections;
    id <SPTAppProtocolConnectorDelegate> _delegate;
    id <SPTSessionService> _sessionService;
    NSMutableSet *_accessoriesToConnect;
}

@property(readonly, nonatomic) NSMutableSet *accessoriesToConnect; // @synthesize accessoriesToConnect=_accessoriesToConnect;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(readonly, nonatomic, getter=isAcceptingConnections) _Bool acceptingConnections; // @synthesize acceptingConnections=_acceptingConnections;
@property(nonatomic) __weak id <SPTAppProtocolConnectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tryToConnectToAccessory:(id)arg1;
- (void)tryToConnectToAccessory:(id)arg1;
- (void)accessoryConnected:(id)arg1;
- (void)establishConnectionsToConnectedAccessories;
- (void)stopAcceptingConnections;
- (void)startAcceptingConnections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

