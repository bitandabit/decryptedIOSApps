//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBaseMessage, SCChat;
@protocol SCChatMessageVisibilityPolicy;

@protocol SCChatMessageVisibilityPolicy <NSObject>
- (id <SCChatMessageVisibilityPolicy>)updateForChat:(SCChat *)arg1;
- (_Bool)chatMessageIsVisible:(SCBaseMessage *)arg1 forChat:(SCChat *)arg2;
@end

