//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTNowPlayingBarContentProvider.h"

@class NSString, SPTCanvasBackendService, SPTCanvasNowPlayingBarLeftAccessory, SPTPlayerTrack;

@interface SPTCanvasNowPlayingBarContentProvider : NSObject <SPTImageLoaderDelegate, SPTNowPlayingBarContentProvider>
{
    id <SPTCanvasTrackChecker> _trackChecker;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTCanvasBackendService *_backendService;
    SPTPlayerTrack *_track;
    SPTCanvasNowPlayingBarLeftAccessory *_accessoryView;
    id <SPTImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTCanvasNowPlayingBarLeftAccessory *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) SPTCanvasBackendService *backendService; // @synthesize backendService=_backendService;
@property(retain, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) id <SPTCanvasTrackChecker> trackChecker; // @synthesize trackChecker=_trackChecker;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)updateWithPlayerTrack:(id)arg1;
- (_Bool)shouldRenderMainContentView;
- (_Bool)shouldRenderAlternateLeftAccessoryView;
- (id)provideMainContentView;
- (id)provideLeftAccessoryView;
- (id)layoutConstraintsForNowPlayingBarView:(id)arg1 contentView:(id)arg2 playButton:(id)arg3;
- (id)initWithCanvasTrackChecker:(id)arg1 nowPlayingManager:(id)arg2 backendService:(id)arg3 imageLoaderFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

