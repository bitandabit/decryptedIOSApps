//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol SPTWidevineEventListenerDelegate <NSObject>
- (void)sessionKeyStatusChanged:(NSString *)arg1;
- (void)session:(NSString *)arg1 sendMessage:(NSData *)arg2 ofType:(int)arg3;
@end

