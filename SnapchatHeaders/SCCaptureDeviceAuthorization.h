//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCCaptureDeviceAuthorization : NSObject
{
}

+ (void)requestAccessForVideoCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (_Bool)deniedForVideoCapture;
+ (_Bool)authorizedForVideoCapture;
+ (_Bool)notDeterminedForVideoCapture;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)restrictedForMediaType:(id)arg1;
+ (_Bool)deniedForMediaType:(id)arg1;
+ (_Bool)authorizedForMediaType:(id)arg1;
+ (_Bool)notDeterminedForMediaType:(id)arg1;

@end

