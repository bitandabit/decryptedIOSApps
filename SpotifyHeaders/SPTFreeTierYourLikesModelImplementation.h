//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierYourLikesModel.h"

@class NSOrderedSet, NSString;

@interface SPTFreeTierYourLikesModelImplementation : NSObject <SPTFreeTierYourLikesModel>
{
    id <SPTFreeTierYourLikesModelDelegate> _delegate;
    id <SPTCollectionPlatformDataLoaderRequestToken> _artistsSubscription;
    id <SPTCollectionPlatformDataLoaderRequestToken> _bansSubscription;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataLoader;
    id <SPTCollectionPlatformDataLoaderRequestToken> _tracksSubscription;
    NSOrderedSet *_likedTracks;
    NSOrderedSet *_bannedTracks;
    NSOrderedSet *_likedArtists;
    NSOrderedSet *_bannedArtists;
}

+ (id)artistEntitiesFromCollectionPlatformItems:(id)arg1 filter:(CDUnknownBlockType)arg2;
+ (id)trackEntitiesFromCollectionPlatformItems:(id)arg1 filter:(CDUnknownBlockType)arg2;
+ (id)mergeLikedEntities:(id)arg1 bannedEntities:(id)arg2;
@property(copy, nonatomic) NSOrderedSet *bannedArtists; // @synthesize bannedArtists=_bannedArtists;
@property(copy, nonatomic) NSOrderedSet *likedArtists; // @synthesize likedArtists=_likedArtists;
@property(copy, nonatomic) NSOrderedSet *bannedTracks; // @synthesize bannedTracks=_bannedTracks;
@property(copy, nonatomic) NSOrderedSet *likedTracks; // @synthesize likedTracks=_likedTracks;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> tracksSubscription; // @synthesize tracksSubscription=_tracksSubscription;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionPlatformDataLoader; // @synthesize collectionPlatformDataLoader=_collectionPlatformDataLoader;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> bansSubscription; // @synthesize bansSubscription=_bansSubscription;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> artistsSubscription; // @synthesize artistsSubscription=_artistsSubscription;
@property(nonatomic) __weak id <SPTFreeTierYourLikesModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleLikedTracks:(id)arg1 bannedTracks:(id)arg2;
- (void)handleLikedArists:(id)arg1 bannedArtists:(id)arg2;
- (void)handleSuccessfulBannedArtistsResponse:(SPTCollectionPlatformDataLoaderResponse_f5c2288a *)arg1;
- (void)handleSuccessfulBannedTracksResponse:(SPTCollectionPlatformDataLoaderResponse_f5c2288a *)arg1;
- (void)handleFailedBanSubscription:(id)arg1;
- (void)loadTrackAndArtistBans;
- (void)handleFailedArtistRequest:(id)arg1;
- (void)handleSuccessfulArtistRequest:(SPTCollectionPlatformDataLoaderResponse_f5c2288a *)arg1;
- (void)loadArtistLikes;
- (void)handleFailedTracksRequest:(id)arg1;
- (void)handleSuccessfulTracksRequest:(SPTCollectionPlatformDataLoaderResponse_f5c2288a *)arg1;
- (void)loadTrackLikes;
- (void)loadModel;
- (id)initWithCollectionPlatformDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

