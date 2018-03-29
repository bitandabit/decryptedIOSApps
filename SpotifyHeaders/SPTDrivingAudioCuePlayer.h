//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSMapTable, NSMutableDictionary, NSString;

@interface SPTDrivingAudioCuePlayer : NSObject <AVAudioPlayerDelegate>
{
    id <SPTAudioSessionController> _audioSessionController;
    id <SPTDrivingAudioCuesExperiment> _audioCuesExperiment;
    NSMutableDictionary *_cuePlayers;
    NSMapTable *_audioSessionActivators;
    AVAudioPlayer *_currentPlayer;
}

+ (id)soundsBundle;
@property(retain, nonatomic) AVAudioPlayer *currentPlayer; // @synthesize currentPlayer=_currentPlayer;
@property(retain, nonatomic) NSMapTable *audioSessionActivators; // @synthesize audioSessionActivators=_audioSessionActivators;
@property(readonly, nonatomic) NSMutableDictionary *cuePlayers; // @synthesize cuePlayers=_cuePlayers;
@property(readonly, nonatomic) id <SPTDrivingAudioCuesExperiment> audioCuesExperiment; // @synthesize audioCuesExperiment=_audioCuesExperiment;
@property(readonly, nonatomic) id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playFeedbackSoundIfEnabled:(id)arg1;
- (void)playCue:(unsigned long long)arg1;
- (id)newPlayerForFilename:(id)arg1;
- (id)audioFilenameForCue:(unsigned long long)arg1;
- (id)playerForAudioCue:(unsigned long long)arg1;
- (id)initWithAudioCuesExperiment:(id)arg1 audioSessionController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

