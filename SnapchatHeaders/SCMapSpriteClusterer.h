//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;
@protocol SCMapSpriteClustererDelegate;

@interface SCMapSpriteClusterer : NSObject
{
    NSDictionary *_zoomCache;
    _Bool _deterministic;
    id <SCMapSpriteClustererDelegate> _delegate;
    double _zoomLevel;
    NSSet *_sprites;
    CDUnknownBlockType _widthForSpriteAtZoom;
    CDUnknownBlockType _zoomLevelWhereSlippyDistanceMeets;
    NSSet *_spriteClusters;
}

@property(retain, nonatomic) NSSet *spriteClusters; // @synthesize spriteClusters=_spriteClusters;
@property(copy, nonatomic) CDUnknownBlockType zoomLevelWhereSlippyDistanceMeets; // @synthesize zoomLevelWhereSlippyDistanceMeets=_zoomLevelWhereSlippyDistanceMeets;
@property(copy, nonatomic) CDUnknownBlockType widthForSpriteAtZoom; // @synthesize widthForSpriteAtZoom=_widthForSpriteAtZoom;
@property(retain, nonatomic) NSSet *sprites; // @synthesize sprites=_sprites;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) __weak id <SCMapSpriteClustererDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_recursiveSpriteClustersFromSprites:(id)arg1 atZoomLevel:(double)arg2;
- (id)spriteClustersFromSprites:(id)arg1 atZoomLevel:(double)arg2;
- (id)clusterForSprite:(id)arg1 atZoomLevel:(double)arg2;
- (id)clusterForSprite:(id)arg1;
- (void)updateSprites:(id)arg1 zoomLevel:(double)arg2 forced:(_Bool)arg3;
- (void)updateSprites:(id)arg1 forced:(_Bool)arg2;
- (void)updateZoomLevel:(double)arg1 forced:(_Bool)arg2;
- (void)updateSprites:(id)arg1 zoomLevel:(double)arg2;
- (void)updateSprites:(id)arg1;
- (void)updateZoomLevel:(double)arg1;
- (id)initWithDeterministicClustering:(_Bool)arg1;

@end

