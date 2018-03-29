//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView<SPTVideoSurface>;

@protocol SPTVideoSurfaceManager <NSObject>
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) NSArray *attachedSurfaces;
@property(readonly, nonatomic, getter=isAnySurfaceAttached) _Bool anySurfaceAttached;
- (UIView<SPTVideoSurface> *)createSurfaceFullscreen;
- (UIView<SPTVideoSurface> *)createSurface;
@end

