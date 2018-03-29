//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SPTCanvasNowPlayingBarLeftAccessory, SPTTheme, UILabel;

@interface SPTCanvasAttributionView : UIView
{
    SPTCanvasNowPlayingBarLeftAccessory *_imageAccessory;
    UILabel *_captionLabel;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) SPTCanvasNowPlayingBarLeftAccessory *imageAccessory; // @synthesize imageAccessory=_imageAccessory;
- (void).cxx_destruct;
- (void)updateCaptionWithName:(id)arg1;
- (void)updateAvatar:(id)arg1 artistName:(id)arg2;
- (void)setUp;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

