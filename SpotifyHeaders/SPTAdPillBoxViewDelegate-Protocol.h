//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView;

@protocol SPTAdPillBoxViewDelegate <NSObject>
- (void)didTapSkipButton:(UIView *)arg1 withPreferences:(NSArray *)arg2;
- (void)didTapDoneButton:(UIView *)arg1 withPreferences:(NSArray *)arg2;
- (void)didInteractWithPillBoxView:(UIView *)arg1;
@end

