//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCDeviceName : NSObject
{
}

+ (id)devicePlatform;
+ (id)osVersion;
+ (double)timeIntervalSinceSystemBoot;
+ (id)deviceVersionStringForDeviceName:(id)arg1;
+ (_Bool)currentDeviceMeetsMinimumDeviceRequirement:(id)arg1;
+ (_Bool)isIpad:(id)arg1;
+ (_Bool)isIphone:(id)arg1;
+ (_Bool)isIpod:(id)arg1;
+ (_Bool)isSimulator:(id)arg1;
+ (id)platformString;
+ (_Bool)isA8Chip;
+ (_Bool)isSimilarToIphone8orNewer;
+ (_Bool)isSimilarToIphone7orNewer;
+ (_Bool)isSimilarToIphone6SorNewer;
+ (_Bool)isSimilarToIphone6orNewer;
+ (_Bool)isSimilarToIphone5SorNewer;
+ (_Bool)isSimilarToIphone5orNewer;
+ (_Bool)isIphoneX;
+ (_Bool)isIpad;
+ (_Bool)isIphone;
+ (_Bool)isIpod;
+ (_Bool)isSimulator;
+ (float)defaultFieldOfView;
+ (long long)deviceScore;
+ (unsigned long long)deviceClass;

@end
