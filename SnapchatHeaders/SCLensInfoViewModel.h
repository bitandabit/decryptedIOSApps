//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "SCLensFrameRateCounterListener-Protocol.h"
#import "SCLensInfoViewModelProtocol-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"

@class LSAEffectComponent, NSDate, NSString, SCGCDTimer, SCLens, SCPreferences;

@interface SCLensInfoViewModel : NSObject <SCLensInfoViewModelProtocol, LSAEffectComponentListener, SCLensUIUpdateListener, SCLensFrameRateCounterListener>
{
    float _fps;
    long long _usedRam;
    long long _archiveSize;
    NSDate *_pushedDate;
    SCLens *_currentLens;
    SCPreferences *_userPreferences;
    SCPreferences *_lensPreferences;
    SCGCDTimer *_updateScenariumMemoryUsageTimer;
    LSAEffectComponent *_effectComponent;
    double _previousLensTotalMemoryUsage;
    double _currentLensMemoryUsage;
}

@property(nonatomic) double currentLensMemoryUsage; // @synthesize currentLensMemoryUsage=_currentLensMemoryUsage;
@property(nonatomic) double previousLensTotalMemoryUsage; // @synthesize previousLensTotalMemoryUsage=_previousLensTotalMemoryUsage;
@property(retain, nonatomic) LSAEffectComponent *effectComponent; // @synthesize effectComponent=_effectComponent;
@property(retain, nonatomic) SCGCDTimer *updateScenariumMemoryUsageTimer; // @synthesize updateScenariumMemoryUsageTimer=_updateScenariumMemoryUsageTimer;
@property(retain, nonatomic) SCPreferences *lensPreferences; // @synthesize lensPreferences=_lensPreferences;
@property(retain, nonatomic) SCPreferences *userPreferences; // @synthesize userPreferences=_userPreferences;
@property(retain, nonatomic) SCLens *currentLens; // @synthesize currentLens=_currentLens;
@property(retain, nonatomic) NSDate *pushedDate; // @synthesize pushedDate=_pushedDate;
@property(nonatomic) long long archiveSize; // @synthesize archiveSize=_archiveSize;
@property(nonatomic) long long usedRam; // @synthesize usedRam=_usedRam;
@property(nonatomic) float fps; // @synthesize fps=_fps;
- (void).cxx_destruct;
- (void)frameRateCounter:(id)arg1 didUpdateLensFrameProcessingInfo:(CDStruct_d6ea8fa7)arg2;
- (void)didEndDisplayingLens:(id)arg1;
- (void)willDisplayLens:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didHideLenses;
- (void)willShowLenses;
- (void)effectComponent:(id)arg1 didInstantiatedEffectWithId:(id)arg2 isFromCache:(_Bool)arg3;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 savePersistentStore:(id)arg3;
- (void)effectComponent:(id)arg1 loadPersistentStoreForEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performInterfaceAction:(unsigned long long)arg3 interfaceElement:(unsigned long long)arg4 interfaceData:(id)arg5;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showPopUpHintWithId:(id)arg3 interfaceElement:(unsigned long long)arg4;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performHapticFeedback:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 hideAllHintsForEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showHintWithId:(id)arg3;
- (void)effectComponent:(id)arg1 willTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 willTurnOnEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)updateScenariumLensMemoryUsage;
- (void)updateMemoryUsage;
- (id)initWithUserPreferences:(id)arg1 lensPreferences:(id)arg2 effectComponent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

