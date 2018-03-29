//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCPBAdsStoryAdMetadata, SCPBBroadcastOfficialStoriesMetadata, SCPBBroadcastTileMetadata, SCPBStoryThumbnails;

@interface SCPBFriendStories : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBAdsStoryAdMetadata *adPlacementMetadata; // @dynamic adPlacementMetadata;
@property(nonatomic) _Bool allowStoryExplorer; // @dynamic allowStoryExplorer;
@property(copy, nonatomic) NSString *deepLinkURL; // @dynamic deepLinkURL;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) SCPBBroadcastTileMetadata *featuredStory; // @dynamic featuredStory;
@property(nonatomic) _Bool hasAdPlacementMetadata; // @dynamic hasAdPlacementMetadata;
@property(nonatomic) _Bool hasCustomDescription; // @dynamic hasCustomDescription;
@property(nonatomic) _Bool hasFeaturedStory; // @dynamic hasFeaturedStory;
@property(nonatomic) _Bool hasOfficialStoriesMetadata; // @dynamic hasOfficialStoriesMetadata;
@property(nonatomic) _Bool hasThumbnails; // @dynamic hasThumbnails;
@property(nonatomic) _Bool isLocal; // @dynamic isLocal;
@property(nonatomic) _Bool isManifestStory; // @dynamic isManifestStory;
@property(nonatomic) _Bool matureContent; // @dynamic matureContent;
@property(nonatomic) int newStoryCount; // @dynamic newStoryCount;
@property(retain, nonatomic) SCPBBroadcastOfficialStoriesMetadata *officialStoriesMetadata; // @dynamic officialStoriesMetadata;
@property(copy, nonatomic) NSString *profileDescription; // @dynamic profileDescription;
@property(copy, nonatomic) NSString *publisherId; // @dynamic publisherId;
@property(copy, nonatomic) NSString *sharedId; // @dynamic sharedId;
@property(nonatomic) _Bool showViewingJit; // @dynamic showViewingJit;
@property(retain, nonatomic) NSMutableArray *storiesArray; // @dynamic storiesArray;
@property(readonly, nonatomic) unsigned long long storiesArray_Count; // @dynamic storiesArray_Count;
@property(retain, nonatomic) SCPBStoryThumbnails *thumbnails; // @dynamic thumbnails;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

