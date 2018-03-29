//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCTV3Dimensions;

@interface SCTV3FullscreenDragStage : NSObject
{
    struct CGRect _initialRect;
    double _initialRadius;
    SCTV3Dimensions *_width;
    SCTV3Dimensions *_height;
    SCTV3Dimensions *_x;
    SCTV3Dimensions *_y;
    SCTV3Dimensions *_radius;
}

- (void).cxx_destruct;
- (struct CGSize)sizeForNormalizedProgress:(double)arg1;
- (struct CGPoint)coordinatesForNormalizedProgress:(double)arg1;
- (double)radiusForNormalizedProgress:(double)arg1;
- (void)setTargetRadius:(double)arg1;
- (void)setTargetCoordinates:(struct CGPoint)arg1;
- (void)setTargetSize:(struct CGSize)arg1;
- (double)targetRadius;
- (struct CGRect)targetRect;
- (id)initWithRect:(struct CGRect)arg1 radius:(double)arg2;

@end
