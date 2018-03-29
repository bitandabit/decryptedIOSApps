//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSMutableDictionary, NSString;

@interface SPTRunningPlaybackStateRestorer : NSObject <SPTPlayerObserver>
{
    id <SPTPlayer> _player;
    NSMutableDictionary *_states;
    NSMutableDictionary *_playerStates;
}

@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property(retain, nonatomic) NSMutableDictionary *states; // @synthesize states=_states;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (id)sanitiseURL:(id)arg1;
- (id)playbackStateForURL:(id)arg1;
- (void)saveStateWithContext:(id)arg1 options:(id)arg2;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

