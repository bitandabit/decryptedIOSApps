//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSearchEventAnnouncing-Protocol.h"

@class AVPlayerLooper, AVQueuePlayer, FBKVOController, NSString, SCSearchEventListenerAnnouncer, SCSearchNetworkVideo, UIImageView;
@protocol SCSearchItemDownloaderHandling, SCSearchItemDownloading;

@interface SCSearchNetworkVideoView : UIView <SCSearchEventAnnouncing>
{
    AVQueuePlayer *_queuePlayer;
    AVPlayerLooper *_looper;
    id <SCSearchItemDownloaderHandling> _downloadHandler;
    UIImageView *_overlayView;
    FBKVOController *_looperIterationsObserver;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    _Bool _shouldMute;
    _Bool _shouldAutoplay;
    _Bool _isPlaying;
    id <SCSearchItemDownloading> _videoDownloader;
    SCSearchNetworkVideo *_networkVideo;
    double _maxLoopDurationSeconds;
    NSString *_identifierForDelegate;
}

+ (Class)layerClass;
+ (id)announcerIdentifier;
@property(copy, nonatomic) NSString *identifierForDelegate; // @synthesize identifierForDelegate=_identifierForDelegate;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double maxLoopDurationSeconds; // @synthesize maxLoopDurationSeconds=_maxLoopDurationSeconds;
@property(retain, nonatomic) SCSearchNetworkVideo *networkVideo; // @synthesize networkVideo=_networkVideo;
@property(retain, nonatomic) id <SCSearchItemDownloading> videoDownloader; // @synthesize videoDownloader=_videoDownloader;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic) _Bool shouldMute; // @synthesize shouldMute=_shouldMute;
- (void).cxx_destruct;
- (void)_announceDownloadEvent:(id)arg1 extraData:(id)arg2;
- (void)_announceVideoPlayEvent:(id)arg1 extraData:(id)arg2;
- (void)_setupPlayerWithItem:(id)arg1 overlay:(id)arg2 requestedNetworkVideo:(id)arg3;
- (void)_didLoadRequestedNetworkVideo:(id)arg1 withResult:(id)arg2;
- (void)_loadNetworkVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showOverlayIfNeeded;
- (void)_setOverlay:(id)arg1;
- (id)downLoaderHandler;
- (void)reset;
- (void)pause;
- (void)play;
- (void)setVideoGravity:(id)arg1;
- (void)setNetworkVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

