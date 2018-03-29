//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCLens, SCLensEffectActivatorConfiguration;
@protocol SCLensEffectActivatorListener;

@protocol SCLensEffectActivator <NSObject>
@property(readonly, copy, nonatomic) SCLens *previousAppliedLens;
@property(readonly, copy, nonatomic) SCLens *currentApplyingLens;
@property(readonly, nonatomic) unsigned long long appliedLensFeatures;
@property(readonly, copy, nonatomic) SCLens *appliedLens;
- (NSString *)activeLensId;
- (_Bool)isLensBeingApplied:(SCLens *)arg1;
- (void)resetCurrentApplyingLens;
- (void)activateLens:(SCLens *)arg1 configuration:(SCLensEffectActivatorConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (_Bool)shouldActivateLens:(SCLens *)arg1;
- (void)removeLensEffectActivatorListener:(id <SCLensEffectActivatorListener>)arg1;
- (_Bool)addLensEffectActivatorListener:(id <SCLensEffectActivatorListener>)arg1;
@end

