//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCTV3OnboardingHintsExperimentContext : SCExperimentContext
{
    unsigned long long _callingLensesTooltipMax;
    unsigned long long _tapToJoinTooltipMax;
}

@property(readonly, nonatomic) unsigned long long tapToJoinTooltipMax; // @synthesize tapToJoinTooltipMax=_tapToJoinTooltipMax;
@property(readonly, nonatomic) unsigned long long callingLensesTooltipMax; // @synthesize callingLensesTooltipMax=_callingLensesTooltipMax;
- (void)setupParameters;
- (id)experimentName;

@end

