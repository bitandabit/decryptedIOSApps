//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOperaScrollView, UIGestureRecognizer;

@protocol SCOperaScrollViewDelegate <NSObject>
- (void)operaScrollViewDidTap:(SCOperaScrollView *)arg1 recognizer:(UIGestureRecognizer *)arg2;
- (void)operaScrollViewDidEndScrolling:(SCOperaScrollView *)arg1;
- (void)operaScrollViewDidScroll:(SCOperaScrollView *)arg1 relativePosition:(unsigned long long)arg2;
@end
