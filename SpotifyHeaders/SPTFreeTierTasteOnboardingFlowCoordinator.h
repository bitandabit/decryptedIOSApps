//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierTasteOnboardingArtistPickerViewControllerDelegate.h"
#import "SPTFreeTierTasteOnboardingTrackSwipeViewControllerDelegate.h"
#import "SPTFreeTierTasteOnboardingUpdateTasteViewControllerDelegate.h"
#import "SPTMetaViewControllerRootViewPresenter.h"

@class NSString, SPTFreeTierTasteOnboardingFlowConfiguration, UINavigationController;

@interface SPTFreeTierTasteOnboardingFlowCoordinator : NSObject <SPTFreeTierTasteOnboardingArtistPickerViewControllerDelegate, SPTFreeTierTasteOnboardingTrackSwipeViewControllerDelegate, SPTFreeTierTasteOnboardingUpdateTasteViewControllerDelegate, SPTMetaViewControllerRootViewPresenter>
{
    _Bool _repeatVisit;
    SPTFreeTierTasteOnboardingFlowConfiguration *_configuration;
    UINavigationController *_navigationController;
    unsigned long long _presentationState;
}

@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic, getter=isRepeatVisit) _Bool repeatVisit; // @synthesize repeatVisit=_repeatVisit;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingFlowConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (_Bool)presentBridgeViewAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateTasteViewControllerDidComplete:(id)arg1;
- (void)trackSwipeViewController:(id)arg1 didComplete:(_Bool)arg2;
- (void)artistPickerViewController:(id)arg1 didComplete:(_Bool)arg2 withSelectedArtistURIs:(id)arg3;
- (id)nextViewControllerAfterViewController:(id)arg1 inState:(unsigned long long)arg2 withSeedURIs:(id)arg3;
- (id)viewControllerForState:(unsigned long long)arg1 withSeedURIs:(id)arg2;
- (void)confirmDismiss;
- (void)confirmDismissCancelTapped;
- (void)confirmDismissContinueTapped;
- (id)provideUpdateTasteViewController;
- (id)provideTrackSwipeViewControllerWithSeedURIs:(id)arg1;
- (id)provideArtistPickerViewController;
- (id)provideNavigationControllerWithRootViewController:(id)arg1;
- (void)dismiss;
- (void)presentAsBridgeView:(_Bool)arg1 inState:(unsigned long long)arg2 withSeedURIs:(id)arg3;
- (void)presentAsBridgeView:(_Bool)arg1 inState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

