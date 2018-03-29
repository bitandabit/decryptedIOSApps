//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTAudioSessionActivator;

@protocol SPTAudioSessionControllerObserver <NSObject>

@optional
- (void)audioSessionController:(id <SPTAudioSessionController>)arg1 didFailSettingAudioSessionConfiguration:(NSError *)arg2;
- (void)audioSessionController:(id <SPTAudioSessionController>)arg1 didFailSettingAudioSessionActive:(_Bool)arg2 error:(NSError *)arg3;
- (void)audioSessionController:(id <SPTAudioSessionController>)arg1 didSetAudioSessionActive:(_Bool)arg2;
- (void)audioSessionController:(id <SPTAudioSessionController>)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)audioSessionController:(id <SPTAudioSessionController>)arg1 willReleaseLockForAudioSessionConfiguration:(SPTAudioSessionActivator *)arg2;
- (void)audioSessionController:(id <SPTAudioSessionController>)arg1 willAttemptLockForAudioSessionConfiguration:(SPTAudioSessionActivator *)arg2;
@end

