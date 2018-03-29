//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTV3SpeechActivityListener-Protocol.h"

@class CADisplayLink, NSString, SCTV3SpeechActivityListenerAnnouncer, UIColor;

@interface SCTV3WaveformView : UIView <SCTV3SpeechActivityListener>
{
    SCTV3SpeechActivityListenerAnnouncer *_speechActivityAnnouncer;
    NSString *_username;
    CADisplayLink *_displayLink;
    double _elapsedTime;
    double _baseAmplitude[10];
    double _currentAmplitude[10];
    double _targetAmplitude[10];
    double _lastTargetAmplitude;
    double _targetUpdatedTime;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)_cleanUpDisplayLink;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)_displayDidRefresh:(id)arg1;
- (void)_randomizeWaveformAmplitude:(double *)arg1 maxFactor:(double)arg2;
- (double)_randomFloatFrom:(double)arg1 to:(double)arg2;
- (double)_randomFloat;
- (void)onSpeechActivity:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setAnimating:(_Bool)arg1;
- (_Bool)animating;
- (void)updateTargetAmplitude:(double)arg1;
- (double)randomizeTargetAmplitude;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 color:(id)arg2 speechActivityAnnouncer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

