//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCQueuePerformer;

@interface SCScreenshotLogger : NSObject
{
    SCQueuePerformer *_performer;
    NSString *_previewSourcePageName;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_logScreenshotSnapSendWithCommonLoggingParameters:(id)arg1;
- (void)_logScreenshotSnapPreviewWithCommonLoggingParameters:(id)arg1;
- (void)_logPagePageScreenshot:(id)arg1;
- (void)logScreenshotSnapSendWithCommonLoggingParameters:(id)arg1;
- (void)logScreenshotSnapPreviewWithCommonLoggingParameters:(id)arg1;
- (void)logPagePageScreenshot:(id)arg1;
- (void)setPreviewSourcePageName:(id)arg1;
- (id)init;

@end

