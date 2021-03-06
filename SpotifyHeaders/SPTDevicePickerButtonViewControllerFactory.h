//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter, SPTGaiaLogger, SPTTheme;

@interface SPTDevicePickerButtonViewControllerFactory : NSObject
{
    id <SPTGaiaManager> _gaiaManager;
    id <SPTOfflineModeState> _offlineModeState;
    SPTTheme *_theme;
    SPTGaiaLogger *_gaiaLogger;
    NSNotificationCenter *_notificationCenter;
}

@property(nonatomic) __weak NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) SPTGaiaLogger *gaiaLogger; // @synthesize gaiaLogger=_gaiaLogger;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
- (void).cxx_destruct;
- (id)createDevicePickerButtonViewController;
- (id)initWithGaiaManager:(id)arg1 offlineModeState:(id)arg2 theme:(id)arg3 gaiaLogger:(id)arg4 notificationCenter:(id)arg5;

@end

