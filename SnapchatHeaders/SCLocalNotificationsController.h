//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAppNotificationProviderDelegate-Protocol.h"

@class NSMutableDictionary, SCAppNotificationBatcher;

@interface SCLocalNotificationsController : NSObject <SCAppNotificationProviderDelegate>
{
    NSMutableDictionary *_localNotifications;
    SCAppNotificationBatcher *_notificationBatcher;
}

- (void).cxx_destruct;
- (void)logDisplayNotification:(id)arg1;
- (void)_displayNotifications:(id)arg1;
- (void)displayNotification:(id)arg1;
- (_Bool)canDisplayNotification:(id)arg1;
- (void)hideNotification:(id)arg1;
- (void)didApplicationStateChange:(_Bool)arg1 withCurrentNotifications:(id)arg2;
- (void)clearNotificationData;
- (id)init;

@end
