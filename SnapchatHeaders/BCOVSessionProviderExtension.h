//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol BCOVPlaybackSessionPrivate;

@interface BCOVSessionProviderExtension : NSObject
{
    id <BCOVPlaybackSessionPrivate> _playbackSession;
}

@property(readonly, nonatomic) __weak id <BCOVPlaybackSessionPrivate> playbackSession; // @synthesize playbackSession=_playbackSession;
- (void).cxx_destruct;
- (id)initWithPlaybackSession:(id)arg1;

@end
