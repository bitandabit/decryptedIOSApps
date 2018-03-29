//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCKCastChannel.h"

@class NSTimer;

@interface GCKHeartbeatChannel : GCKCastChannel
{
    NSTimer *_heartbeatTimer;
    NSTimer *_inactivityTimer;
    double _heartbeatInterval;
    double _inactivityTimeout;
    id <GCKHeartbeatChannelDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKHeartbeatChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scheduleTimers;
- (void)inactivityTimerDidFire;
- (void)heartbeatTimerDidFire;
- (_Bool)sendPing;
- (_Bool)sendPong;
- (void)didReceiveTextMessage:(id)arg1;
- (void)didDisconnect;
- (void)stopHeartbeat;
- (void)resetHeartbeat;
- (void)startHeartbeatWithInactivityTimeout:(double)arg1;
- (id)init;
- (id)initWithNamespace:(id)arg1;

@end

