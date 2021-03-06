//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchattersFriendInfo, SCSnapchattersNonFriendInfo;

@interface SCSnapchattersSnapchatterInfo : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchattersFriendInfo *_friendInfo_friendInfo;
    SCSnapchattersNonFriendInfo *_nonFriendInfo_nonFriendInfo;
}

+ (id)nonFriendInfoWithNonFriendInfo:(id)arg1;
+ (id)friendInfoWithFriendInfo:(id)arg1;
- (void).cxx_destruct;
- (void)matchFriendInfo:(CDUnknownBlockType)arg1 nonFriendInfo:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asNonFriendInfo;
- (id)asFriendInfo;
- (unsigned long long)subtype;
- (_Bool)isSameSubtype:(id)arg1;

@end

