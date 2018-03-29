//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLUEStatefulView.h"

@class GLUEImageView, SPTFreeTierCollectionOverlayImageViewStateStyle, UIImageView, UIView;

@interface SPTFreeTierCollectionOverlayImageView : GLUEStatefulView
{
    GLUEImageView *_imageView;
    UIView *_overlayView;
    UIImageView *_iconImageView;
    SPTFreeTierCollectionOverlayImageViewStateStyle *_currentStyle;
    struct CGSize _iconSize;
}

@property(retain, nonatomic) SPTFreeTierCollectionOverlayImageViewStateStyle *currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)applyStateStyle:(id)arg1;
- (void)setOverlayIcon:(long long)arg1;
- (void)addViewConstraints;
- (void)setupIconImageView;
- (void)setupOverlayView;
- (void)setupImageView;
- (id)init;

@end
