//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSession, MPVolumeView, NSHashTable, NSNotificationCenter, NSString, NSTimer, UIApplication;

@interface SPTGaiaAirplayManager : NSObject
{
    _Bool _available;
    _Bool _active;
    _Bool _expectedAirplayKeyWindowChange;
    NSString *_activeDeviceName;
    long long _audioOutputRoute;
    MPVolumeView *_volumeView;
    NSHashTable *_observers;
    NSTimer *_checkAirplayTimer;
    NSNotificationCenter *_notificationCenter;
    AVAudioSession *_audioSession;
    UIApplication *_application;
}

@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSTimer *checkAirplayTimer; // @synthesize checkAirplayTimer=_checkAirplayTimer;
@property(nonatomic) _Bool expectedAirplayKeyWindowChange; // @synthesize expectedAirplayKeyWindowChange=_expectedAirplayKeyWindowChange;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) long long audioOutputRoute; // @synthesize audioOutputRoute=_audioOutputRoute;
@property(retain, nonatomic) NSString *activeDeviceName; // @synthesize activeDeviceName=_activeDeviceName;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
- (void).cxx_destruct;
- (void)checkAirplayTimerFired:(id)arg1;
- (void)windowDidBecomeKeyNotification:(id)arg1;
- (void)routeChanged:(id)arg1;
- (void)wirelessRouteActiveDidChange:(id)arg1;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;
- (void)setActiveDevice;
- (void)invalidate;
- (void)pullToLocalDevice;
- (void)presentAirplayPicker;
- (void)presentAirplayPickerFromView:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithVolumeView:(id)arg1 audioSession:(id)arg2 notificationCenter:(id)arg3 application:(id)arg4;

@end

