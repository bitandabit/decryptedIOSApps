//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SPTGaiaContextMenuModel, SPTGaiaDevice;

@protocol SPTGaiaContextMenuModelProvider <NSObject>
- (SPTGaiaContextMenuModel *)contextModelForDevice:(SPTGaiaDevice *)arg1;
- (void)setDevices:(NSArray *)arg1;
@end

