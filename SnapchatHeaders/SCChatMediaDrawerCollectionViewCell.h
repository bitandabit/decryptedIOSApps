//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AVPlayer, FBKVOController, FLAnimatedImageView, SCChatMediaDrawerBaseMedia, SCPlayerView, SCUserSession, UIImageView, UIView;

@interface SCChatMediaDrawerCollectionViewCell : UICollectionViewCell
{
    FLAnimatedImageView *_thumbnailView;
    UIView *_selectWhiteOverlayView;
    UIImageView *_checkImageView;
    SCUserSession *_userSession;
    SCPlayerView *_videoView;
    AVPlayer *_player;
    FBKVOController *_videoObserveController;
    SCChatMediaDrawerBaseMedia *_media;
}

+ (id)cellSeletedBackgroundColor;
+ (id)cellDefaultBackgroundColor;
+ (id)highlightedBorderColor;
@property(retain, nonatomic) SCChatMediaDrawerBaseMedia *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (void)setThumbnailViewImageGenerating:(id)arg1;
- (double)animatedImagesTimeIntervalWithDuration:(double)arg1 frameCount:(long long)arg2;
- (void)_playVideoWithPlayerItem:(id)arg1;
- (void)setUpVideo;
- (void)pauseVideoIfNecessary;
- (void)playVideoIfNecessary;
- (void)resetPlayer;
- (void)playerItemDidReachEnd:(id)arg1;
- (id)videoView;
- (id)player;
- (void)applyDeselectedState;
- (void)applySelectedState;
- (void)animateSelected:(_Bool)arg1;
- (void)reloadThumbnail;
- (void)_handleSetMediaThumbnailFetchWithMedia:(id)arg1 imageGenerating:(id)arg2;
- (void)_logMediaHasChangedWithPreviousMedia:(id)arg1;
- (void)setUserSession:(id)arg1;
- (void)cleanVideoView;
- (void)cleanThumbnailView;
- (void)cleanCheckImageView;
- (void)resetContent;
- (void)prepareForReuse;
- (id)checkImageView;
- (void)dealloc;
- (void)initThumbnailView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
