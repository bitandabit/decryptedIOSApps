//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCSearchEventAnnouncing-Protocol.h"

@class NSDictionary, NSString, SCOperaViewController, SCOperaViewInteraction, SCSearchEventListenerAnnouncer;
@protocol SCOperaPlaylistItemController;

@interface SCCheetahStoryLoggingOperaPlugin : SCOperaPlaylistEventTrackerPlugin <SCSearchEventAnnouncing>
{
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaViewController *_operaViewController;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCOperaViewInteraction *_interactionAtDismissal;
    _Bool _isInterstitialAtDismissal;
    _Bool _isResuming;
    long long _overrideEntryEvent;
    long long _source;
    NSDictionary *_fieldsOverrideDict;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)teardown;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)setOperaViewController:(id)arg1;
- (id)registeredEventsForOperaSession;
- (_Bool)isHighPriorityEventListener;
- (void)setPlaylistItemController:(id)arg1;
- (id)initWithSource:(long long)arg1 fieldsOverrideDict:(id)arg2;
- (id)initWithSource:(long long)arg1;
- (id)init;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

