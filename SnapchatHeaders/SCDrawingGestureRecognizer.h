//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface SCDrawingGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _initialPoint;
    double _initialTimestamp;
    long long _numberOfTouches;
    struct CGPoint _lastPoint;
    double _currentTouchTimestamp;
}

- (double)initialTimestamp;
- (struct CGPoint)initialPoint;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double currentTouchTimestamp;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

