//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCAdInteractionProtocol <NSObject>
- (void)resetForSwipeBackTracking;
- (void)adLongPressedOnTopSnap:(_Bool)arg1;
- (void)unobstructedOnTopSnap:(_Bool)arg1 audibleOn:(_Bool)arg2;
- (void)obstructedOnTopSnap:(_Bool)arg1 audibleOn:(_Bool)arg2;
- (void)onAudibilityChange:(_Bool)arg1;
- (void)swipedFromTopSnap:(_Bool)arg1 exitEvent:(NSString *)arg2 audibleOn:(_Bool)arg3;
- (void)adSnapHideOnTopSnap:(_Bool)arg1 skipEvent:(NSString *)arg2;
- (void)adHideWithSkipEvent:(NSString *)arg1;
- (void)adShowOnTopSnap:(_Bool)arg1 audibleOn:(_Bool)arg2;
@end

