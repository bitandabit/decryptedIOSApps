//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTGaiaVolumeButtonController;

@protocol SPTGaiaVolumeButtonControllerDelegate <NSObject>
- (float)requestCurrentVolume;
- (void)requestVolumeChange:(float)arg1;
- (float)volumeButtonControllerDidStealVolumeDown:(SPTGaiaVolumeButtonController *)arg1;
- (float)volumeButtonControllerDidStealVolumeUp:(SPTGaiaVolumeButtonController *)arg1;
@end

