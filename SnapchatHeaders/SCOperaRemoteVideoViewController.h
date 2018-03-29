//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BCOVPlaybackControllerDelegate-Protocol.h"
#import "SCMotionManagerListener-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaPageableViewController-Protocol.h"
#import "SCOperaRemoteVideoPropertiesListener-Protocol.h"
#import "SCOperaRemoteVideoProxyListener-Protocol.h"
#import "SCOperaRemoteVideoStateDelegate-Protocol.h"
#import "SCOperaVideoControlsViewDataSource-Protocol.h"
#import "SCOperaVideoControlsViewDelegate-Protocol.h"

@class AVPlayerItemVideoOutput, AVPlayerLayer, CALayer, FBKVOController, NSArray, NSDictionary, NSMutableDictionary, NSObject, NSString, NSTimer, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaRemoteVideoSessionConsumer, SCOperaRemoteVideoState, SCOperaRemoteVideoView, SCStopwatch, UIColor;
@protocol BCOVPlaybackController, SCOperaImageProvider, SCOperaPageableViewControllerDelegate, SCOperaRemoteVideoControllerDelegate;

@interface SCOperaRemoteVideoViewController : UIViewController <SCMotionManagerListener, BCOVPlaybackControllerDelegate, SCOperaVideoControlsViewDelegate, SCOperaRemoteVideoStateDelegate, SCOperaVideoControlsViewDataSource, SCOperaRemoteVideoPropertiesListener, SCOperaRemoteVideoProxyListener, SCOperaPageableViewController, SCOperaLayerViewControllerMediaContainer>
{
    SCOperaRemoteVideoView *_view;
    AVPlayerItemVideoOutput *_videoOutput;
    _Bool _videoHasPlayed;
    _Bool _captionIsInitialized;
    _Bool _shouldShowCaption;
    _Bool _videoHasCaptions;
    CALayer *_subtitleLayer;
    _Bool _ignoreUpdateToSubtitleVideoSize;
    _Bool _isFullscreen;
    NSMutableDictionary *_videoProgress;
    SCStopwatch *_mediaDisplayedTime;
    _Bool _wasBeingPresented;
    _Bool _shouldHideControlsWhilePaused;
    SCOperaEventListenerAnnouncer *_announcer;
    NSDictionary *_context;
    SCOperaConfiguration *_configuration;
    _Bool _isInline;
    NSString *_firstFrameImageKey;
    UIColor *_primaryColor;
    id <SCOperaImageProvider> _imageProvider;
    _Bool _videoRotationEnabled;
    _Bool _isListeningForMotionUpdates;
    double _minRollDegree;
    double _maxRollDegree;
    double _rotationVideoScale;
    _Bool _showActionMenuButtonEnabled;
    NSString *_bufferingActivityIdentifier;
    _Bool _shouldAutoPlayWhenReady;
    _Bool _isReady;
    _Bool _isSeeking;
    id <SCOperaPageableViewControllerDelegate> _pageableViewControllerDelegate;
    id <SCOperaRemoteVideoControllerDelegate> _delegate;
    NSString *_videoID;
    NSArray *_bcovVideos;
    AVPlayerLayer *_playerLayer;
    SCOperaRemoteVideoSessionConsumer *_sessionConsumer;
    NSTimer *_controlsFadeTimer;
    long long _virtualOrientation;
    SCOperaRemoteVideoState *_state;
    FBKVOController *_observeController;
    NSObject<BCOVPlaybackController> *_bcovController;
    NSString *_deviceOrientationManagerToken;
}

+ (id)remoteVideoViewControllerWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 isInline:(_Bool)arg3;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(copy, nonatomic) NSString *deviceOrientationManagerToken; // @synthesize deviceOrientationManagerToken=_deviceOrientationManagerToken;
@property(retain, nonatomic) NSObject<BCOVPlaybackController> *bcovController; // @synthesize bcovController=_bcovController;
@property(retain, nonatomic) FBKVOController *observeController; // @synthesize observeController=_observeController;
@property(retain, nonatomic) SCOperaRemoteVideoState *state; // @synthesize state=_state;
@property(nonatomic) long long virtualOrientation; // @synthesize virtualOrientation=_virtualOrientation;
@property(nonatomic) _Bool shouldAutoPlayWhenReady; // @synthesize shouldAutoPlayWhenReady=_shouldAutoPlayWhenReady;
@property(retain, nonatomic) NSTimer *controlsFadeTimer; // @synthesize controlsFadeTimer=_controlsFadeTimer;
@property(retain, nonatomic) SCOperaRemoteVideoSessionConsumer *sessionConsumer; // @synthesize sessionConsumer=_sessionConsumer;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) NSArray *bcovVideos; // @synthesize bcovVideos=_bcovVideos;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(nonatomic) __weak id <SCOperaRemoteVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCOperaPageableViewControllerDelegate> pageableViewControllerDelegate; // @synthesize pageableViewControllerDelegate=_pageableViewControllerDelegate;
- (void).cxx_destruct;
- (_Bool)isOverlay;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)_updateRollDegreeWithCurrentRotation:(double)arg1;
- (void)_updateLayerViewTransformWithRotation:(double)arg1;
- (void)didUpdateRotation:(double)arg1 translation:(struct CGVector)arg2;
- (void)stopListeningForMotionEvent;
- (void)startListeningForMotionEvent;
- (double)totalVideoDurationSeconds;
- (long long)numberOfBytesTransferredToBCOVPlaybackController;
- (struct CGSize)videoSize;
- (void)_sendEventBrightcoveError:(id)arg1 AVFoundationError:(id)arg2 URI:(id)arg3;
- (void)_sendEventDidChangeConfiguration;
- (void)showActivityIndicator:(_Bool)arg1;
- (void)setProgress:(double)arg1 forIndex:(unsigned long long)arg2;
- (void)seekToTime:(double)arg1 tolerance:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)videoControlsViewDidPressShowActionMenuButton:(id)arg1;
- (void)videoControlsView:(id)arg1 didSeekToTime:(double)arg2;
- (void)videoControlsViewDidPressExit:(id)arg1;
- (void)videoControlsView:(id)arg1 didEndSeekingWithPlayButtonToggled:(_Bool)arg2;
- (void)videoControlsViewDidBeginSeeking:(id)arg1;
- (void)videoControlsView:(id)arg1 didTogglePlay:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleRotateLeft:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleCaption:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleVolume:(_Bool)arg2;
- (void)playerItemLikelyToKeepUp:(id)arg1;
- (void)playerItemBufferBecameEmpty:(id)arg1;
- (void)_addPlaybackBufferObserverForItem:(id)arg1;
- (void)currentItemDidChange:(id)arg1;
- (void)playbackController:(id)arg1 didAdvanceToPlaybackSession:(id)arg2;
- (void)playbackController:(id)arg1 playbackSession:(id)arg2 didProgressTo:(double)arg3;
- (void)playbackController:(id)arg1 playbackSession:(id)arg2 didReceiveLifecycleEvent:(id)arg3;
- (void)updateSubtitleLayerScreenSize;
- (void)subtitleLayerVideoSizeChanged;
- (void)updateCaptionStyle;
- (void)toggleCaption:(_Bool)arg1;
- (void)_updateCaptionBasedOnCurrentDisplayStrategy;
- (void)terminateVideo;
- (void)playVideo:(_Bool)arg1;
- (void)startBufferingVideo;
- (void)state:(id)arg1 didChangeTag:(long long)arg2;
- (void)didFetchVideoPropertiesWithSuccess:(_Bool)arg1;
- (void)setBcovVideosFromProperties:(id)arg1;
- (void)configureRemoteVideo;
- (void)remoteVideoProxyDidAttemptStartup;
- (void)invalidateControlsFadeTimerAndShowControls;
- (void)setupControlsFadeTimer;
- (void)fadeOutControls;
- (void)fadeInControls;
- (void)didTap;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)rotateVideoWithTransform:(struct CGAffineTransform)arg1;
- (void)setTargetOrientation:(long long)arg1 andRotateView:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)rotateVideoBasedOnOrientation;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (id)videoParameters;
- (void)setResumeVideoPosition:(double)arg1;
- (void)didSetFullscreen:(_Bool)arg1;
- (void)updateWithScreenshot:(id)arg1;
- (id)player;
- (id)_imageSnapshotFromPlayer;
- (id)imageSnapshot;
- (id)snapshotFromPlayer;
- (void)_removeVideoOut:(id)arg1;
- (void)_addVideoOutput;
- (_Bool)isShowingVideoFrame;
- (_Bool)isPaused;
- (void)didUpdateBottomPageViewProperties:(id)arg1;
- (_Bool)canHandleRoundCorner;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1;
- (void)pauseVideo;
- (void)teardown;
- (void)loadVideo;
- (void)setVolume:(double)arg1;
- (void)stop;
- (void)start;
- (void)resume;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (_Bool)isPausedForAttachment;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)pause;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyAppear;
- (void)cancelViewWillFullyAppearAtTime;
- (void)viewWillFullyAppearAtTime:(CDStruct_1b6d18a9)arg1;
- (void)viewWillFullyAppear;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)updateWithVideoId:(id)arg1 eventContext:(id)arg2 firstFrameImageKey:(id)arg3 primaryColor:(id)arg4 videoRotationEnabled:(_Bool)arg5 showActionMenuButtonEnabled:(_Bool)arg6 imageProvider:(id)arg7;
- (id)initWithVideoId:(id)arg1 configuration:(id)arg2 eventAnnouncer:(id)arg3 eventContext:(id)arg4 isInline:(_Bool)arg5 firstFrameImageKey:(id)arg6 primaryColor:(id)arg7 bcovController:(id)arg8 state:(id)arg9 observeController:(id)arg10 imageProvider:(id)arg11;
- (id)initWithVideoId:(id)arg1 configuration:(id)arg2 eventAnnouncer:(id)arg3 eventContext:(id)arg4 isInline:(_Bool)arg5 firstFrameImageKey:(id)arg6 primaryColor:(id)arg7 imageProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

