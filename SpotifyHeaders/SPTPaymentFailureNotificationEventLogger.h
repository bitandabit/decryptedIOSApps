//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTPaymentFailureNotificationRetryManager;

@interface SPTPaymentFailureNotificationEventLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
    SPTPaymentFailureNotificationRetryManager *_retryManager;
}

@property(retain, nonatomic) SPTPaymentFailureNotificationRetryManager *retryManager; // @synthesize retryManager=_retryManager;
@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)sendLogMessageWithType:(id)arg1;
- (void)logPaymentFailureNotificationWasDismissedBySystem;
- (void)logPaymentFailureNotificationWasDismissedByUser;
- (void)logPaymentFailureNotificationWasQueued;
- (void)logPaymentFailureNotificationWasPresented;
- (id)initWithLogCenter:(id)arg1 retryManager:(id)arg2;

@end
