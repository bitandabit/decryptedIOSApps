//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol BCOVPlaybackSessionPrivate;

@interface BCOVAnalyticsEngagementTimer : NSObject
{
    _Bool _ended;
    _Bool _paused;
    id <BCOVPlaybackSessionPrivate> _playbackSession;
}

@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isEnded) _Bool ended; // @synthesize ended=_ended;
@property(readonly, nonatomic) id <BCOVPlaybackSessionPrivate> playbackSession; // @synthesize playbackSession=_playbackSession;
- (void).cxx_destruct;
- (id)timer;
- (id)initWithPlaybackSession:(id)arg1;

@end

