//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingAnimationViewProvider.h"
#import "SPTNowPlayingContainedViewController.h"
#import "SPTNowPlayingContainerIdleMonitorObserver.h"
#import "SPTNowPlayingEntityDecorationControllerObserver.h"

@class NSNotificationCenter, NSString, SPTNowPlayingEntityDecorationController, SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingShowsFormatNavigationBarView, SPTTheme, UIView, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingShowsFormatNavigationBarViewController : UIViewController <SPTNowPlayingEntityDecorationControllerObserver, SPTNowPlayingContainedViewController, SPTNowPlayingContainerIdleMonitorObserver, SPTNowPlayingAnimationViewProvider>
{
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    SPTTheme *_theme;
    NSNotificationCenter *_notificationCentre;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    SPTNowPlayingModel *_model;
    SPTNowPlayingShowsFormatNavigationBarView *_navigationBarView;
}

@property(retain, nonatomic) SPTNowPlayingShowsFormatNavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSNotificationCenter *notificationCentre; // @synthesize notificationCentre=_notificationCentre;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
- (void).cxx_destruct;
- (void)openPlayContext;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarView;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)entityDecorationControllerDidUpdate:(id)arg1;
- (void)loadMetadata;
- (id)initWithEntityDecorationController:(id)arg1 theme:(id)arg2 notificationCenter:(id)arg3 logger:(id)arg4 queueLogger:(id)arg5 nowPlayingModel:(id)arg6;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *spt_nowPlayingCoverArtView;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarButtonsView;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarLeftButton;
@property(readonly) Class superclass;

@end

