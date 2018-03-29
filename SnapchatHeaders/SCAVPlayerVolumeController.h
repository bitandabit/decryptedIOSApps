//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayer, SCQueuePerformer;

@interface SCAVPlayerVolumeController : NSObject
{
    SCQueuePerformer *_performer;
    _Bool _fadingOut;
    _Bool _fadingIn;
    AVPlayer *_player;
}

@property(nonatomic) __weak AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_fadeOut:(double)arg1 delay:(double)arg2;
- (void)_fadeIn:(double)arg1 delay:(double)arg2;
- (void)fadeVolumeOut:(double)arg1;
- (void)fadeVolumeIn:(double)arg1;
- (void)setVolume:(double)arg1;
- (id)init;

@end

