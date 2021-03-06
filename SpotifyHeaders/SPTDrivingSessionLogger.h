//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSString;

@interface SPTDrivingSessionLogger : NSObject <SPTPlayerObserver>
{
    id <SPTLogCenterProtocol> _logCenter;
    id <SPTPlayer> _player;
    NSString *_sessionId;
}

@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)logEndStreamWithPlaybackID:(id)arg1 sessionId:(id)arg2;
- (void)fetchStateAndLogEndStream;
- (void)logExitWithReason:(id)arg1;
- (void)logExitBackgrounded;
- (void)logExitWithDismissalType:(unsigned long long)arg1;
- (void)logEnterWithReason:(id)arg1;
- (void)logEnterForegrounded;
- (void)logEnterWithLaunchOrigin:(unsigned long long)arg1;
- (id)initWithLogCenter:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

