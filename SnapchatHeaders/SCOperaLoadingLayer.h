//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCOperaPage, UIColor;

@interface SCOperaLoadingLayer : NSObject <SCOperaLayer>
{
    SCOperaPage *_page;
    long long _loadingState;
    UIColor *_backgroundColor;
    NSString *_backgroundImageKey;
    NSString *_subtext;
    NSString *_errorHeaderText;
    NSString *_errorSubText;
    NSString *_errorButtonText;
    UIColor *_textColor;
    double _fadeoutMs;
    double _spinnerOffsetY;
    double _loadingIndicatorDelayTime;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) double loadingIndicatorDelayTime; // @synthesize loadingIndicatorDelayTime=_loadingIndicatorDelayTime;
@property(readonly, nonatomic) double spinnerOffsetY; // @synthesize spinnerOffsetY=_spinnerOffsetY;
@property(readonly, nonatomic) double fadeoutMs; // @synthesize fadeoutMs=_fadeoutMs;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *errorButtonText; // @synthesize errorButtonText=_errorButtonText;
@property(readonly, copy, nonatomic) NSString *errorSubText; // @synthesize errorSubText=_errorSubText;
@property(readonly, copy, nonatomic) NSString *errorHeaderText; // @synthesize errorHeaderText=_errorHeaderText;
@property(readonly, copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(readonly, copy, nonatomic) NSString *backgroundImageKey; // @synthesize backgroundImageKey=_backgroundImageKey;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
