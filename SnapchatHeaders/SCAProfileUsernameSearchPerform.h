//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAProfileUsernameSearchPerform : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *charCount;
    NSNumber *keystrokeCount;
    NSNumber *usernameSearchCount;
    NSNumber *addedMeSearchCount;
    NSNumber *addressBookSearchCount;
    NSNumber *myFriendSearchCount;
    NSNumber *myVerifiedFriendSearchCount;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getMyVerifiedFriendSearchCount;
- (void)setMyVerifiedFriendSearchCount:(long long)arg1;
- (long long)getMyFriendSearchCount;
- (void)setMyFriendSearchCount:(long long)arg1;
- (long long)getAddressBookSearchCount;
- (void)setAddressBookSearchCount:(long long)arg1;
- (long long)getAddedMeSearchCount;
- (void)setAddedMeSearchCount:(long long)arg1;
- (long long)getUsernameSearchCount;
- (void)setUsernameSearchCount:(long long)arg1;
- (long long)getKeystrokeCount;
- (void)setKeystrokeCount:(long long)arg1;
- (long long)getCharCount;
- (void)setCharCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

