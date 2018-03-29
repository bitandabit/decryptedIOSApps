//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSSMStoryThumbnail;

@interface SCSSMPublicUserStoryMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @dynamic bitmojiAvatarSelfieId;
@property(retain, nonatomic) NSMutableArray *candidateThumbnailsArray; // @dynamic candidateThumbnailsArray;
@property(readonly, nonatomic) unsigned long long candidateThumbnailsArray_Count; // @dynamic candidateThumbnailsArray_Count;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) long long displayTimestampSecs; // @dynamic displayTimestampSecs;
@property(copy, nonatomic) NSString *emoji; // @dynamic emoji;
@property(copy, nonatomic) NSString *emojiSafe; // @dynamic emojiSafe;
@property(nonatomic) _Bool hasStoryThumbnail; // @dynamic hasStoryThumbnail;
@property(nonatomic) _Bool isFollowed; // @dynamic isFollowed;
@property(nonatomic) _Bool isOfficial; // @dynamic isOfficial;
@property(nonatomic) _Bool isPopular; // @dynamic isPopular;
@property(retain, nonatomic) NSMutableArray *postSubscribeSuggestionsArray; // @dynamic postSubscribeSuggestionsArray;
@property(readonly, nonatomic) unsigned long long postSubscribeSuggestionsArray_Count; // @dynamic postSubscribeSuggestionsArray_Count;
@property(retain, nonatomic) SCSSMStoryThumbnail *storyThumbnail; // @dynamic storyThumbnail;
@property(nonatomic) double totalDurationSecs; // @dynamic totalDurationSecs;
@property(nonatomic) int totalNumSnaps; // @dynamic totalNumSnaps;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end
