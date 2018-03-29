//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "LSASnapcodeComponentListener-Protocol.h"
#import "SCLensDataProviderListener-Protocol.h"
#import "SCScannableActionProviderDelegate-Protocol.h"

@class LSAComponentManager, NSString, SCLens, SCLensBitmojiProvider, SCLensDataProvider, SCLensUIUpdateListenerAnnouncer, SCScannableActionProvider, SCSnapScannedData, SCSnapcodeActionsInfo, SCUserSession;
@protocol SCLensProcessingCore, SCLensSnapcodeARExperienceControllerDelegate;

@interface SCLensSnapcodeARExperienceController : NSObject <LSASnapcodeComponentListener, LSAEffectComponentListener, SCScannableActionProviderDelegate, SCLensDataProviderListener>
{
    SCUserSession *_userSession;
    id <SCLensSnapcodeARExperienceControllerDelegate> _delegate;
    SCLensUIUpdateListenerAnnouncer *_uiUpdateAnnouncer;
    SCLensDataProvider *_lensDataProvider;
    NSString *_lensDataProviderToken;
    SCLensBitmojiProvider *_lensBitmojiProvider;
    SCScannableActionProvider *_snapcodeActionProvider;
    SCSnapScannedData *_scanData;
    id <SCLensProcessingCore> _lensProcessingCore;
    _Bool _active;
    SCSnapcodeActionsInfo *_currentSnapcodeActionsInfo;
    LSAComponentManager *_lensComponentManager;
}

@property(retain, nonatomic) LSAComponentManager *lensComponentManager; // @synthesize lensComponentManager=_lensComponentManager;
@property(retain, nonatomic) SCSnapcodeActionsInfo *currentSnapcodeActionsInfo; // @synthesize currentSnapcodeActionsInfo=_currentSnapcodeActionsInfo;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)_activateLens:(id)arg1;
- (void)_getSnapcodeActionsForSnapcodeData:(id)arg1;
- (void)timeoutTimerFired;
- (void)handleErrorWithResponseDictionary:(id)arg1 errorData:(id)arg2;
- (void)handleSuccessWithScannableActions:(id)arg1 responseDictionary:(id)arg2 scanData:(id)arg3 scannableId:(id)arg4 codeType:(int)arg5 version:(int)arg6 pageType:(long long)arg7 unlockProperties:(id)arg8;
- (void)snapcodeComponentDidRequestToTriggerAction:(id)arg1;
- (void)snapcodeComponentDidLoseSnapcode:(id)arg1;
- (void)snapcodeComponent:(id)arg1 didFindSnapcode:(id)arg2;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)lensDataProvider:(id)arg1 didUpdateLens:(id)arg2;
- (void)lensDataProvider:(id)arg1 didUpdateAllLenses:(id)arg2 requiresAnimation:(_Bool)arg3;
- (void)deactivate;
- (void)activateWithLens:(id)arg1;
@property(readonly, nonatomic) SCLens *activeLens;
- (id)initWithLensProcessungCore:(id)arg1 lensDataProvider:(id)arg2 userSession:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
