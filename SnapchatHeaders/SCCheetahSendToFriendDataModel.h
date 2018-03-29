//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCheetahSendToFriendDataModel : NSObject <NSCopying>
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSString *_emojis;
    long long _streakCount;
    NSString *_friendKey;
    long long _itemType;
    NSString *_suggestReason;
    NSString *_sectionType;
}

@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSString *suggestReason; // @synthesize suggestReason=_suggestReason;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, copy, nonatomic) NSString *friendKey; // @synthesize friendKey=_friendKey;
@property(readonly, nonatomic) long long streakCount; // @synthesize streakCount=_streakCount;
@property(readonly, copy, nonatomic) NSString *emojis; // @synthesize emojis=_emojis;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 emojis:(id)arg4 streakCount:(long long)arg5 friendKey:(id)arg6 itemType:(long long)arg7 suggestReason:(id)arg8 sectionType:(id)arg9;

@end
