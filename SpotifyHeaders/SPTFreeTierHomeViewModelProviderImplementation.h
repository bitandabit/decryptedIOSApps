//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_SPTHubViewModelProvider.h"

#import "SPTFreeTierHomeViewModel.h"

@class NSString;

@interface SPTFreeTierHomeViewModelProviderImplementation : EXP_SPTHubViewModelProvider <SPTFreeTierHomeViewModel>
{
    _Bool _skipped;
    id <EXP_SPTHubViewModelProviderDelegate> delegate;
    id <SPTFreeTierHomeViewModelDelegate> viewModelDelegate;
    id <SPTFreeTierTasteOnboardingService> _onboardingService;
}

@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingService> onboardingService; // @synthesize onboardingService=_onboardingService;
@property(nonatomic, getter=didSkipOnboarding) _Bool skipped; // @synthesize skipped=_skipped;
@property(nonatomic) __weak id <SPTFreeTierHomeViewModelDelegate> viewModelDelegate; // @synthesize viewModelDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)provideTasteOnboardingCurator;
- (_Bool)didCompleteOnboarding;
- (void)didSkipTasteOnboarding;
- (id)initWithViewModelLoader:(id)arg1 onboardingService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

