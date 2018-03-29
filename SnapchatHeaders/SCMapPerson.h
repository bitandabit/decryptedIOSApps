//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class Friend, User;

@interface SCMapPerson : NSObject <NSCopying>
{
    Friend *_friend;
    User *_user;
}

+ (id)personWithUser:(id)arg1;
+ (id)personWithFriend:(id)arg1;
+ (id)currentPerson;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)friendRepresentation;
- (id)astrologicalSign;
- (id)_birthday;
- (void)fetchScore:(CDUnknownBlockType)arg1;
- (id)friendStories;
- (id)bitmojiSelfieId;
- (id)bitmojiAvatarId;
- (id)userId;
- (id)username;
- (id)displayName;
- (_Bool)isFriend;
- (_Bool)isUser;
- (_Bool)isCurrentUser;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithFriend:(id)arg1;

@end

