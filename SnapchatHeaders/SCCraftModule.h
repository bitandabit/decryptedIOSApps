//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCCraftModule : NSObject
{
}

+ (void)enableForUser:(id)arg1;
+ (void)refreshSnapCraftResources:(id)arg1;
+ (_Bool)enabled:(_Bool)arg1;
+ (_Bool)isDeviceCapableOfClientProcessing;
+ (id)snapCraftButtonWithFrame:(struct CGRect)arg1 userSession:(id)arg2;
+ (id)snapCraftRealTimeController:(id)arg1 shouldSeamlessClone:(_Bool)arg2 enableSnapPrettyMode:(_Bool)arg3 debugMode:(_Bool)arg4;
+ (id)snapCraftControllerWithFrame:(struct CGRect)arg1 image:(id)arg2 videoProvider:(id)arg3 stylizedImage:(id)arg4 styleId:(id)arg5 userSession:(id)arg6 isPrivate:(_Bool)arg7 mediaOrientation:(long long)arg8 snapSource:(long long)arg9;

@end

