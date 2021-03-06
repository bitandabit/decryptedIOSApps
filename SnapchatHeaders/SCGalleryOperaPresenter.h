//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGalleryItemsOperaDataSourceDelegate-Protocol.h"
#import "SCGalleryOperaActionHandlerSessionDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"

@class NSString, SCGalleryItemsOperaDataSource, SCGalleryOperaActionHandlerSession, SCGalleryOperaConfiguration, SCGalleryOperaViewingMetricsSession, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaPerformanceTrackingPlugin, SCOperaViewController, SCUserSession, UIView, UIViewController;
@protocol SCGalleryOperaPresenterDelegate, SCStartChatDelegate;

@interface SCGalleryOperaPresenter : NSObject <SCOperaEventListener, SCGalleryOperaActionHandlerSessionDelegate, SCGalleryItemsOperaDataSourceDelegate>
{
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    SCOperaConfiguration *_operaConfiguration;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCGalleryItemsOperaDataSource *_itemsDataSource;
    SCOperaPerformanceTrackingPlugin *_operaPerformanceTracker;
    SCGalleryOperaActionHandlerSession *_actionHandlerSession;
    SCGalleryOperaViewingMetricsSession *_viewingMetricsSession;
    UIView *_sourceView;
    UIViewController *_fromViewController;
    SCGalleryOperaConfiguration *_configuration;
    _Bool _isInPresentationAnimation;
    _Bool _isInOperaActionMenu;
    _Bool _enterActionMenuFromLongPress;
    _Bool _shouldDeferLoadNeighborForRootViewModel;
    CDUnknownBlockType _presentationCompletionHandler;
    double _topInset;
    NSString *_sourcePageName;
    _Bool _isPresented;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCGalleryOperaPresenterDelegate> _delegate;
}

+ (_Bool)isOperaPresented;
@property(readonly, nonatomic) SCGalleryOperaConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SCGalleryOperaPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(readonly, nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
- (void).cxx_destruct;
- (void)exitOperaActionMenuFromItemsDataSource:(id)arg1;
- (void)dimissOperaFromItemsDataSource:(id)arg1;
- (_Bool)actionHandlerSessionEnterActionMenuFromLongPress:(id)arg1;
- (void)actionHandlerSession:(id)arg1 shouldExitActionMenu:(id)arg2;
- (void)actionHandlerSessionDismissOpera:(id)arg1;
- (void)_ensureOperaIsInActionMenu:(_Bool)arg1;
- (id)_registeredEventsForOperaSession;
- (id)_maskedSourceView:(long long)arg1;
- (long long)_transitionOrientationBasedOnCurrentViewItem;
- (void)_didOpenCurrentViewItem:(_Bool)arg1;
- (void)_updateRotateVideoPinchStartStateFromContext:(id)arg1;
- (void)_didStartToBrowseFromContext:(id)arg1;
- (void)_setupOperaSessions;
- (void)_setupOperaVC;
- (long long)_transitionModeForItem:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)currentViewItem;
- (void)forceDismiss;
- (void)updateOperaPlaylistWithItems:(id)arg1;
- (void)presentOperaFromViewController:(id)arg1 sourcePageName:(id)arg2 sourceView:(id)arg3 sourceImage:(id)arg4 topInset:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setIsPresented:(_Bool)arg1;
- (void)dealloc;
- (id)initWithItems:(id)arg1 initialIndex:(long long)arg2 initialSnapId:(id)arg3 configuration:(id)arg4 userSession:(id)arg5;
- (id)initWithItems:(id)arg1 initialIndex:(long long)arg2 configuration:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

