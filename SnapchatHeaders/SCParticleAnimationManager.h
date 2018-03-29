//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CAEmitterLayer, CALayer, UIColor, UIImage, UIImageView, UIView;

@interface SCParticleAnimationManager : NSObject
{
    _Bool _maskIsEmpty;
    _Bool _isAnimating;
    int _blurWidth;
    UIView *_view;
    UIImage *_maskImage;
    UIImageView *_imageView;
    UIColor *_color;
    UIImage *_texture;
    CALayer *_maskLayer;
    CAEmitterLayer *_emitter;
    struct CGRect _boundingRect;
}

@property(nonatomic) int blurWidth; // @synthesize blurWidth=_blurWidth;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool maskIsEmpty; // @synthesize maskIsEmpty=_maskIsEmpty;
@property(nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(retain, nonatomic) CAEmitterLayer *emitter; // @synthesize emitter=_emitter;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImage *texture; // @synthesize texture=_texture;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_updateEmitterParameters;
- (id)_genEmitterLayer;
- (void)stopAnimation;
- (void)startAnimation;
- (CDStruct_37f6246c)_animationMaskFromMaskImage:(id)arg1;
- (id)_alphaMaskFromMaskImage:(id)arg1;
- (void)updateMaskImage:(id)arg1 color:(id)arg2 texture:(id)arg3;
- (id)init;

@end

