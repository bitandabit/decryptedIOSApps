//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol SCSearchScrollViewDismissalGestureControllerDelegate;

@interface SCSearchScrollViewDismissalGestureController : NSObject <UIGestureRecognizerDelegate>
{
    double _targetOffsetY;
    id <SCSearchScrollViewDismissalGestureControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSearchScrollViewDismissalGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_finishAnimation:(id)arg1 didDismiss:(_Bool)arg2;
- (void)_applyTranslationForView:(id)arg1 translation:(struct CGPoint)arg2;
- (void)_resetOrDismissWithView:(id)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

