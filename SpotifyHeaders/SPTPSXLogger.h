//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTViewLogger;

@interface SPTPSXLogger : NSObject
{
    _Bool _viewLoadLogged;
    NSString *_setURIString;
    id <SPTLogCenterProtocol> _logCenter;
    SPTViewLogger *_viewLogger;
}

@property(nonatomic) _Bool viewLoadLogged; // @synthesize viewLoadLogged=_viewLoadLogged;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, copy, nonatomic) NSString *setURIString; // @synthesize setURIString=_setURIString;
- (void).cxx_destruct;
- (void)logViewDataDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (double)timeIntervalSinceEpoch;
- (void)logOfflineButtonInteractionWithnewOfflineStatus:(_Bool)arg1;
- (void)logFollowButtonInteractionWithNewFollowStatus:(_Bool)arg1;
- (void)logContextMenuInteraction;
- (void)logShufflePlayInteraction;
- (void)logTrackContextMenuInteractionForTrackIndex:(long long)arg1;
- (void)logTrackInteractionForTrackURI:(id)arg1 index:(long long)arg2;
- (id)initWithLogCenter:(id)arg1 setURI:(id)arg2;

@end

