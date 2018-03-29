//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@interface HUBComponentGestureRecognizer : UIGestureRecognizer
{
    id <HUBGestureRecognizerSynchronizing> _synchronizer;
}

@property(readonly, nonatomic) id <HUBGestureRecognizerSynchronizing> synchronizer; // @synthesize synchronizer=_synchronizer;
- (void).cxx_destruct;
- (_Bool)isHandlingTouch;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cancel;
- (void)finishWithState:(long long)arg1;
- (void)beginIfPossible;
- (void)begin;
- (id)initWithSynchronizer:(id)arg1;

@end

