//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface SCGalleryEntryStoryThumbnailUpdateTimer : NSObject
{
    NSTimer *_timer;
    _Bool _shouldStartTimerOnForeground;
}

+ (id)sharedTimer;
- (void).cxx_destruct;
- (void)_timerDidFire:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)dealloc;
- (id)init;

@end

