//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface SCSnapStateBuilder : NSObject
{
    NSDictionary *_viewedTimestamps;
    NSDictionary *_screenshotState;
    NSDictionary *_screenCaptureShotState;
    NSDictionary *_screenCaptureRecordingState;
    NSDictionary *_replayState;
    NSString *_stackId;
    _Bool _isFirstSnapInStack;
    long long _playbackState;
    long long _replayAnimationState;
    _Bool _canBeReplayed;
    NSDate *_lastOpenedTimestamp;
}

+ (id)withSnapState:(id)arg1;
- (void).cxx_destruct;
- (id)setLastOpenedTimestamp:(id)arg1;
- (id)setCanBeReplayed:(_Bool)arg1;
- (id)setReplayAnimationState:(long long)arg1;
- (id)setPlaybackState:(long long)arg1;
- (id)setIsFirstSnapInStack:(_Bool)arg1;
- (id)setStackId:(id)arg1;
- (id)setReplayState:(id)arg1;
- (id)setScreenCaptureRecordingState:(id)arg1;
- (id)setScreenCaptureShotState:(id)arg1;
- (id)setScreenshotState:(id)arg1;
- (id)setViewedTimestamps:(id)arg1;
- (id)build;

@end

