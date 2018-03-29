//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;

@interface SCFullscreenContextPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _topSpace;
    UIView *_destinationView;
    UIView *_sourceView;
}

@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithSourceView:(id)arg1 destinationView:(id)arg2 topSpace:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

