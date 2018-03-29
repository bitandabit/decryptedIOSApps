//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SPTVoiceCommand, SPTVoiceRecognitionTask;

@protocol SPTVoiceRecognitionTaskDelegate <NSObject>
- (void)voiceRecognitionTask:(SPTVoiceRecognitionTask *)arg1 didUpdateMeanAudioLevel:(double)arg2 peakAudioLevel:(double)arg3;
- (void)voiceRecognitionTaskDidReceiveFinalTranscription:(SPTVoiceRecognitionTask *)arg1;
- (void)voiceRecognitionTaskDidReceiveEndOfSpeech:(SPTVoiceRecognitionTask *)arg1;
- (void)voiceRecognitionTask:(SPTVoiceRecognitionTask *)arg1 didUpdateTranscript:(NSString *)arg2;
- (void)voiceRecognitionTask:(SPTVoiceRecognitionTask *)arg1 didFailWithError:(NSError *)arg2;
- (void)voiceRecognitionTask:(SPTVoiceRecognitionTask *)arg1 didFinishWithCommand:(SPTVoiceCommand *)arg2;
- (void)voiceRecognitionTaskDidStartListening:(SPTVoiceRecognitionTask *)arg1;
- (NSString *)provideUtteranceId;
@end

