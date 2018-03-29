//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAppProtocolConnection.h"
#import "SPTAppProtocolDelegateConnectionSending.h"

@class NSString;

@interface SPTAppProtocolDelegateConnection : NSObject <SPTAppProtocolConnection, SPTAppProtocolDelegateConnectionSending>
{
    _Bool _open;
    id <SPTAppProtocolConnectionOutput> _messageReceiver;
    id <SPTAppProtocolConnectionDelegate> _connectionDelegate;
    id <SPTAppProtocolDelegateConnectionDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SPTAppProtocolDelegateConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTAppProtocolConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(nonatomic) __weak id <SPTAppProtocolConnectionOutput> messageReceiver; // @synthesize messageReceiver=_messageReceiver;
@property(readonly, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)sendMessageToAppProtocol:(id)arg1;
- (void)close;
- (void)open;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

