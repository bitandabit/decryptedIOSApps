//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAProfileMyFriendsPageExit : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *myFriendCount;
    NSNumber *myFriendRemoveCount;
    NSNumber *myFriendBlockCount;
    NSNumber *myFriendReAddCount;
    NSNumber *myFriendNameEditCount;
    NSNumber *myFriendRemoveInSearchCount;
    NSNumber *myFriendBlockInSearchCount;
    NSNumber *myFriendReAddInSearchCount;
    NSNumber *myFriendNameEditInSearchCount;
    long long destination;
    long long destinationPage;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getDestinationPage;
- (void)setDestinationPage:(long long)arg1;
- (long long)getDestination;
- (void)setDestination:(long long)arg1;
- (long long)getMyFriendNameEditInSearchCount;
- (void)setMyFriendNameEditInSearchCount:(long long)arg1;
- (long long)getMyFriendReAddInSearchCount;
- (void)setMyFriendReAddInSearchCount:(long long)arg1;
- (long long)getMyFriendBlockInSearchCount;
- (void)setMyFriendBlockInSearchCount:(long long)arg1;
- (long long)getMyFriendRemoveInSearchCount;
- (void)setMyFriendRemoveInSearchCount:(long long)arg1;
- (long long)getMyFriendNameEditCount;
- (void)setMyFriendNameEditCount:(long long)arg1;
- (long long)getMyFriendReAddCount;
- (void)setMyFriendReAddCount:(long long)arg1;
- (long long)getMyFriendBlockCount;
- (void)setMyFriendBlockCount:(long long)arg1;
- (long long)getMyFriendRemoveCount;
- (void)setMyFriendRemoveCount:(long long)arg1;
- (long long)getMyFriendCount;
- (void)setMyFriendCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

