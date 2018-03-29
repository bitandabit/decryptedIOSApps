//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class NSString;

@interface GLUEPressedAnimatorStyle : NSObject <GLUEStyle>
{
    double _pressedScaleFactor;
    double _animationDuration;
    double _restoreAnimationDuration;
}

@property(nonatomic) double restoreAnimationDuration; // @synthesize restoreAnimationDuration=_restoreAnimationDuration;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double pressedScaleFactor; // @synthesize pressedScaleFactor=_pressedScaleFactor;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToPressedAnimatorStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

