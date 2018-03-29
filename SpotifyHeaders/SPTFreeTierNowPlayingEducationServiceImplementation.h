//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierNowPlayingEducationService.h"
#import "SPTNowPlayingStateObserver.h"

@class NSMutableArray, NSString, SPTAllocationContext, UIWindow;

@interface SPTFreeTierNowPlayingEducationServiceImplementation : NSObject <SPTNowPlayingStateObserver, SPTFreeTierNowPlayingEducationService>
{
    id <SPTFreeTierEducationService> _educationService;
    id <NowPlayingFeature> _nowPlayingService;
    id <SPTFreeTierEducationSnackBarPresenter> _snackbarPresenter;
    id <SPTFreeTierEducationTooltipPresenter> _tooltipPresenter;
    UIWindow *_mainWindow;
    NSMutableArray *_skipRegistry;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSMutableArray *skipRegistry; // @synthesize skipRegistry=_skipRegistry;
@property(retain, nonatomic) UIWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(retain, nonatomic) id <SPTFreeTierEducationTooltipPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
@property(retain, nonatomic) id <SPTFreeTierEducationSnackBarPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(nonatomic) __weak id <NowPlayingFeature> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTFreeTierEducationService> educationService; // @synthesize educationService=_educationService;
- (void).cxx_destruct;
- (void)presentSnackbarIfSkippedTooFast;
- (void)presentSnackbarForFirstTimeSkip;
- (void)nowPlayingBarViewControllerWillDisappear:(id)arg1;
- (void)nowPlayingBarViewControllerDidAppearInContainerViewController:(id)arg1;
- (void)headUnitViewWillDisappear:(id)arg1;
- (void)headUnitViewDidAppear:(id)arg1 inContainerViewController:(id)arg2;
- (void)willSkipToNextWithPlayerRestrictions:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

