//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;
@protocol SCOperaImageProvider, SCOperaVideoAssetProvider;

@interface SCOperaPage : NSObject
{
    _Bool _autoAdvanceEnabled;
    _Bool _skipDisabled;
    _Bool _enableSwipeRightWhenSkipDisabled;
    _Bool _longPressEnabled;
    _Bool _disablePauseOnAudioInterrupt;
    _Bool _pageLevelZoomEnabled;
    _Bool _pauseWhileOpeningAttachment;
    NSString *__id;
    NSDictionary *_properties;
    NSArray *_layers;
    long long _loadingState;
    double _autoAdvanceTimeSec;
    double _skipDisabledDuration;
    long long _preloadDistance;
    NSString *_accessibilityLabel;
    NSArray *_floatingLayers;
    NSSet *_disabledFloatingLayerTypes;
    NSString *_criticalModeContext;
    id <SCOperaImageProvider> _imageProvider;
    id <SCOperaVideoAssetProvider> _videoAssetProvider;
}

+ (id)pageWithProperties:(id)arg1;
@property(readonly, nonatomic) id <SCOperaVideoAssetProvider> videoAssetProvider; // @synthesize videoAssetProvider=_videoAssetProvider;
@property(readonly, nonatomic) id <SCOperaImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) _Bool pauseWhileOpeningAttachment; // @synthesize pauseWhileOpeningAttachment=_pauseWhileOpeningAttachment;
@property(readonly, copy, nonatomic) NSString *criticalModeContext; // @synthesize criticalModeContext=_criticalModeContext;
@property(readonly, copy, nonatomic) NSSet *disabledFloatingLayerTypes; // @synthesize disabledFloatingLayerTypes=_disabledFloatingLayerTypes;
@property(readonly, copy, nonatomic) NSArray *floatingLayers; // @synthesize floatingLayers=_floatingLayers;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) long long preloadDistance; // @synthesize preloadDistance=_preloadDistance;
@property(readonly, nonatomic) _Bool pageLevelZoomEnabled; // @synthesize pageLevelZoomEnabled=_pageLevelZoomEnabled;
@property(readonly, nonatomic) _Bool disablePauseOnAudioInterrupt; // @synthesize disablePauseOnAudioInterrupt=_disablePauseOnAudioInterrupt;
@property(readonly, nonatomic) _Bool longPressEnabled; // @synthesize longPressEnabled=_longPressEnabled;
@property(readonly, nonatomic) _Bool enableSwipeRightWhenSkipDisabled; // @synthesize enableSwipeRightWhenSkipDisabled=_enableSwipeRightWhenSkipDisabled;
@property(readonly, nonatomic) double skipDisabledDuration; // @synthesize skipDisabledDuration=_skipDisabledDuration;
@property(readonly, nonatomic) _Bool skipDisabled; // @synthesize skipDisabled=_skipDisabled;
@property(readonly, nonatomic) double autoAdvanceTimeSec; // @synthesize autoAdvanceTimeSec=_autoAdvanceTimeSec;
@property(readonly, nonatomic) _Bool autoAdvanceEnabled; // @synthesize autoAdvanceEnabled=_autoAdvanceEnabled;
@property(readonly, nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (id)_disabledFloatingLayerTypesWithProperties:(id)arg1;
- (id)_setupLayers:(id)arg1;
- (void)_updateBasedOnCurrentProperties;
- (id)initWithProperties:(id)arg1;

@end

