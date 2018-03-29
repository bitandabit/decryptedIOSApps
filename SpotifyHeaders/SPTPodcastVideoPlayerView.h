//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, UIView<SPTVideoSurface>;

@interface SPTPodcastVideoPlayerView : UIView
{
    _Bool _enableDarkShade;
    UIView<SPTVideoSurface> *_surface;
    id <SPTVideoSurfaceManager> _surfaceManager;
    CAGradientLayer *_gradient;
}

@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) id <SPTVideoSurfaceManager> surfaceManager; // @synthesize surfaceManager=_surfaceManager;
@property(nonatomic) _Bool enableDarkShade; // @synthesize enableDarkShade=_enableDarkShade;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *surface; // @synthesize surface=_surface;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (double)shadowOpacity;
- (void)enableGradient:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithSurfaceManager:(id)arg1;

@end

