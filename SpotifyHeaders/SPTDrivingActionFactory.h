//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBActionFactory.h"

@class SPTDrivingAudioCuePlayer, SPTDrivingLogger, SPTDrivingPlayer, SPTDrivingTestManager;

@interface SPTDrivingActionFactory : NSObject <HUBActionFactory>
{
    SPTDrivingPlayer *_player;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformConfiguration> _collectionPlatformConfiguration;
    SPTDrivingTestManager *_testManager;
    id <SPTDrivingVoiceFeedbackEngine> _voiceFeedbackEngine;
    SPTDrivingAudioCuePlayer *_audioCuePlayer;
    id <SPTDrivingVolumeController> _volumeController;
    id <SPTVoiceSessionViewControllerFactory> _voiceViewControllerFactory;
    id <SPTLocalSettings> _localSettings;
    SPTDrivingLogger *_logger;
}

@property(readonly, nonatomic) SPTDrivingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTVoiceSessionViewControllerFactory> voiceViewControllerFactory; // @synthesize voiceViewControllerFactory=_voiceViewControllerFactory;
@property(readonly, nonatomic) id <SPTDrivingVolumeController> volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) SPTDrivingAudioCuePlayer *audioCuePlayer; // @synthesize audioCuePlayer=_audioCuePlayer;
@property(readonly, nonatomic) id <SPTDrivingVoiceFeedbackEngine> voiceFeedbackEngine; // @synthesize voiceFeedbackEngine=_voiceFeedbackEngine;
@property(readonly, nonatomic) SPTDrivingTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionPlatformConfiguration; // @synthesize collectionPlatformConfiguration=_collectionPlatformConfiguration;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) SPTDrivingPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)createActionForName:(id)arg1;
- (id)initWithPlayer:(id)arg1 collectionPlatform:(id)arg2 collectionPlatformConfiguration:(id)arg3 audioCuePlayer:(id)arg4 voiceFeedbackEngine:(id)arg5 volumeController:(id)arg6 voiceViewControllerFactory:(id)arg7 testManager:(id)arg8 localSettings:(id)arg9 logger:(id)arg10;

@end

