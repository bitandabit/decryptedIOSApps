//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "SCLensEffectActivator-Protocol.h"

@class LSAEffectComponent, LSAVideoProcessingComponent, NSString, SCLens, SCLensEffectActivatorListenerAnnouncer;

@interface SCLensEffectActivator : NSObject <SCLensEffectActivator, LSAEffectComponentListener>
{
    LSAEffectComponent *_effectComponent;
    LSAVideoProcessingComponent *_videoProcessingComponent;
    SCLensEffectActivatorListenerAnnouncer *_listenerAnnouncer;
    double _activationStartTime;
    SCLens *_appliedLens;
    unsigned long long _appliedLensFeatures;
    SCLens *_currentApplyingLens;
    SCLens *_previousAppliedLens;
}

@property(copy, nonatomic) SCLens *previousAppliedLens; // @synthesize previousAppliedLens=_previousAppliedLens;
@property(copy, nonatomic) SCLens *currentApplyingLens; // @synthesize currentApplyingLens=_currentApplyingLens;
@property(nonatomic) unsigned long long appliedLensFeatures; // @synthesize appliedLensFeatures=_appliedLensFeatures;
@property(copy, nonatomic) SCLens *appliedLens; // @synthesize appliedLens=_appliedLens;
- (void).cxx_destruct;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (_Bool)isLensBeingApplied:(id)arg1;
- (id)activeLensId;
- (void)resetCurrentApplyingLens;
- (void)activateLens:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldActivateLens:(id)arg1;
- (void)removeLensEffectActivatorListener:(id)arg1;
- (_Bool)addLensEffectActivatorListener:(id)arg1;
- (id)initWithEffectComponent:(id)arg1 videoProcessingComponent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

