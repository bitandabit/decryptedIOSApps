//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCContextOperaViewControllerDelegate-Protocol.h"

@class NSString, SCOperaViewController, SCUserSession;
@protocol NavigationDelegate, SCContextOperaPlaylistPluginDelegate, SCOperaContextMenuOverlayProvider;

@interface SCContextOperaPlaylistPlugin : SCOperaPlaylistEventTrackerPlugin <SCContextOperaViewControllerDelegate>
{
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    id <NavigationDelegate> _navigationDelegate;
    id <SCOperaContextMenuOverlayProvider> _contextMenuProvider;
    _Bool _didLeaveAppFromPlayer;
    id <SCContextOperaPlaylistPluginDelegate> _delegate;
}

@property(nonatomic) __weak id <SCContextOperaPlaylistPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool didLeaveAppFromPlayer; // @synthesize didLeaveAppFromPlayer=_didLeaveAppFromPlayer;
- (void).cxx_destruct;
- (void)cardWasTapped;
- (void)contextViewControllerDidBecomeActive:(id)arg1;
- (void)contextViewControllerWillResignActive:(id)arg1;
- (void)contextViewController:(id)arg1 isMovingFullScreenChatControls:(double)arg2;
- (void)contextViewControllerWillEnterFullScreenChat:(id)arg1;
- (void)contextViewControllerDidPresent:(id)arg1;
- (void)contextViewControllerWillPresent:(id)arg1;
- (void)contextViewControllerDidDismiss:(id)arg1;
- (void)contextViewControllerWillDismiss:(id)arg1;
- (void)contextViewControllerPrepareForPresentation:(id)arg1;
- (void)contextViewControllerDidPressSend:(id)arg1;
- (void)contextViewControllerFinishedMediaPresentation:(id)arg1;
- (void)contextViewControllerBeganMediaPresentation:(id)arg1;
- (void)contextViewController:(id)arg1 didLeaveApp:(_Bool)arg2;
- (void)contextViewControllerWillLeaveApp:(id)arg1;
- (void)setOperaViewController:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)isHighPriorityEventListener;
- (void)setPlaylistItemController:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

