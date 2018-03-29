//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCStrokeDrawer-Protocol.h"

@class UIColor;
@protocol SCStrokeDrawerDelegate;

@interface SCSolidStrokeDrawer : NSObject <SCStrokeDrawer>
{
    struct CGPath *_path;
    UIColor *_color;
    double _lineWidth;
    id <SCStrokeDrawerDelegate> delegate;
}

@property(nonatomic) __weak id <SCStrokeDrawerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_addQuadCurveWithPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2 point3:(struct CGPoint)arg3 isFirstThreePoints:(_Bool)arg4;
- (_Bool)isPointEligibleForAdding:(id)arg1 previousPoint:(id)arg2 scale:(double)arg3;
- (struct CGPoint)scaleRange;
- (double)clampedScale:(double)arg1;
- (void)drawRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)redrawPoints:(id)arg1;
- (void)drawPoint:(id)arg1 pointSet:(id)arg2;
- (void)clearDrawing;
- (void)dealloc;
- (void)updateDrawerMetadata:(id)arg1 emoji:(id)arg2 contentSize:(double)arg3;
- (id)init;

@end

