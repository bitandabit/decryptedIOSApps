//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCContextPresenter, UIPanGestureRecognizer;

@protocol SCContextPresentationDriver <NSObject>
- (_Bool)contextPresenter:(SCContextPresenter *)arg1 shouldUseCustomAnimationForTransition:(unsigned long long)arg2;
- (_Bool)contextPresenter:(SCContextPresenter *)arg1 shouldTransitionInteractively:(unsigned long long)arg2;
- (_Bool)contextPresenter:(SCContextPresenter *)arg1 shouldAnimateTransition:(unsigned long long)arg2;
- (_Bool)contextPresenter:(SCContextPresenter *)arg1 shouldBeginTransition:(unsigned long long)arg2 panGesture:(UIPanGestureRecognizer *)arg3;
@end

