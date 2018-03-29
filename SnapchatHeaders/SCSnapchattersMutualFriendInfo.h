//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapchattersMutualFriendInfo : NSObject <NSCopying>
{
    _Bool _isBestFriend;
    unsigned int _snapStreakCount;
    NSString *_birthday;
}

@property(readonly, nonatomic) _Bool isBestFriend; // @synthesize isBestFriend=_isBestFriend;
@property(readonly, nonatomic) unsigned int snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property(readonly, copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBirthday:(id)arg1 snapStreakCount:(unsigned int)arg2 isBestFriend:(_Bool)arg3;

@end
