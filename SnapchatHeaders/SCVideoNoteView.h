//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FLAnimatedImageView, NSString, UIColor, UIImageView;

@interface SCVideoNoteView : UIView
{
    FLAnimatedImageView *_coverAnimationView;
    UIImageView *_muteIconView;
    UIView *_muteIconContainerView;
    UIView *_videoView;
    double _frameTimeInterval;
    NSString *_mediaId;
    _Bool _isSender;
    unsigned long long _status;
    UIColor *_borderColor;
}

+ (id)defaultBorderColor;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)clearContents;
- (void)displayVideoView;
- (void)displayCoverAnimationView;
- (void)setPlayerLayer:(id)arg1;
- (void)setMediaId:(id)arg1;
- (id)muteIconContainerView;
- (id)muteIconView;
- (id)videoView;
- (id)coverAnimationView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

