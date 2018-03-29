//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCAUserNotTrackedEvent, SCAUserTrackedEvent;

@protocol SCLoggerAmplitudeProtocol <NSObject>
- (void)resumeSessionIfPossible:(long long)arg1;
- (void)updateValidationServerUrl:(NSString *)arg1;
- (void)logUserNotTrackedEvent:(SCAUserNotTrackedEvent *)arg1;
- (void)logUserTrackedEvent:(SCAUserTrackedEvent *)arg1;
@end

