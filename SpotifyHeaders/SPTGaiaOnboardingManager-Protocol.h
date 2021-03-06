//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTGaiaDevice, UIView;

@protocol SPTGaiaOnboardingManager <NSObject>
@property(readonly, nonatomic) SPTGaiaDevice *onboardingDevice;
- (void)setOnboardingCompleted;
- (void)removeObserver:(id <SPTGaiaOnboardingManagerObserver>)arg1;
- (void)addObserver:(id <SPTGaiaOnboardingManagerObserver>)arg1;
- (void)presentOnboardingForDevicePickerWithAnchorView:(UIView *)arg1;
- (void)presentOnboardingForNowPlayingViewWithAnchorView:(UIView *)arg1;
- (void)presentOnboardingForNowPlayingBarWithCompletion:(void (^)(void))arg1;
@end

