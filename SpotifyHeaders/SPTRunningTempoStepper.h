//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SPTRunningTempoStepper.h"

@class NSDate, NSString, NSTimer, SPTTheme, UIButton, UILabel;

@interface SPTRunningTempoStepper : UIControl <SPTRunningTempoStepper>
{
    _Bool _detectionModeEnabled;
    _Bool _manualSetupStyleEnabled;
    _Bool _incrementing;
    id <SPTRunningTempoStepperDelegate> _delegate;
    unsigned long long _tempo;
    double _triggerDelay;
    unsigned long long _minimumValue;
    unsigned long long _maximumValue;
    double _repeatStartDelay;
    double _repeatValueChangeInterval;
    unsigned long long _stepValue;
    SPTTheme *_runningTheme;
    UIButton *_decrementButton;
    UIButton *_incrementButton;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    NSTimer *_updateTimer;
    NSTimer *_repeatStartTimer;
    NSTimer *_repeatValueChangeTimer;
    NSDate *_arrowTapTime;
}

@property(retain, nonatomic) NSDate *arrowTapTime; // @synthesize arrowTapTime=_arrowTapTime;
@property(nonatomic) _Bool incrementing; // @synthesize incrementing=_incrementing;
@property(retain, nonatomic) NSTimer *repeatValueChangeTimer; // @synthesize repeatValueChangeTimer=_repeatValueChangeTimer;
@property(retain, nonatomic) NSTimer *repeatStartTimer; // @synthesize repeatStartTimer=_repeatStartTimer;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *incrementButton; // @synthesize incrementButton=_incrementButton;
@property(retain, nonatomic) UIButton *decrementButton; // @synthesize decrementButton=_decrementButton;
@property(retain, nonatomic) SPTTheme *runningTheme; // @synthesize runningTheme=_runningTheme;
@property(nonatomic) unsigned long long stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) double repeatValueChangeInterval; // @synthesize repeatValueChangeInterval=_repeatValueChangeInterval;
@property(nonatomic) double repeatStartDelay; // @synthesize repeatStartDelay=_repeatStartDelay;
@property(nonatomic) _Bool manualSetupStyleEnabled; // @synthesize manualSetupStyleEnabled=_manualSetupStyleEnabled;
@property(nonatomic) _Bool detectionModeEnabled; // @synthesize detectionModeEnabled=_detectionModeEnabled;
@property(nonatomic) unsigned long long maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) unsigned long long minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double triggerDelay; // @synthesize triggerDelay=_triggerDelay;
@property(nonatomic) unsigned long long tempo; // @synthesize tempo=_tempo;
@property(nonatomic) __weak id <SPTRunningTempoStepperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (void)updateButtonState;
- (void)repeatValueChangeTimerFireUpdate:(id)arg1;
- (void)repeatStartTimerFireUpdate:(id)arg1;
- (void)timerFireUpdate:(id)arg1;
- (void)setupRepeatValueChangeTimerWithOldValue:(unsigned long long)arg1;
- (void)setupRepeatStartTimerWithOldValue:(unsigned long long)arg1;
- (void)setupUpdateTimerWithOldValue:(unsigned long long)arg1;
- (void)finishDecrementingValue;
- (void)startDecrementingValue;
- (void)finishIncrementingValue;
- (void)startIncrementingValue;
- (void)invalidateRepeatTimers;
- (void)updateConstraints;
- (_Bool)requiresConstraintBasedLayout;
- (struct CGSize)intrinsicContentSize;
- (void)setupValueLabel;
- (void)setupTitleLabel;
- (void)setupIncrementButton;
- (void)setupDecrementButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 value:(unsigned long long)arg2 minimumValue:(unsigned long long)arg3 maximumValue:(unsigned long long)arg4 stepValue:(unsigned long long)arg5 triggerDelay:(double)arg6 repeatStartDelay:(double)arg7 repeatValueChangeInterval:(double)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
