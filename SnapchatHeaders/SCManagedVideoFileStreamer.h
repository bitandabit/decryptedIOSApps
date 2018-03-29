//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVPlayerItemOutputPullDelegate-Protocol.h"
#import "SCManagedVideoDataSource-Protocol.h"

@class AVPlayer, AVPlayerItemVideoOutput, CADisplayLink, NSString, SCManagedVideoDataSourceListenerAnnouncer, SCQueuePerformer;
@protocol OS_dispatch_semaphore, SCManagedSampleBufferDisplayController, SCPerforming;

@interface SCManagedVideoFileStreamer : NSObject <AVPlayerItemOutputPullDelegate, SCManagedVideoDataSource>
{
    SCManagedVideoDataSourceListenerAnnouncer *_announcer;
    unsigned long long _devicePosition;
    CDUnknownBlockType _nextPixelBufferHandler;
    id _notificationToken;
    id <SCPerforming> _performer;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    CADisplayLink *_displayLink;
    AVPlayerItemVideoOutput *_videoOutput;
    AVPlayer *_player;
    _Bool _sampleBufferDisplayEnabled;
    id <SCManagedSampleBufferDisplayController> _sampleBufferDisplayController;
    _Bool _isStreaming;
    long long _videoOrientation;
}

@property(readonly, nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) _Bool isStreaming; // @synthesize isStreaming=_isStreaming;
- (void).cxx_destruct;
- (void)removePlayerObservers;
- (void)addDidPlayToEndTimeNotificationForPlayerItem:(id)arg1;
- (void)getNextPixelBufferWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureOutput;
- (struct opaqueCMSampleBuffer *)createSampleBufferFromPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2;
- (void)displayLinkCallback:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)setPortraitModePointOfInterest:(struct CGPoint)arg1;
- (void)commitConfiguration;
- (void)beginConfiguration;
- (void)setVideoStabilizationEnabledIfSupported:(_Bool)arg1;
- (void)removeAsOutput:(id)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (void)setDevicePosition:(unsigned long long)arg1;
- (void)setAsOutput:(id)arg1 devicePosition:(unsigned long long)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)pauseStreaming;
- (void)stopStreaming;
- (void)startStreaming;
- (void)waitUntilSampleBufferDisplayed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)getKeepLateFrames;
- (void)setKeepLateFrames:(_Bool)arg1;
- (void)setSampleBufferDisplayEnabled:(_Bool)arg1;
- (void)addSampleBufferDisplayController:(id)arg1;
- (id)initWithPlaybackForURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

