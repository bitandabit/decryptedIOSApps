//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSearchFriendInfo : NSObject <NSCopying>
{
    NSString *_friendUsername;
    NSString *_friendDisplayName;
    unsigned long long _unviewedSnapCount;
    unsigned long long _activeSnapCount;
}

@property(readonly, nonatomic) unsigned long long activeSnapCount; // @synthesize activeSnapCount=_activeSnapCount;
@property(readonly, nonatomic) unsigned long long unviewedSnapCount; // @synthesize unviewedSnapCount=_unviewedSnapCount;
@property(readonly, copy, nonatomic) NSString *friendDisplayName; // @synthesize friendDisplayName=_friendDisplayName;
@property(readonly, copy, nonatomic) NSString *friendUsername; // @synthesize friendUsername=_friendUsername;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFriendUsername:(id)arg1 friendDisplayName:(id)arg2 unviewedSnapCount:(unsigned long long)arg3 activeSnapCount:(unsigned long long)arg4;

@end

