//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBRewardedVideoAdEndView, NSError;

@protocol FBRewardedVideoAdEndViewDelegate <NSObject>
- (void)rewardedVideoAdEndViewDidTerminate:(FBRewardedVideoAdEndView *)arg1;
- (void)rewardedVideoAdEndView:(FBRewardedVideoAdEndView *)arg1 didFailWithError:(NSError *)arg2;
- (void)rewardedVideoAdEndViewWillClose:(FBRewardedVideoAdEndView *)arg1;
- (void)rewardedVideoAdEndViewClicked:(FBRewardedVideoAdEndView *)arg1;
@end

