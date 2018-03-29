//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MediaDataSource-Protocol.h"
#import "MediaDelegate-Protocol.h"
#import "NSCoding-Protocol.h"
#import "SCEventFriend-Protocol.h"
#import "SCSortableRecipient-Protocol.h"

@class Media, NSArray, NSDate, NSNumber, NSSet, NSString, SOJUSecurityFideliusFriendInfo;

@interface Friend : NSObject <MediaDataSource, MediaDelegate, NSCoding, SCSortableRecipient, SCEventFriend>
{
    _Bool _hasShownStreakExpiringTimer;
    NSString *_formattedName;
    NSNumber *_isOfficial;
    _Bool _isSuggestedFriend;
    _Bool _isVerified;
    _Bool _newLink;
    _Bool _ignored;
    _Bool _hidden;
    _Bool _isRecommended;
    _Bool _canSeeCustomStories;
    _Bool _needsLoveCandidate;
    _Bool _isSharedStory;
    _Bool _hasCustomDescriptionForSharedStory;
    _Bool _sharedLocalStory;
    _Bool _unVerifiedByServer;
    _Bool _shouldSendClearTextKey;
    _Bool _isPopular;
    _Bool _isMuted;
    _Bool _autoAdded;
    long long _type;
    long long _snapStreakCount;
    long long _snapStreakFilterLastUsed;
    NSNumber *_score;
    NSDate *_lastInteractionTimestamp;
    NSDate *_friendAddedAt;
    NSDate *_friendRequestSentAt;
    NSString *_atomicName;
    NSString *_kvoName;
    NSString *_userId;
    NSString *_display;
    NSString *_suggestionToken;
    NSString *_suggestReasonDisplay;
    NSString *_searchDisplayReason;
    NSSet *_atomicSearchKeywords;
    NSNumber *_contactBasedRecommendationScore;
    NSArray *_friendmojis;
    NSString *_snaptagUrl;
    NSString *_sharedStoryDescription;
    NSString *_sharedStoryId;
    NSString *_sharedStoryVenue;
    NSString *_storyPrivacy;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    Media *_latestStoryThumbnailMedia;
    NSString *_latestStoryMediaKey;
    NSString *_latestStoryThumbnailIv;
    NSString *_latestStoryThumbnailUrl;
    SOJUSecurityFideliusFriendInfo *_fideliusInfo;
    NSString *_birthday;
    NSDate *_birthdayDate;
    NSDate *_expiration;
}

+ (long long)getSnapstreakExpirationWarningMillis;
+ (_Bool)isSnapStreakExpiringEmoji:(id)arg1;
+ (id)firstNameWithPrefixForName:(id)arg1;
+ (id)firstNameForName:(id)arg1;
+ (id)friendWithSuggestedFriend:(id)arg1;
+ (id)friendWithAddedFriend:(id)arg1;
+ (id)convertCategoriesToFriendmojis:(id)arg1;
@property(retain) NSDate *expiration; // @synthesize expiration=_expiration;
@property _Bool autoAdded; // @synthesize autoAdded=_autoAdded;
@property(retain) NSDate *birthdayDate; // @synthesize birthdayDate=_birthdayDate;
@property(copy) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool isPopular; // @synthesize isPopular=_isPopular;
@property _Bool shouldSendClearTextKey; // @synthesize shouldSendClearTextKey=_shouldSendClearTextKey;
@property(retain) SOJUSecurityFideliusFriendInfo *fideliusInfo; // @synthesize fideliusInfo=_fideliusInfo;
@property(readonly) _Bool unVerifiedByServer; // @synthesize unVerifiedByServer=_unVerifiedByServer;
@property(copy) NSString *latestStoryThumbnailUrl; // @synthesize latestStoryThumbnailUrl=_latestStoryThumbnailUrl;
@property(copy) NSString *latestStoryThumbnailIv; // @synthesize latestStoryThumbnailIv=_latestStoryThumbnailIv;
@property(copy) NSString *latestStoryMediaKey; // @synthesize latestStoryMediaKey=_latestStoryMediaKey;
@property(retain) Media *latestStoryThumbnailMedia; // @synthesize latestStoryThumbnailMedia=_latestStoryThumbnailMedia;
@property(copy) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(copy) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property _Bool sharedLocalStory; // @synthesize sharedLocalStory=_sharedLocalStory;
@property(copy) NSString *sharedStoryVenue; // @synthesize sharedStoryVenue=_sharedStoryVenue;
@property(copy) NSString *sharedStoryId; // @synthesize sharedStoryId=_sharedStoryId;
@property _Bool hasCustomDescriptionForSharedStory; // @synthesize hasCustomDescriptionForSharedStory=_hasCustomDescriptionForSharedStory;
@property(copy) NSString *sharedStoryDescription; // @synthesize sharedStoryDescription=_sharedStoryDescription;
@property _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
@property(retain) NSString *snaptagUrl; // @synthesize snaptagUrl=_snaptagUrl;
@property(retain) NSArray *friendmojis; // @synthesize friendmojis=_friendmojis;
@property _Bool needsLoveCandidate; // @synthesize needsLoveCandidate=_needsLoveCandidate;
@property _Bool canSeeCustomStories; // @synthesize canSeeCustomStories=_canSeeCustomStories;
@property(retain) NSNumber *contactBasedRecommendationScore; // @synthesize contactBasedRecommendationScore=_contactBasedRecommendationScore;
@property _Bool isRecommended; // @synthesize isRecommended=_isRecommended;
@property _Bool hidden; // @synthesize hidden=_hidden;
@property _Bool ignored; // @synthesize ignored=_ignored;
@property _Bool newLink; // @synthesize newLink=_newLink;
@property(retain) NSSet *atomicSearchKeywords; // @synthesize atomicSearchKeywords=_atomicSearchKeywords;
@property _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(copy) NSString *searchDisplayReason; // @synthesize searchDisplayReason=_searchDisplayReason;
@property _Bool isSuggestedFriend; // @synthesize isSuggestedFriend=_isSuggestedFriend;
@property(copy) NSString *suggestReasonDisplay; // @synthesize suggestReasonDisplay=_suggestReasonDisplay;
@property(copy) NSString *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(copy) NSString *display; // @synthesize display=_display;
@property(copy) NSString *userId; // @synthesize userId=_userId;
@property(copy) NSString *kvoName; // @synthesize kvoName=_kvoName;
@property(copy) NSString *atomicName; // @synthesize atomicName=_atomicName;
@property(retain) NSDate *friendRequestSentAt; // @synthesize friendRequestSentAt=_friendRequestSentAt;
@property(retain) NSDate *friendAddedAt; // @synthesize friendAddedAt=_friendAddedAt;
@property(copy) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(retain) NSNumber *score; // @synthesize score=_score;
@property long long snapStreakFilterLastUsed; // @synthesize snapStreakFilterLastUsed=_snapStreakFilterLastUsed;
@property long long snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)URLForMedia:(id)arg1;
- (id)requestContexts;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (_Bool)isPsychomantis;
- (_Bool)isImage;
- (_Bool)isVideoStreaming;
- (_Bool)isVideoWithNoSound;
- (_Bool)isVideoWithSound;
- (_Bool)isVideoLaguna;
- (_Bool)isSpectaclesVideo;
- (_Bool)isVideo;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (id)asBitmojiUser;
- (void)updateOfficialStoriesBitmojiAvatarId:(id)arg1 selfieId:(id)arg2;
- (void)updateOfficialStoriesFriendMojiWithString:(id)arg1;
- (void)clearCachedIsOfficialValue;
- (_Bool)isSubscribable;
- (_Bool)isOfficial;
- (_Bool)isCurrentFriend;
- (_Bool)isStoryPublic;
- (_Bool)isInvitedFriend;
- (_Bool)shouldShowFriendmoji:(id)arg1 forViewType:(long long)arg2;
- (id)getFriendmojisWithoutSnapStreakMojis;
- (void)removeSnapStreak;
- (void)setSnapStreakMetadataWithExpiryTime:(id)arg1 withCount:(long long)arg2;
- (id)getSnapStreakExpiringTimeStamp;
- (id)getFriendmojiForViewType:(long long)arg1;
- (id)getFriendmoji;
- (_Bool)hasFriendmoji;
- (id)getSharedStoriesMessage;
- (id)getKey;
- (_Bool)hasBirthdayToday;
- (id)getBirthday;
- (id)duplicate;
- (id)updateWithFriend:(id)arg1;
- (_Bool)isRecentlyAdded;
- (_Bool)isRecentlyAddedFriend;
- (id)nameToDisplay;
- (id)firstNameToDisplay;
- (_Bool)hasDisplay;
- (id)toDictionary;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToFriend:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)keywordMatchesCleanedQuery:(id)arg1;
- (id)searchKeywords;
- (void)setSearchKeywords:(id)arg1;
- (unsigned long long)matchType:(id)arg1;
- (_Bool)matchesByPartialName:(id)arg1;
- (_Bool)matchesByDisplayLastName:(id)arg1;
- (_Bool)matchesByDisplayFirstName:(id)arg1;
- (_Bool)matchesByDisplayAndUserNames:(id)arg1;
- (_Bool)matchesPrefix:(id)arg1;
- (_Bool)matchesByFriendmoji:(id)arg1;
- (_Bool)matchesForOfficialStorySearch:(id)arg1;
- (_Bool)matchesByDisplayName:(id)arg1;
- (_Bool)matchesByUsername:(id)arg1;
- (_Bool)matches:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateSnaptagUrl:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)identifier;
- (void)upgradeFriendmojisIfNecessaryWithSymbols:(id)arg1;
- (id)initTempFriendWithUsername:(id)arg1 displayName:(id)arg2;
- (id)initTempFriendWithUsername:(id)arg1;
- (id)initUnverifiedUserWithUsername:(id)arg1;
- (id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5 isPopular:(_Bool)arg6;
- (id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5;
- (id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3;
- (id)initWithSearchResultSOJU:(id)arg1;
- (void)_initNewFriendFields;
- (id)initWithName:(id)arg1;
- (id)initWithFriend:(id)arg1;
- (id)initWithSuggestedFriend:(id)arg1;
- (id)initWithFindFriendsContact:(id)arg1;
- (id)initWithSoju:(id)arg1;
- (id)javascriptRepresentation;
- (id)initWithJavascriptRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

