//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SPTDrivingPlayerStateCache : NSObject
{
    long long _restorePausedStateBehavior;
    NSDictionary *_cachedPlayerStates;
}

@property(retain, nonatomic) NSDictionary *cachedPlayerStates; // @synthesize cachedPlayerStates=_cachedPlayerStates;
@property(nonatomic) long long restorePausedStateBehavior; // @synthesize restorePausedStateBehavior=_restorePausedStateBehavior;
- (void).cxx_destruct;
- (void)restoreStateForURI:(id)arg1 player:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasCachedStateForURI:(id)arg1;
- (id)saveStateForPlayer:(id)arg1;

@end

