//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAppNotificationProcessor-Protocol.h"

@class SCBitmojiPresencePrefetcher, SCUserSession;

@interface SCBitmojiNotificationProcessor : NSObject <SCAppNotificationProcessor>
{
    SCUserSession *_userSession;
    SCBitmojiPresencePrefetcher *_bitmojiPresencePrefetcher;
}

- (void).cxx_destruct;
- (void)processNotification:(id)arg1;
- (void)onNotificationDeferred:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

