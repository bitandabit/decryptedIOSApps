//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTAudioSessionControllerDelegate <NSObject>
- (_Bool)shouldModifyAudioSession:(id <SPTAudioSessionController>)arg1;

@optional
- (_Bool)audioSessionShouldSupportBluetooth:(id <SPTAudioSessionController>)arg1;
- (double)audioSessionPreferredIOBufferDuration:(id <SPTAudioSessionController>)arg1;
- (_Bool)audioSessionShouldSupportRecording:(id <SPTAudioSessionController>)arg1;
@end

