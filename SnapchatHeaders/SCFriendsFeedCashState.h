//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCFriendsFeedCashItem;

@interface SCFriendsFeedCashState : NSObject <NSCopying>
{
    SCFriendsFeedCashItem *_lastCashWithUsername;
    NSArray *_latestUnresolvedReceivedCashItems;
}

@property(readonly, copy, nonatomic) NSArray *latestUnresolvedReceivedCashItems; // @synthesize latestUnresolvedReceivedCashItems=_latestUnresolvedReceivedCashItems;
@property(readonly, copy, nonatomic) SCFriendsFeedCashItem *lastCashWithUsername; // @synthesize lastCashWithUsername=_lastCashWithUsername;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLastCashWithUsername:(id)arg1 latestUnresolvedReceivedCashItems:(id)arg2;

@end

