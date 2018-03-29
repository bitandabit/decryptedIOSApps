//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlaybackErrorDialogsDelegate.h"

@class NSString, SPTPopupManager, SPTUpsellActionsRegistryImplementation;

@interface SPTUpsellPlaybackErrorManager : NSObject <SPTPlaybackErrorDialogsDelegate>
{
    id <SPTPlaybackErrorDialogs> _playbackErrorDialogs;
    id <SPTUpsellManager> _upsellManager;
    id <SPTLogCenterProtocol> _logCenter;
    SPTUpsellActionsRegistryImplementation *_actionsRegistry;
    SPTPopupManager *_popupManager;
}

@property(nonatomic) __weak SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) SPTUpsellActionsRegistryImplementation *actionsRegistry; // @synthesize actionsRegistry=_actionsRegistry;
@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) id <SPTPlaybackErrorDialogs> playbackErrorDialogs; // @synthesize playbackErrorDialogs=_playbackErrorDialogs;
- (void).cxx_destruct;
- (void)playbackErrorDialogsDidReceiveCappingReachedDialogForError:(id)arg1;
- (void)playbackErrorDialogsDidReceiveOnlyAvailableInPremiumDialog:(id)arg1;
- (void)playbackErrorDialogs:(id)arg1 didReceiveUnavailableTrack:(id)arg2;
- (void)showCappingReachedDialog;
- (void)startRadioForTrack:(id)arg1;
- (void)showUnavailableTrack:(id)arg1;
- (void)showOnlyAvailableInPremiumDialog;
- (id)initWithPlaybackErrorDialogs:(id)arg1 upsellManager:(id)arg2 logCenter:(id)arg3 actionsRegistry:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

