//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAppNotificationProcessor-Protocol.h"

@interface SCChatNotificationProcessor : NSObject <SCAppNotificationProcessor>
{
}

+ (_Bool)applyChatPushPayload:(id)arg1;
+ (void)applySnapPushPayload:(id)arg1;
+ (_Bool)isNotificationForReadContent:(id)arg1;
- (void)repostNotification:(id)arg1 fetchSucceeded:(_Bool)arg2;
- (void)fetchConversationIfNecessary:(id)arg1;
- (void)processNotification:(id)arg1;
- (void)onNotificationDeferred:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1;

@end

