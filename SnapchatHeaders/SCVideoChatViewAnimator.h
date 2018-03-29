//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCVideoChatFramingAnimator-Protocol.h"

@class NSMutableArray, NSString, UIView;

@interface SCVideoChatViewAnimator : NSObject <SCVideoChatFramingAnimator>
{
    int _startFrame;
    int _stopFrame;
    struct CGRect *_animatedRect;
    UIView *_view;
    NSMutableArray *_animators;
}

@property(retain, nonatomic) NSMutableArray *animators; // @synthesize animators=_animators;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) int stopFrame; // @synthesize stopFrame=_stopFrame;
@property(nonatomic) int startFrame; // @synthesize startFrame=_startFrame;
@property(nonatomic) struct CGRect *animatedRect; // @synthesize animatedRect=_animatedRect;
- (void).cxx_destruct;
- (void)animateForFrame:(int)arg1;
- (id)addAlphaAnimator:(double)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4;
- (id)addAlphaAnimator:(double)arg1 fromFrame:(int)arg2 toFrame:(int)arg3 using:(id)arg4;
- (id)addAnchorAtCenterFrom:(double)arg1 to:(double)arg2;
- (id)addAnchor:(struct CGVector)arg1 from:(double)arg2 to:(double)arg3;
- (id)addAnchor:(struct CGVector)arg1 fromFrame:(int)arg2 toFrame:(int)arg3;
- (id)addCenterYAnimator:(double)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4;
- (id)addCenterXAnimator:(double)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4;
- (id)addCenterAnimator:(struct CGPoint)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4;
- (id)addCenterAnimator:(struct CGPoint)arg1 fromFrame:(int)arg2 toFrame:(int)arg3 using:(id)arg4;
- (id)addPositionYAnimator:(double)arg1 andAnchor:(double)arg2 from:(double)arg3 to:(double)arg4 using:(id)arg5;
- (id)addPositionXAnimator:(double)arg1 andAnchor:(double)arg2 from:(double)arg3 to:(double)arg4 using:(id)arg5;
- (id)addPositionAnimator:(struct CGPoint)arg1 andAnchor:(struct CGVector)arg2 from:(double)arg3 to:(double)arg4 using:(id)arg5;
- (id)addPositionAnimator:(struct CGPoint)arg1 andAnchor:(struct CGVector)arg2 fromFrame:(int)arg3 toFrame:(int)arg4 using:(id)arg5;
- (id)addSizeAnimator:(struct CGSize)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4;
- (id)addSizeAnimator:(struct CGSize)arg1 fromFrame:(int)arg2 toFrame:(int)arg3 using:(id)arg4;
- (id)addRectAnimatorWithUpdater:(id)arg1 from:(int)arg2 to:(int)arg3 using:(id)arg4;
- (void)addAnimator:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
