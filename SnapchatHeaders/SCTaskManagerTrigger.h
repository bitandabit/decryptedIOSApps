//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCTaskManager;

@interface SCTaskManagerTrigger : NSObject
{
    _Bool _firstCameraPreviewFrameReceived;
    _Bool _firstUIFrameRendered;
    SCTaskManager *_taskManager;
}

- (void).cxx_destruct;
- (void)_startupComplete;
- (void)appStartNotWithCameraOnScreen:(id)arg1;
- (void)markAppEnterBackground;
- (void)resetForNextStartup;
- (void)firstUIFrameRendered;
- (void)firstCameraPreviewFrameReceived;
- (id)initWithTaskManager:(id)arg1;

@end
