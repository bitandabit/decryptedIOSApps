//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAProfileAddFriendsPageExit : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *contactFoundCount;
    NSNumber *contactFoundCountWithDisplayPic;
    NSNumber *friendAddCount;
    NSNumber *friendAddCountWithDisplayPic;
    long long destination;
    long long destinationPage;
    long long source;
    NSString *profileSessionId;
    NSString *sectionsFriendsSeen;
    NSString *sectionsFriendsSelected;
    NSString *availableSections;
    NSString *availableBadgeSummary;
    NSString *actionSummary;
    NSString *clearedBadgeSummary;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getClearedBadgeSummary;
- (void)setClearedBadgeSummary:(id)arg1;
- (id)getActionSummary;
- (void)setActionSummary:(id)arg1;
- (id)getAvailableBadgeSummary;
- (void)setAvailableBadgeSummary:(id)arg1;
- (id)getAvailableSections;
- (void)setAvailableSections:(id)arg1;
- (id)getSectionsFriendsSelected;
- (void)setSectionsFriendsSelected:(id)arg1;
- (id)getSectionsFriendsSeen;
- (void)setSectionsFriendsSeen:(id)arg1;
- (id)getProfileSessionId;
- (void)setProfileSessionId:(id)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getDestinationPage;
- (void)setDestinationPage:(long long)arg1;
- (long long)getDestination;
- (void)setDestination:(long long)arg1;
- (long long)getFriendAddCountWithDisplayPic;
- (void)setFriendAddCountWithDisplayPic:(long long)arg1;
- (long long)getFriendAddCount;
- (void)setFriendAddCount:(long long)arg1;
- (long long)getContactFoundCountWithDisplayPic;
- (void)setContactFoundCountWithDisplayPic:(long long)arg1;
- (long long)getContactFoundCount;
- (void)setContactFoundCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
