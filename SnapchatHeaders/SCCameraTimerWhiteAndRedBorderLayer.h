//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface SCCameraTimerWhiteAndRedBorderLayer : CAShapeLayer
{
    CAShapeLayer *_redBorderLayer;
    struct CGSize _previousBoundsSize;
}

@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(readonly, nonatomic) CAShapeLayer *redBorderLayer; // @synthesize redBorderLayer=_redBorderLayer;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)init;

@end

