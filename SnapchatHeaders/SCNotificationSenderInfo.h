//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCNotificationSenderInfo : NSObject
{
    NSString *_username;
    NSString *_userId;
    NSString *_displayName;
    NSString *_avatarId;
    NSString *_selfieId;
}

@property(readonly, nonatomic) NSString *selfieId; // @synthesize selfieId=_selfieId;
@property(readonly, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)initWithSenderUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3;

@end
