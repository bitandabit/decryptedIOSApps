//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCTV3MediaViewMediaChangeListenerAnnouncer, UIColor;
@protocol SCTV3MediaViewDelegate;

@interface SCTV3MediaView : UIView
{
    id <SCTV3MediaViewDelegate> _delegate;
    UIView *_mediaSubview;
    _Bool _fullscreen;
    unsigned long long _media;
    SCTV3MediaViewMediaChangeListenerAnnouncer *_mediaChangeAnnouncer;
}

@property(readonly, nonatomic) SCTV3MediaViewMediaChangeListenerAnnouncer *mediaChangeAnnouncer; // @synthesize mediaChangeAnnouncer=_mediaChangeAnnouncer;
@property(nonatomic) unsigned long long media; // @synthesize media=_media;
- (void).cxx_destruct;
- (void)_attachView:(id)arg1;
- (void)_toggleExistingMediaSubview:(id)arg1;
- (void)_animateFullscreenEntering:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isFullscreen;
- (void)toggleFullscreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIColor *borderColor;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

@end

