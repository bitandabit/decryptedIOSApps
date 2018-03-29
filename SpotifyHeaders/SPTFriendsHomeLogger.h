//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFriendsHomeLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logEntityUserRecommendationFollowInteraction:(id)arg1 indexPath:(id)arg2 userURI:(id)arg3;
- (void)logEntityUserRecommendationInteraction:(id)arg1 indexPath:(id)arg2 userURI:(id)arg3;
- (void)logEntityUserRecommendationItemImpression:(id)arg1 indexPath:(id)arg2 userURI:(id)arg3;
- (void)logEntityRowFacepileSelectInteraction:(id)arg1 indexPath:(id)arg2 trackURI:(id)arg3;
- (void)logEntityRowImpression:(id)arg1 indexPath:(id)arg2 trackURI:(id)arg3;
- (void)logEntityHeaderFacepileSelectInteraction:(id)arg1;
- (void)logEntityCookingHeaderFindFriendsInteraction:(id)arg1;
- (void)logEntityCookingHeaderFindFriendsImpression:(id)arg1;
- (void)logEntityUpsellHeaderFindFriendsInteraction:(id)arg1;
- (void)logEntityUpsellHeaderFindFriendsImpression:(id)arg1;
- (void)logFriendsListUserInteraction:(id)arg1 indexPath:(id)arg2 userURI:(id)arg3 contextURI:(id)arg4;
- (void)logFriendsListUserImpression:(id)arg1 indexPath:(id)arg2 userURI:(id)arg3;
- (void)logHomeFacepileInteraction:(id)arg1 shelfSection:(unsigned long long)arg2 shelfTitle:(id)arg3 playlistURI:(id)arg4;
- (void)logUserProfileFollowInteraction:(long long)arg1 shelfSection:(unsigned long long)arg2 shelfTitle:(id)arg3 userURI:(id)arg4;
- (void)logUserProfileSelectInteraction:(id)arg1 shelfSection:(unsigned long long)arg2 shelfTitle:(id)arg3 userURI:(id)arg4;
- (void)logUserProfileImpression:(id)arg1 shelfSection:(unsigned long long)arg2 shelfTitle:(id)arg3 userURI:(id)arg4;
- (void)logPlaylistCardInteraction:(id)arg1 shelfSection:(unsigned long long)arg2 shelfTitle:(id)arg3 playlistURI:(id)arg4;
- (void)logPlaylistCardImpression:(id)arg1 shelfSection:(unsigned long long)arg2 shelfTitle:(id)arg3 playlistURI:(id)arg4;
- (double)timestamp;
- (id)initWithLogCenter:(id)arg1;

@end

