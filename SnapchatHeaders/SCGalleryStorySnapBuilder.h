//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSDate, NSString, NSURL, SOJUGallerySnapOverlay, SOJUStoryFrame;

@interface SCGalleryStorySnapBuilder : NSObject
{
    unsigned long long _mediaType;
    unsigned long long _source;
    NSURL *_originalMediaURL;
    NSURL *_renderedOverlayURL;
    double _duration;
    NSDate *_createTimeUtc;
    long long _orientation;
    SOJUGallerySnapOverlay *_sojuOverlay;
    SOJUStoryFrame *_framing;
    CLLocation *_location;
    _Bool _infiniteDuration;
    NSString *_storySnapId;
    NSString *_attributionString;
    NSDate *_captureTimeUtc;
    long long _mediaFormat;
}

+ (id)withGalleryStorySnap:(id)arg1;
- (void).cxx_destruct;
- (id)setMediaFormat:(long long)arg1;
- (id)setCaptureTimeUtc:(id)arg1;
- (id)setAttributionString:(id)arg1;
- (id)setStorySnapId:(id)arg1;
- (id)setInfiniteDuration:(_Bool)arg1;
- (id)setLocation:(id)arg1;
- (id)setFraming:(id)arg1;
- (id)setSojuOverlay:(id)arg1;
- (id)setOrientation:(long long)arg1;
- (id)setCreateTimeUtc:(id)arg1;
- (id)setDuration:(double)arg1;
- (id)setRenderedOverlayURL:(id)arg1;
- (id)setOriginalMediaURL:(id)arg1;
- (id)setSource:(unsigned long long)arg1;
- (id)setMediaType:(unsigned long long)arg1;
- (id)build;

@end
